
package org.xmlvm.iphone.internal.renderer;

import java.awt.Color;
import java.awt.FontMetrics;
import java.awt.Graphics2D;

import org.xmlvm.iphone.CGContext;
import org.xmlvm.iphone.CGRect;
import org.xmlvm.iphone.UIColor;
import org.xmlvm.iphone.UITextBorderStyle;
import org.xmlvm.iphone.UITextField;

public class UITextFieldRenderer extends UIViewRenderer<UITextField> {

    private static final int TEXT_LEFT_INSET = 5;

    public UITextFieldRenderer(UITextField view) {
        super(view);
    }

    public void paint() {
        Graphics2D g = CGContext.UICurrentContext().xmlvmGetGraphics2D();
        g.setFont(view.getFont().xmlvmGetFont());
        CGRect displayRect = view.getFrame();
        g.setBackground(Color.WHITE);
        int rectX = (int) displayRect.origin.x;
        int rectY = (int) displayRect.origin.y;
        int rectWidth = (int) displayRect.size.width;
        int rectHeight = (int) displayRect.size.height;
        if (view.getBackgroundColor() != UIColor.clearColor) {
            g.setPaint(view.getBackgroundColor().xmlvmGetPaint());
            g.fillRect(rectX, rectY, rectWidth, rectHeight);
        }

        g.clearRect(rectX, rectY, rectWidth, rectHeight);
        switch (view.getBorderStyle()) {
        case UITextBorderStyle.Bezel:
            g.setColor(Color.GRAY);
            g.draw3DRect(rectX, rectY, rectWidth, rectHeight, false);
            break;
        }
        g.setPaint(view.getTextColor().xmlvmGetPaint());
        FontMetrics fm = g.getFontMetrics();
        int width = fm.stringWidth(view.getText());
        int height = fm.getHeight();
        int descent = fm.getDescent();
        int x = (int) displayRect.origin.x + TEXT_LEFT_INSET;
        int y = (int) displayRect.origin.y;
        y += ((int) view.getFrame().size.height - height) / 2 + height - descent;
        g.drawString(view.getText(), x, y);
    }
}
