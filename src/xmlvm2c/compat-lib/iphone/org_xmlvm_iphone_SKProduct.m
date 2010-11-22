#include "org_xmlvm_iphone_NSLocale.h"
#include "java_lang_String.h"

#include "org_xmlvm_iphone_SKProduct.h"

__CLASS_DEFINITION_org_xmlvm_iphone_SKProduct __CLASS_org_xmlvm_iphone_SKProduct = {
    0, // classInitialized
    "org.xmlvm.iphone.SKProduct", // className
    (__CLASS_DEFINITION_TEMPLATE*) &__CLASS_org_xmlvm_iphone_NSObject, // extends
};

//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


void __INIT_org_xmlvm_iphone_SKProduct()
{
    __CLASS_org_xmlvm_iphone_SKProduct.classInitialized = 1;
    // Initialize base class if necessary
    if (!__CLASS_org_xmlvm_iphone_NSObject.classInitialized) __INIT_org_xmlvm_iphone_NSObject();
    __CLASS_org_xmlvm_iphone_SKProduct.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_SKProduct;
    // Copy vtable from base class
    XMLVM_MEMCPY(__CLASS_org_xmlvm_iphone_SKProduct.vtable, __CLASS_org_xmlvm_iphone_NSObject.vtable, sizeof(__CLASS_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    __CLASS_org_xmlvm_iphone_SKProduct.vtable[14] = (VTABLE_PTR) &org_xmlvm_iphone_SKProduct_getLocalizedDescription__;
    __CLASS_org_xmlvm_iphone_SKProduct.vtable[15] = (VTABLE_PTR) &org_xmlvm_iphone_SKProduct_getLocalizedTitle__;
    __CLASS_org_xmlvm_iphone_SKProduct.vtable[16] = (VTABLE_PTR) &org_xmlvm_iphone_SKProduct_getPrice__;
    __CLASS_org_xmlvm_iphone_SKProduct.vtable[17] = (VTABLE_PTR) &org_xmlvm_iphone_SKProduct_getPriceLocale__;
    __CLASS_org_xmlvm_iphone_SKProduct.vtable[18] = (VTABLE_PTR) &org_xmlvm_iphone_SKProduct_getProductIdentifier__;
    // Initialize vtable for implementing interfaces
    __CLASS_org_xmlvm_iphone_SKProduct.numImplementedInterfaces = 0;
    __CLASS_org_xmlvm_iphone_SKProduct.implementedInterfaces = (__CLASS_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__CLASS_DEFINITION_TEMPLATE*) * 0);


    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_SKProduct]
    //XMLVM_END_WRAPPER
}

void __DELETE_org_xmlvm_iphone_SKProduct(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_SKProduct]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_SKProduct()
{
    if (!__CLASS_org_xmlvm_iphone_SKProduct.classInitialized) __INIT_org_xmlvm_iphone_SKProduct();
    org_xmlvm_iphone_SKProduct* me = (org_xmlvm_iphone_SKProduct*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_SKProduct));
    me->__class = &__CLASS_org_xmlvm_iphone_SKProduct;
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_SKProduct]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_SKProduct()
{
    JAVA_OBJECT me = JAVA_NULL;
    return me;
}

JAVA_OBJECT org_xmlvm_iphone_SKProduct_getLocalizedDescription__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKProduct_getLocalizedDescription__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_SKProduct_getLocalizedTitle__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKProduct_getLocalizedTitle__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_DOUBLE org_xmlvm_iphone_SKProduct_getPrice__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKProduct_getPrice__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_SKProduct_getPriceLocale__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKProduct_getPriceLocale__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_SKProduct_getProductIdentifier__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_SKProduct_getProductIdentifier__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

