#ifndef __ORG_XMLVM_IPHONE_NSOPERATIONQUEUE__
#define __ORG_XMLVM_IPHONE_NSOPERATIONQUEUE__

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
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSOperation
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSOperation
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSOperation)
#endif
// Class declarations for org.xmlvm.iphone.NSOperationQueue
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_NSOperationQueue, 7, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_NSOperationQueue)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSOperationQueue;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSOperationQueue_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSOperationQueue_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_NSOperationQueue_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSOperationQueue
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_NSOperationQueue \
    __INSTANCE_FIELDS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_NSOperationQueue \
    } org_xmlvm_iphone_NSOperationQueue

struct org_xmlvm_iphone_NSOperationQueue {
    __TIB_DEFINITION_org_xmlvm_iphone_NSOperationQueue* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_NSOperationQueue;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSOperationQueue
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSOperationQueue
typedef struct org_xmlvm_iphone_NSOperationQueue org_xmlvm_iphone_NSOperationQueue;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_NSOperationQueue 7

void __INIT_org_xmlvm_iphone_NSOperationQueue();
void __INIT_IMPL_org_xmlvm_iphone_NSOperationQueue();
void __DELETE_org_xmlvm_iphone_NSOperationQueue(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_NSOperationQueue(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_NSOperationQueue();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_NSOperationQueue();
void org_xmlvm_iphone_NSOperationQueue___INIT___(JAVA_OBJECT me);
void org_xmlvm_iphone_NSOperationQueue_addOperation___org_xmlvm_iphone_NSOperation(JAVA_OBJECT me, JAVA_OBJECT n1);
void org_xmlvm_iphone_NSOperationQueue_addOperationsWaitUntilFinished___java_util_List_boolean(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BOOLEAN n2);
void org_xmlvm_iphone_NSOperationQueue_addOperationWithBlock__(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_NSOperationQueue_getOperations__(JAVA_OBJECT me);
JAVA_INT org_xmlvm_iphone_NSOperationQueue_getOperationCount__(JAVA_OBJECT me);
void org_xmlvm_iphone_NSOperationQueue_cancelAllOperations__(JAVA_OBJECT me);
void org_xmlvm_iphone_NSOperationQueue_waitUntilAllOperationsAreFinished__(JAVA_OBJECT me);
JAVA_INT org_xmlvm_iphone_NSOperationQueue_getMaxConcurrentOperationCount__(JAVA_OBJECT me);
void org_xmlvm_iphone_NSOperationQueue_setMaxConcurrentOperationCount___int(JAVA_OBJECT me, JAVA_INT n1);
void org_xmlvm_iphone_NSOperationQueue_setSuspended___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1);
JAVA_BOOLEAN org_xmlvm_iphone_NSOperationQueue_isSuspended__(JAVA_OBJECT me);
void org_xmlvm_iphone_NSOperationQueue_setName___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_NSOperationQueue_getName__(JAVA_OBJECT me);
JAVA_OBJECT org_xmlvm_iphone_NSOperationQueue_getCurrentQueue__();
JAVA_OBJECT org_xmlvm_iphone_NSOperationQueue_getMainQueue__();

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSOperationQueue \
XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_NSObject \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSOperationQueue \
XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_NSObject \


#endif
