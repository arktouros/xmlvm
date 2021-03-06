/* Copyright (c) 2002-2011 by XMLVM.org
 *
 * Project Info:  http://www.xmlvm.org
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */

package org.xmlvm.iphone.internal;

import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.Image;
import java.awt.Rectangle;
import java.awt.RenderingHints;
import java.awt.event.KeyEvent;
import java.awt.event.MouseEvent;
import java.awt.image.ImageObserver;
import java.util.HashSet;
import java.util.Set;

import org.xmlvm.XMLVMIgnore;
import org.xmlvm.XMLVMSkeletonOnly;
import org.xmlvm.iphone.CGContext;
import org.xmlvm.iphone.CGRect;
import org.xmlvm.iphone.UIApplication;
import org.xmlvm.iphone.UIEvent;
import org.xmlvm.iphone.UIGraphics;
import org.xmlvm.iphone.UIInterfaceOrientation;
import org.xmlvm.iphone.UIResponder;
import org.xmlvm.iphone.UITouch;
import org.xmlvm.iphone.UITouchPhase;
import org.xmlvm.iphone.UIView;
import org.xmlvm.iphone.UIWindow;

@XMLVMIgnore
public class Display implements ImageObserver {

    private StatusBar   statusBar;
    private Gestures    gestures;
    private UIView      keyListener;
    private Device      device;
    private UIResponder currentResponder;


    public Display(Device device) {
        this.device = device;
        gestures = new Gestures();
        statusBar = null;
        keyListener = null;
        // this.addKeyListener(this);
    }

    public void addGestureListener(GestureListener listener) {
        gestures.addGestureListener(listener);
    }

    public void setStatusBar(StatusBar statusBar) {
        this.statusBar = statusBar;
    }

    public void paint(Graphics2D g2d) {
        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        Rectangle savedClip = g2d.getClipBounds();
        Rectangle r = new Rectangle(Device.ScreenSize);
        g2d.setClip(r);

        UIGraphics.pushContext(CGContext.xmlvmNewCGContext(g2d));
        g2d.setBackground(Color.BLACK);
        g2d.clearRect(r.x, r.y, r.width, r.height);
        CGRect rect = new CGRect(r.x, r.y, r.width, r.height);
        // UIWindow keyWindow =
        // UIApplication.sharedApplication().getKeyWindow();
        // if (keyWindow != null)
        // keyWindow.xmlvmDrawRect(rect);

        for (UIWindow window : UIApplication.sharedApplication().getWindows()) {
            window.xmlvmDrawRect(rect);
        }

        statusBar.xmlvmDrawRect(rect);

        g2d.setClip(savedClip);
        UIGraphics.popContext();
    }

    private void deliverTouchesEvent(int phase, MouseEvent e) {
        // TODO
        UIEvent event = null;

        int x = translateX(e.getX(), e.getY());
        int y = translateY(e.getX(), e.getY());

        // Ignore events outside of the display or map it to a touches ended
        if (x < 0 || x > 319 || y < 0 || y > 479) {
            if (currentResponder == null) {
                return;
            } else {
                phase = UITouchPhase.Ended;
            }
        }

        // Map a mouse move which has no preceeding touchesBegan to a
        // touchesBegan
        if (phase == UITouchPhase.Moved && currentResponder == null) {
            phase = UITouchPhase.Began;
        }

        // Generate a temporal touch set for hit testing
        Set<UITouch> touches = new HashSet<UITouch>();
        UITouch touch = new UITouch(phase, null, x, y);
        touches.add(touch);

        // Find top most view touched
        UIWindow keyWindow = UIApplication.sharedApplication().getKeyWindow();
        if (keyWindow == null)
            return;
        ViewSearchResult result = new ViewSearchResult();
        findTouchedView(touches, keyWindow, 0, result);

        // Determine target responder
        UIResponder responder = null;
        if (currentResponder != null) {
            responder = currentResponder;
        } else {
            responder = result.uiView != null ? result.uiView : keyWindow;
        }

        // Generate the final touch set which also includes the target view
        touches = new HashSet<UITouch>();
        touch = new UITouch(phase, result.uiView, x, y);
        touches.add(touch);

        switch (phase) {
        case UITouchPhase.Began:
            currentResponder = responder;
            responder.touchesBegan(touches, event);
            break;
        case UITouchPhase.Moved:
            responder.touchesMoved(touches, event);
            break;
        case UITouchPhase.Ended:
            responder.touchesEnded(touches, event);
            currentResponder = null;
            break;
        case UITouchPhase.Cancelled:
            responder.touchesCancelled(touches, event);
            currentResponder = null;
            break;
        }
    }

