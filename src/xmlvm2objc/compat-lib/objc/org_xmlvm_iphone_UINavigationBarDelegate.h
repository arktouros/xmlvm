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
#import "java_lang_Object.h"
#import "org_xmlvm_iphone_UINavigationItem.h"
#import "org_xmlvm_iphone_UINavigationBar.h"

@interface org_xmlvm_iphone_UINavigationBarDelegate : java_lang_Object <UINavigationBarDelegate>

- (void) org_xmlvm_iphone_UINavigationBarDelegate__;
- (int) shouldPushItem___org_xmlvm_iphone_UINavigationBar_org_xmlvm_iphone_UINavigationItem :(org_xmlvm_iphone_UINavigationBar*)bar :(org_xmlvm_iphone_UINavigationItem*)item;
- (void) didPushItem___org_xmlvm_iphone_UINavigationBar_org_xmlvm_iphone_UINavigationItem :(org_xmlvm_iphone_UINavigationBar*)bar :(org_xmlvm_iphone_UINavigationItem*)item;
- (int) shouldPopItem___org_xmlvm_iphone_UINavigationBar_org_xmlvm_iphone_UINavigationItem :(org_xmlvm_iphone_UINavigationBar*)bar :(org_xmlvm_iphone_UINavigationItem*)item;
- (void) didPopItem___org_xmlvm_iphone_UINavigationBar_org_xmlvm_iphone_UINavigationItem :(org_xmlvm_iphone_UINavigationBar*)bar :(org_xmlvm_iphone_UINavigationItem*)item;

@end

