#ifndef __ORG_XMLVM_IPHONE_CGIMAGE__
#define __ORG_XMLVM_IPHONE_CGIMAGE__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
// Implemented interfaces:
// Super Class:
#include "org_xmlvm_iphone_CFType.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGDataProvider
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGDataProvider
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGDataProvider)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGRect
XMLVM_FORWARD_DECL(org_xmlvm_iphone_CGRect)
#endif
// Class declarations for org.xmlvm.iphone.CGImage
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_CGImage, 8, XMLVM_ITABLE_SIZE_org_xmlvm_iphone_CGImage)

extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_CGImage;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_CGImage_1ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_CGImage_2ARRAY;
extern JAVA_OBJECT __CLASS_org_xmlvm_iphone_CGImage_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#import <CoreGraphics/CGImage.h>

#define __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_CGImage

void org_xmlvm_iphone_CGImage_INTERNAL_CONSTRUCTOR(JAVA_OBJECT me, CGImageRef wrappedImage);
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_org_xmlvm_iphone_CGImage \
    __INSTANCE_FIELDS_org_xmlvm_iphone_CFType; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_org_xmlvm_iphone_CGImage \
    } org_xmlvm_iphone_CGImage

struct org_xmlvm_iphone_CGImage {
    __TIB_DEFINITION_org_xmlvm_iphone_CGImage* tib;
    struct {
        __INSTANCE_FIELDS_org_xmlvm_iphone_CGImage;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGImage
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_CGImage
typedef struct org_xmlvm_iphone_CGImage org_xmlvm_iphone_CGImage;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_CGImage 8

void __INIT_org_xmlvm_iphone_CGImage();
void __INIT_IMPL_org_xmlvm_iphone_CGImage();
void __DELETE_org_xmlvm_iphone_CGImage(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_CGImage(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_org_xmlvm_iphone_CGImage();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_CGImage();
JAVA_OBJECT org_xmlvm_iphone_CGImage_createWithImageInRect___org_xmlvm_iphone_CGImage_org_xmlvm_iphone_CGRect(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT org_xmlvm_iphone_CGImage_createPNGFromDataProvider___org_xmlvm_iphone_CGDataProvider(JAVA_OBJECT n1);
JAVA_INT org_xmlvm_iphone_CGImage_getWidth__(JAVA_OBJECT me);
JAVA_INT org_xmlvm_iphone_CGImage_getHeight__(JAVA_OBJECT me);

// Define a Macro for the method declarations of the Obj-C wrapper class so that subclass wrappers may easily include these too
#define XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_CGImage \
XMLVM_OBJC_OVERRIDE_CLASS_DECLARATIONS_org_xmlvm_iphone_CFType \

// Define a Macro for the entire contents of the Obj-C wrapper class
#define XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_CGImage \
XMLVM_OBJC_OVERRIDE_CLASS_DEFINITIONS_org_xmlvm_iphone_CFType \


#endif
