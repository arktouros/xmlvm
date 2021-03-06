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

#import "xmlvm.h"
#import "org_xmlvm_iphone_UIControlDelegate.h"
#import "org_xmlvm_iphone_CGRect.h"


// UIControl
//----------------------------------------------------------------------------
#define org_xmlvm_iphone_UIControl UIControl
@interface UIControl (cat_org_xmlvm_iphone_UIControl)
- (void) __init_org_xmlvm_iphone_UIControl__;
- (void) __init_org_xmlvm_iphone_UIControl___org_xmlvm_iphone_CGRect :(org_xmlvm_iphone_CGRect*) rect;
- (void) addTarget___org_xmlvm_iphone_UIControlDelegate_int
                   :(id<org_xmlvm_iphone_UIControlDelegate>) delegate
                   :(int) controlEvents;
- (int) getState__;
- (int) isEnabled__;
- (void) setEnabled___boolean:(int)selected;
- (int) isSelected__;
- (void) setSelected___boolean:(int)selected;
- (int) isHighlighted__;
- (void) setHighlighted___boolean:(int)selected;
- (void) setContentHorizontalAlignment___int:(int) al;
- (int) getContentHorizontalAlignment__;
- (void) setContentVerticalAlignment___int:(int) al;
- (int) getContentVerticalAlignment__;

@end