    public void mouseClicked(MouseEvent e) {
        gestures.mouseClicked(e);
    }

    public void mouseEntered(MouseEvent e) {
        gestures.mouseEntered(e);
    }

    public void mouseExited(MouseEvent e) {
        gestures.mouseExited(e);
    }

    public void mousePressed(MouseEvent e) {
        gestures.mousePressed(e);
        this.deliverTouchesEvent(UITouchPhase.Began, e);
    }

    public void mouseReleased(MouseEvent e) {
        gestures.mouseReleased(e);
        this.deliverTouchesEvent(UITouchPhase.Ended, e);
    }

    public void mouseDragged(MouseEvent e) {
        gestures.mouseDragged(e);
        this.deliverTouchesEvent(UITouchPhase.Moved, e);
    }

    public void mouseMoved(MouseEvent e) {
        gestures.mouseMoved(e);
    }

    public void keyPressed(KeyEvent arg0) {
        // TODO Auto-generated method stub

    }

    public void keyReleased(KeyEvent arg0) {
        // TODO Auto-generated method stub

    }

    public void keyTyped(KeyEvent e) {
        if (keyListener != null)
            keyListener.xmlvmKeyTyped(e.getKeyChar());
    }

    public void addKeyListener(UIView listener) {
        // TODO right now only one key listener is allowed!
        this.keyListener = listener;
    }

    @Override
    public boolean imageUpdate(Image img, int infoflags, int x, int y, int width, int height) {
        return device.imageUpdate(img, infoflags, x, y, width, height);
    }

    private int translateX(int x, int y) {
        switch (Simulator.getStatusBarOrientation()) {
        case UIInterfaceOrientation.LandscapeLeft:
            return 359 - y;
        case UIInterfaceOrientation.LandscapeRight:
            return y - 40;
        case UIInterfaceOrientation.PortraitUpsideDown:
            return 319 - x + 35;
        case UIInterfaceOrientation.Portrait:
        default:
            return x - 35;
        }
    }

    private int translateY(int x, int y) {
        switch (Simulator.getStatusBarOrientation()) {
        case UIInterfaceOrientation.LandscapeLeft:
            return x - 112;
        case UIInterfaceOrientation.LandscapeRight:
            return 479 - x + 112;
        case UIInterfaceOrientation.PortraitUpsideDown:
            return 479 - y + 107;
        case UIInterfaceOrientation.Portrait:
        default:
            return y - 107;
        }
    }

    private void findTouchedView(Set<UITouch> touches, UIView uiView, int nesting,
            ViewSearchResult result) {
        if (uiView.isHidden() || !uiView.isUserInteractionEnabled()) {
            return;
        }
        if ((!uiView.isHidden()) && uiView.isUserInteractionEnabled()
                && uiView.xmlvmTouchedInsideView(touches)) {
            result.level = nesting;
            result.uiView = uiView;
        }
        for (UIView childView : uiView.getSubviews()) {
            findTouchedView(touches, childView, nesting + 1, result);
        }
    }


    @XMLVMIgnore
    private class ViewSearchResult {
        private int    level;
        private UIView uiView;
    }
}
