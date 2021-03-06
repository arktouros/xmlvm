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

package org.xmlvm.iphone.internal.renderer;

import java.awt.Color;
import java.awt.Graphics2D;

import org.xmlvm.XMLVMIgnore;
import org.xmlvm.iphone.CGRect;
import org.xmlvm.iphone.UIGraphics;
import org.xmlvm.iphone.UIWebView;

@XMLVMIgnore
public class UIWebViewRenderer extends UIViewRenderer<UIWebView> {

    private UIWebView webView;


    public UIWebViewRenderer(UIWebView view) {
        super(view);
        webView = view;
    }

    @Override
    public void paint() {
        Graphics2D g = UIGraphics.getCurrentContext().xmlvmGetGraphics2D();
        CGRect displayRect = view.getFrame();
        int x = (int) displayRect.origin.x;
        int y = (int) displayRect.origin.y;
        int w = (int) displayRect.size.width;
        int h = (int) displayRect.size.height;
        g.fillRect(x, y, w, h);
        g.setColor(Color.WHITE);
        g.drawString(webView.xmlvmGetRequest().URL().absoluteString(), x + 20, y + 20);
    }

}
