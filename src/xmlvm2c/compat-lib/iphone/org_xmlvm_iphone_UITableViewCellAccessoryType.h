#ifndef __ORG_XMLVM_IPHONE_UITABLEVIEWCELLACCESSORYTYPE__
#define __ORG_XMLVM_IPHONE_UITABLEVIEWCELLACCESSORYTYPE__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
// Class declarations for org.xmlvm.iphone.UITableViewCellAccessoryType
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_UITableViewCellAccessoryType, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_UITableViewCellAccessoryType)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCellAccessoryType;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCellAccessoryType_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCellAccessoryType_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_UITableViewCellAccessoryType_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellAccessoryType
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellAccessoryType \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellAccessoryType \
    } org_xmlvm_iphone_UITableViewCellAccessoryType

struct org_xmlvm_iphone_UITableViewCellAccessoryType {
    __TIB_DEFINITION_org_xmlvm_iphone_UITableViewCellAccessoryType* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_UITableViewCellAccessoryType;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewCellAccessoryType
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_UITableViewCellAccessoryType
typedef struct org_xmlvm_iphone_UITableViewCellAccessoryType org_xmlvm_iphone_UITableViewCellAccessoryType;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_UITableViewCellAccessoryType 6

void __INIT_org_xmlvm_iphone_UITableViewCellAccessoryType();
void __INIT_IMPL_org_xmlvm_iphone_UITableViewCellAccessoryType();
void __DELETE_org_xmlvm_iphone_UITableViewCellAccessoryType(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_UITableViewCellAccessoryType(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_UITableViewCellAccessoryType();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_UITableViewCellAccessoryType();
JAVA_INT org_xmlvm_iphone_UITableViewCellAccessoryType_GET_None();
void org_xmlvm_iphone_UITableViewCellAccessoryType_PUT_None(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITableViewCellAccessoryType_GET_DisclosureIndicator();
void org_xmlvm_iphone_UITableViewCellAccessoryType_PUT_DisclosureIndicator(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITableViewCellAccessoryType_GET_DetailDisclosureButton();
void org_xmlvm_iphone_UITableViewCellAccessoryType_PUT_DetailDisclosureButton(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_UITableViewCellAccessoryType_GET_Checkmark();
void org_xmlvm_iphone_UITableViewCellAccessoryType_PUT_Checkmark(JAVA_INT v);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_UITableViewCellAccessoryType \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_UITableViewCellAccessoryType \


#endif
