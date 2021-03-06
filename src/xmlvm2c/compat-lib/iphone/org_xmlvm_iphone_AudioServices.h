#ifndef __ORG_XMLVM_IPHONE_AUDIOSERVICES__
#define __ORG_XMLVM_IPHONE_AUDIOSERVICES__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
// Class declarations for org.xmlvm.iphone.AudioServices
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_AudioServices, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_AudioServices)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_AudioServices;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_AudioServices_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_AudioServices_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_AudioServices_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_AudioServices
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_AudioServices \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_AudioServices \
    } org_xmlvm_iphone_AudioServices

struct org_xmlvm_iphone_AudioServices {
    __TIB_DEFINITION_org_xmlvm_iphone_AudioServices* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_AudioServices;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_AudioServices
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_AudioServices
typedef struct org_xmlvm_iphone_AudioServices org_xmlvm_iphone_AudioServices;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_AudioServices 6

void __INIT_org_xmlvm_iphone_AudioServices();
void __INIT_IMPL_org_xmlvm_iphone_AudioServices();
void __DELETE_org_xmlvm_iphone_AudioServices(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_AudioServices(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_AudioServices();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_AudioServices();
void org_xmlvm_iphone_AudioServices_playSystemSound___int(JAVA_INT n1);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_AudioServices \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_AudioServices \


#endif
