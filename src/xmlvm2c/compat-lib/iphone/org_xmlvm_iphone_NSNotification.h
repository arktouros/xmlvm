#ifndef __ORG_XMLVM_IPHONE_NSNOTIFICATION__
#define __ORG_XMLVM_IPHONE_NSNOTIFICATION__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
// Class declarations for org.xmlvm.iphone.NSNotification
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSNotification, 7, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_NSNotification)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSNotification;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSNotification_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSNotification_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSNotification_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSNotification
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_NSNotification \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSNotification \
    } org_xmlvm_iphone_NSNotification

struct org_xmlvm_iphone_NSNotification {
    __TIB_DEFINITION_org_xmlvm_iphone_NSNotification* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_NSNotification;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSNotification
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSNotification
typedef struct org_xmlvm_iphone_NSNotification org_xmlvm_iphone_NSNotification;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSNotification 7

void __INIT_org_xmlvm_iphone_NSNotification();
void __INIT_IMPL_org_xmlvm_iphone_NSNotification();
void __DELETE_org_xmlvm_iphone_NSNotification(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_NSNotification(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSNotification();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSNotification();
void org_xmlvm_iphone_NSNotification___INIT___(JAVA_OBJECT me);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSNotification \
XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSObject \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSNotification \
XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSObject \


#endif
