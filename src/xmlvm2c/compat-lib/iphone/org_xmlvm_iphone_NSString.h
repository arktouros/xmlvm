#ifndef __ORG_XMLVM_IPHONE_NSSTRING__
#define __ORG_XMLVM_IPHONE_NSSTRING__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_List
#define XMLVM_FORWARD_DECL_java_util_List
XMLVM_FORWARD_DECL(java_util_List)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGPoint
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGPoint
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGPoint)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGRect)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGSize
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGSize
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGSize)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSData)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURL
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURL
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSURL)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIFont
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIFont
XMLVM_FORWARD_DECL(org_xmlvm_iphone_UIFont)
#endif
// Class declarations for org.xmlvm.iphone.NSString
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSString, 7, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_NSString)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSString;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSString_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSString_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSString_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#import <Foundation/Foundation.h>

NSString* toNSString(JAVA_OBJECT o);
JAVA_OBJECT fromNSString(NSString* str);

#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSString
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_NSString \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSString \
    } org_xmlvm_iphone_NSString

struct org_xmlvm_iphone_NSString {
    __TIB_DEFINITION_org_xmlvm_iphone_NSString* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_NSString;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSString
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSString
typedef struct org_xmlvm_iphone_NSString org_xmlvm_iphone_NSString;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSString 7

void __INIT_org_xmlvm_iphone_NSString();
void __INIT_IMPL_org_xmlvm_iphone_NSString();
void __DELETE_org_xmlvm_iphone_NSString(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_NSString(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSString();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSString();
void org_xmlvm_iphone_NSString___INIT____java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_NSString_stringWithContentsOfFile___java_lang_String(JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_NSString_stringWithContentsOfURL___org_xmlvm_iphone_NSURL_int(JAVA_OBJECT n1, JAVA_INT n2);
JAVA_OBJECT org_xmlvm_iphone_NSString_stringWithContentsOfURL___org_xmlvm_iphone_NSURL(JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_NSString_dataUsingEncoding___java_lang_String_int(JAVA_OBJECT n1, JAVA_INT n2);
JAVA_INT org_xmlvm_iphone_NSString_compare___java_lang_String_java_lang_String_int(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_INT n3);
JAVA_OBJECT org_xmlvm_iphone_NSString_stringByAddingPercentEscapesUsingEncoding___java_lang_String_int(JAVA_OBJECT n1, JAVA_INT n2);
JAVA_OBJECT org_xmlvm_iphone_NSString_componentsSeparatedByString___java_lang_String_java_lang_String(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT org_xmlvm_iphone_NSString_initWithData___org_xmlvm_iphone_NSData_int(JAVA_OBJECT n1, JAVA_INT n2);
void org_xmlvm_iphone_NSString_drawAtPoint___java_lang_String_org_xmlvm_iphone_CGPoint_org_xmlvm_iphone_UIFont(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
JAVA_OBJECT org_xmlvm_iphone_NSString_drawInRect___java_lang_String_org_xmlvm_iphone_CGRect_org_xmlvm_iphone_UIFont(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
JAVA_OBJECT org_xmlvm_iphone_NSString_drawInRect___java_lang_String_org_xmlvm_iphone_CGRect_org_xmlvm_iphone_UIFont_int(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3, JAVA_INT n4);
JAVA_OBJECT org_xmlvm_iphone_NSString_drawInRect___java_lang_String_org_xmlvm_iphone_CGRect_org_xmlvm_iphone_UIFont_int_int(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3, JAVA_INT n4, JAVA_INT n5);
JAVA_OBJECT org_xmlvm_iphone_NSString_sizeWithFont___java_lang_String_org_xmlvm_iphone_UIFont(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT org_xmlvm_iphone_NSString_sizeWithFont___java_lang_String_org_xmlvm_iphone_UIFont_org_xmlvm_iphone_CGSize_int(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3, JAVA_INT n4);
JAVA_BOOLEAN org_xmlvm_iphone_NSString_writeToFile___java_lang_String_java_lang_String_boolean_int(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_BOOLEAN n3, JAVA_INT n4);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSString \
XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSObject \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSString \
XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSObject \


#endif
