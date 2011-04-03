#ifndef __ORG_XMLVM_IPHONE_MKANNOTATIONVIEWDRAGSTATE__
#define __ORG_XMLVM_IPHONE_MKANNOTATIONVIEWDRAGSTATE__

#include "xmlvm.h"
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Object
#define XMLVM_FORWARD_DECL_java_lang_Object
XMLVM_FORWARD_DECL(java_lang_Object)
#endif
// Class declarations for org.xmlvm.iphone.MKAnnotationViewDragState
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_MKAnnotationViewDragState, 6, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_MKAnnotationViewDragState)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKAnnotationViewDragState;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKAnnotationViewDragState_3ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKAnnotationViewDragState_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_MKAnnotationViewDragState_1ARRAY;

//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKAnnotationViewDragState
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_MKAnnotationViewDragState \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_MKAnnotationViewDragState \
    } org_xmlvm_iphone_MKAnnotationViewDragState

struct org_xmlvm_iphone_MKAnnotationViewDragState {
    __TIB_DEFINITION_org_xmlvm_iphone_MKAnnotationViewDragState* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_MKAnnotationViewDragState;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKAnnotationViewDragState
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_MKAnnotationViewDragState
typedef struct org_xmlvm_iphone_MKAnnotationViewDragState org_xmlvm_iphone_MKAnnotationViewDragState;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_MKAnnotationViewDragState 6

void __INIT_org_xmlvm_iphone_MKAnnotationViewDragState();
void __INIT_IMPL_org_xmlvm_iphone_MKAnnotationViewDragState();
void __DELETE_org_xmlvm_iphone_MKAnnotationViewDragState(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_MKAnnotationViewDragState(JAVA_OBJECT me);
JAVA_OBJECT __NEW_org_xmlvm_iphone_MKAnnotationViewDragState();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_MKAnnotationViewDragState();
JAVA_INT org_xmlvm_iphone_MKAnnotationViewDragState_GET_None();
void org_xmlvm_iphone_MKAnnotationViewDragState_PUT_None(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_MKAnnotationViewDragState_GET_Starting();
void org_xmlvm_iphone_MKAnnotationViewDragState_PUT_Starting(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_MKAnnotationViewDragState_GET_Dragging();
void org_xmlvm_iphone_MKAnnotationViewDragState_PUT_Dragging(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_MKAnnotationViewDragState_GET_Canceling();
void org_xmlvm_iphone_MKAnnotationViewDragState_PUT_Canceling(JAVA_INT v);
JAVA_INT org_xmlvm_iphone_MKAnnotationViewDragState_GET_Ending();
void org_xmlvm_iphone_MKAnnotationViewDragState_PUT_Ending(JAVA_INT v);

#endif
