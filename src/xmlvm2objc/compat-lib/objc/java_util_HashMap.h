/*
 * Copyright (c) 2004-2009 XMLVM --- An XML-based Programming Language
 * 
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 675 Mass
 * Ave, Cambridge, MA 02139, USA.
 * 
 * For more information, visit the XMLVM Home Page at http://www.xmlvm.org
 */

#import "xmlvm.h"
#import "java_util_Collection.h"
#import "java_util_Iterator.h"
#import "java_util_Set.h"
#import "java_lang_Object.h"


// java.util.HashMap
//----------------------------------------------------------------------------
typedef NSMutableDictionary java_util_HashMap;

@interface NSMutableDictionary (cat_java_util_HashMap)

- (void) __init_java_util_HashMap__;
- (void) __init_java_util_HashMap___int: (int) size;
- (void) clear__;
- (java_util_Collection*) values__;
- (java_util_Iterator*) iterator__;
- (int) size__;
- (java_util_Set*) keySet__;
- (java_util_Set*) entrySet__;
- (java_lang_Object*) put___java_lang_Object_java_lang_Object:(java_lang_Object*) key: (java_lang_Object*) value;
- (java_lang_Object*) get___java_lang_Object:(java_lang_Object*) key;

@end