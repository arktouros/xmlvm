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

#import "org_xmlvm_iphone_UIResponder.h"

// UIResponder
//----------------------------------------------------------------------------
@implementation UIResponder (cat_org_xmlvm_iphone_UIResponder)

- (void) touchesBegan:(java_util_Set *)touches withEvent:(UIEvent *)event
{
	if ([self respondsToSelector:@selector(touchesBegan___java_util_Set_org_xmlvm_iphone_UIEvent::)]) {
		[self touchesBegan___java_util_Set_org_xmlvm_iphone_UIEvent:touches :event];
	}
	else {
		[[self nextResponder] touchesBegan:touches withEvent:event];
	}
}

- (void) touchesCancelled:(java_util_Set *)touches withEvent:(UIEvent *)event
{
	if ([self respondsToSelector:@selector(touchesCancelled___java_util_Set_org_xmlvm_iphone_UIEvent::)]) {
		[self touchesCancelled___java_util_Set_org_xmlvm_iphone_UIEvent:touches :event];
	}
	else {
		[[self nextResponder] touchesCancelled:touches withEvent:event];
	}
}

- (void) touchesEnded:(java_util_Set *)touches withEvent:(UIEvent *)event
{
	if ([self respondsToSelector:@selector(touchesEnded___java_util_Set_org_xmlvm_iphone_UIEvent::)]) {
		[self touchesEnded___java_util_Set_org_xmlvm_iphone_UIEvent:touches :event];
	}
	else {
		[[self nextResponder] touchesEnded:touches withEvent:event];
	}
}

- (void) touchesMoved:(java_util_Set *)touches withEvent:(UIEvent *)event
{
	if ([self respondsToSelector:@selector(touchesMoved___java_util_Set_org_xmlvm_iphone_UIEvent::)]) {
		[self touchesMoved___java_util_Set_org_xmlvm_iphone_UIEvent:touches :event];
	}
	else {
		[[self nextResponder] touchesMoved:touches withEvent:event];
	}
}

- (int)resignFirstResponder__
{
	return [self resignFirstResponder];
}

- (int) becomeFirstResponder__
{
	return [self becomeFirstResponder];
}

- (int) isFirstResponder__
{
    return [self isFirstResponder];
}

// Note: it is important this object to be incomplete, or else smart usage of selectors will not be possible
@end
