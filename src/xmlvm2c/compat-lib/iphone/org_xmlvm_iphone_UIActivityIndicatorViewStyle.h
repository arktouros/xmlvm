#ifndef __ORG_XMLVM_IPHONE_UIACTIVITYINDICATORVIEWSTYLE__
#define __ORG_XMLVM_IPHONE_UIACTIVITYINDICATORVIEWSTYLE__

#include "xmlvm.h"
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
// Class declarations for org.xmlvm.iphone.UIActivityIndicatorViewStyle
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UIActivityIndicatorViewStyle, 11)

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIActivityIndicatorViewStyle
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UIActivityIndicatorViewStyle \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UIActivityIndicatorViewStyle \
    } org_xmlvm_iphone_UIActivityIndicatorViewStyle

struct org_xmlvm_iphone_UIActivityIndicatorViewStyle {
    __TIB_DEFINITION_org_xmlvm_iphone_UIActivityIndicatorViewStyle* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UIActivityIndicatorViewStyle;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIActivityIndicatorViewStyle
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UIActivityIndicatorViewStyle
typedef struct org_xmlvm_iphone_UIActivityIndicatorViewStyle org_xmlvm_iphone_UIActivityIndicatorViewStyle;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UIActivityIndicatorViewStyle 11

void __INIT_org_xmlvm_iphone_UIActivityIndicatorViewStyle();
JAVA_OBJECT __NEW_org_xmlvm_iphone_UIActivityIndicatorViewStyle();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UIActivityIndicatorViewStyle();
JAVA_INT org_xmlvm_iphone_UIActivityIndicatorViewStyle_GET_WhiteLarge();
void org_xmlvm_iphone_UIActivityIndicatorViewStyle_PUT_WhiteLarge(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIActivityIndicatorViewStyle_GET_White();
void org_xmlvm_iphone_UIActivityIndicatorViewStyle_PUT_White(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UIActivityIndicatorViewStyle_GET_Gray();
void org_xmlvm_iphone_UIActivityIndicatorViewStyle_PUT_Gray(JAVA_INT v);
void org_xmlvm_iphone_UIActivityIndicatorViewStyle___INIT___(JAVA_OBJECT me);

#endif
