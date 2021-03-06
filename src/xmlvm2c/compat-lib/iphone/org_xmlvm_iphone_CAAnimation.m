#include "xmlvm.h"
#include "java_lang_String.h"
#include "java_util_Map.h"
#include "org_xmlvm_iphone_CAAnimationDelegate.h"
#include "org_xmlvm_iphone_CAAnimationDelegate_Wrapper.h"

#include "org_xmlvm_iphone_CAAnimation.h"

#define XMLVM_CURRENT_CLASS_NAME CAAnimation
#define XMLVM_CURRENT_PKG_CLASS_NAME org_xmlvm_iphone_CAAnimation

__TIB_DEFINITION_org_xmlvm_iphone_CAAnimation __TIB_org_xmlvm_iphone_CAAnimation = {
    0, // classInitializationBegan
    0, // classInitialized
    -1, // initializerThreadId
    __INIT_org_xmlvm_iphone_CAAnimation, // classInitializer
    "org.xmlvm.iphone.CAAnimation", // className
    "org.xmlvm.iphone", // package
    JAVA_NULL, // enclosingClassName
    JAVA_NULL, // enclosingMethodName
    JAVA_NULL, // signature
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_org_xmlvm_iphone_NSObject, // extends
    sizeof(org_xmlvm_iphone_CAAnimation), // sizeInstance
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_iphone_CAAnimation;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_CAAnimation_1ARRAY;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_CAAnimation_2ARRAY;
JAVA_OBJECT __CLASS_org_xmlvm_iphone_CAAnimation_3ARRAY;
//XMLVM_BEGIN_IMPLEMENTATION

void org_xmlvm_iphone_CAAnimation_INTERNAL_CONSTRUCTOR(JAVA_OBJECT me, NSObject* wrappedObjCObj)
{
    org_xmlvm_iphone_NSObject_INTERNAL_CONSTRUCTOR(me, wrappedObjCObj);
}

//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
    {"delegateWrapper",
    &__CLASS_org_xmlvm_iphone_CAAnimationDelegate_Wrapper,
    0,
    XMLVM_OFFSETOF(org_xmlvm_iphone_CAAnimation, fields.org_xmlvm_iphone_CAAnimation.delegateWrapper_),
    0,
    "",
    JAVA_NULL},
};

static JAVA_OBJECT* __constructor0_arg_types[] = {
};

static XMLVM_CONSTRUCTOR_REFLECTION_DATA __constructor_reflection_data[] = {
    {&__constructor0_arg_types[0],
    sizeof(__constructor0_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()V",
    JAVA_NULL,
    JAVA_NULL},
};

static JAVA_OBJECT constructor_dispatcher(JAVA_OBJECT constructor, JAVA_OBJECT arguments)
{
    JAVA_OBJECT obj = __NEW_org_xmlvm_iphone_CAAnimation();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    case 0:
        org_xmlvm_iphone_CAAnimation___INIT___(obj);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

static JAVA_OBJECT* __method0_arg_types[] = {
    &__CLASS_java_lang_String,
};

static JAVA_OBJECT* __method1_arg_types[] = {
};

static JAVA_OBJECT* __method2_arg_types[] = {
    &__CLASS_org_xmlvm_iphone_CAAnimationDelegate,
};

static JAVA_OBJECT* __method3_arg_types[] = {
};

static JAVA_OBJECT* __method4_arg_types[] = {
    &__CLASS_boolean,
};

static JAVA_OBJECT* __method5_arg_types[] = {
};

static JAVA_OBJECT* __method6_arg_types[] = {
    &__CLASS_double,
};

static JAVA_OBJECT* __method7_arg_types[] = {
    &__CLASS_java_lang_String,
    &__CLASS_org_xmlvm_iphone_NSObject,
    &__CLASS_java_util_Map,
};

static JAVA_OBJECT* __method8_arg_types[] = {
};

static JAVA_OBJECT* __method9_arg_types[] = {
    &__CLASS_boolean,
};

static JAVA_OBJECT* __method10_arg_types[] = {
};

static JAVA_OBJECT* __method11_arg_types[] = {
    &__CLASS_double,
};

static JAVA_OBJECT* __method12_arg_types[] = {
};

static JAVA_OBJECT* __method13_arg_types[] = {
    &__CLASS_java_lang_String,
};

static JAVA_OBJECT* __method14_arg_types[] = {
};

static JAVA_OBJECT* __method15_arg_types[] = {
    &__CLASS_float,
};

static JAVA_OBJECT* __method16_arg_types[] = {
};

static JAVA_OBJECT* __method17_arg_types[] = {
    &__CLASS_double,
};

static JAVA_OBJECT* __method18_arg_types[] = {
};

static JAVA_OBJECT* __method19_arg_types[] = {
    &__CLASS_float,
};

static JAVA_OBJECT* __method20_arg_types[] = {
};

static JAVA_OBJECT* __method21_arg_types[] = {
    &__CLASS_double,
};

static XMLVM_METHOD_REFLECTION_DATA __method_reflection_data[] = {
    {"defaultValueForKey",
    &__method0_arg_types[0],
    sizeof(__method0_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Ljava/lang/String;)Ljava/lang/String;",
    JAVA_NULL,
    JAVA_NULL},
    {"getDelegate",
    &__method1_arg_types[0],
    sizeof(__method1_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()Lorg/xmlvm/iphone/CAAnimationDelegate;",
    JAVA_NULL,
    JAVA_NULL},
    {"setDelegate",
    &__method2_arg_types[0],
    sizeof(__method2_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Lorg/xmlvm/iphone/CAAnimationDelegate;)V",
    JAVA_NULL,
    JAVA_NULL},
    {"isRemovedOnCompletion",
    &__method3_arg_types[0],
    sizeof(__method3_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()Z",
    JAVA_NULL,
    JAVA_NULL},
    {"setRemovedOnCompletion",
    &__method4_arg_types[0],
    sizeof(__method4_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Z)V",
    JAVA_NULL,
    JAVA_NULL},
    {"getDuration",
    &__method5_arg_types[0],
    sizeof(__method5_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()D",
    JAVA_NULL,
    JAVA_NULL},
    {"setDuration",
    &__method6_arg_types[0],
    sizeof(__method6_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(D)V",
    JAVA_NULL,
    JAVA_NULL},
    {"runAction",
    &__method7_arg_types[0],
    sizeof(__method7_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Ljava/lang/String;Lorg/xmlvm/iphone/NSObject;Ljava/util/Map;)V",
    JAVA_NULL,
    JAVA_NULL},
    {"isAutoreverses",
    &__method8_arg_types[0],
    sizeof(__method8_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()Z",
    JAVA_NULL,
    JAVA_NULL},
    {"setAutoreverses",
    &__method9_arg_types[0],
    sizeof(__method9_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Z)V",
    JAVA_NULL,
    JAVA_NULL},
    {"getBeginTime",
    &__method10_arg_types[0],
    sizeof(__method10_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()D",
    JAVA_NULL,
    JAVA_NULL},
    {"setBeginTime",
    &__method11_arg_types[0],
    sizeof(__method11_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(D)V",
    JAVA_NULL,
    JAVA_NULL},
    {"getFillMode",
    &__method12_arg_types[0],
    sizeof(__method12_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()Ljava/lang/String;",
    JAVA_NULL,
    JAVA_NULL},
    {"setFillMode",
    &__method13_arg_types[0],
    sizeof(__method13_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Ljava/lang/String;)V",
    JAVA_NULL,
    JAVA_NULL},
    {"getRepeatCount",
    &__method14_arg_types[0],
    sizeof(__method14_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()F",
    JAVA_NULL,
    JAVA_NULL},
    {"setRepeatCount",
    &__method15_arg_types[0],
    sizeof(__method15_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(F)V",
    JAVA_NULL,
    JAVA_NULL},
    {"getRepeatDuration",
    &__method16_arg_types[0],
    sizeof(__method16_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()D",
    JAVA_NULL,
    JAVA_NULL},
    {"setRepeatDuration",
    &__method17_arg_types[0],
    sizeof(__method17_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(D)V",
    JAVA_NULL,
    JAVA_NULL},
    {"getSpeed",
    &__method18_arg_types[0],
    sizeof(__method18_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()F",
    JAVA_NULL,
    JAVA_NULL},
    {"setSpeed",
    &__method19_arg_types[0],
    sizeof(__method19_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(F)V",
    JAVA_NULL,
    JAVA_NULL},
    {"getTimeOffset",
    &__method20_arg_types[0],
    sizeof(__method20_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()D",
    JAVA_NULL,
    JAVA_NULL},
    {"setTimeOffset",
    &__method21_arg_types[0],
    sizeof(__method21_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(D)V",
    JAVA_NULL,
    JAVA_NULL},
};

static JAVA_OBJECT method_dispatcher(JAVA_OBJECT method, JAVA_OBJECT receiver, JAVA_OBJECT arguments)
{
    JAVA_OBJECT result = JAVA_NULL;
    java_lang_Object* obj = receiver;
    java_lang_reflect_Method* m = (java_lang_reflect_Method*) method;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    XMLVMElem conversion;
    switch (m->fields.java_lang_reflect_Method.slot_) {
    case 0:
        result = (JAVA_OBJECT) org_xmlvm_iphone_CAAnimation_defaultValueForKey___java_lang_String(argsArray[0]);
        break;
    case 1:
        result = (JAVA_OBJECT) org_xmlvm_iphone_CAAnimation_getDelegate__(receiver);
        break;
    case 2:
        org_xmlvm_iphone_CAAnimation_setDelegate___org_xmlvm_iphone_CAAnimationDelegate(receiver, argsArray[0]);
        break;
    case 3:
        conversion.i = (JAVA_BOOLEAN) org_xmlvm_iphone_CAAnimation_isRemovedOnCompletion__(receiver);
        result = __NEW_java_lang_Boolean();
        java_lang_Boolean___INIT____boolean(result, conversion.i);
        break;
    case 4:
        org_xmlvm_iphone_CAAnimation_setRemovedOnCompletion___boolean(receiver, ((java_lang_Boolean*) argsArray[0])->fields.java_lang_Boolean.value_);
        break;
    case 5:
        conversion.d = (JAVA_DOUBLE) org_xmlvm_iphone_CAAnimation_getDuration__(receiver);
        result = __NEW_java_lang_Double();
        java_lang_Double___INIT____double(result, conversion.d);
        break;
    case 6:
        org_xmlvm_iphone_CAAnimation_setDuration___double(receiver, ((java_lang_Double*) argsArray[0])->fields.java_lang_Double.value_);
        break;
    case 7:
        org_xmlvm_iphone_CAAnimation_runAction___java_lang_String_org_xmlvm_iphone_NSObject_java_util_Map(receiver, argsArray[0], argsArray[1], argsArray[2]);
        break;
    case 8:
        conversion.i = (JAVA_BOOLEAN) org_xmlvm_iphone_CAAnimation_isAutoreverses__(receiver);
        result = __NEW_java_lang_Boolean();
        java_lang_Boolean___INIT____boolean(result, conversion.i);
        break;
    case 9:
        org_xmlvm_iphone_CAAnimation_setAutoreverses___boolean(receiver, ((java_lang_Boolean*) argsArray[0])->fields.java_lang_Boolean.value_);
        break;
    case 10:
        conversion.d = (JAVA_DOUBLE) org_xmlvm_iphone_CAAnimation_getBeginTime__(receiver);
        result = __NEW_java_lang_Double();
        java_lang_Double___INIT____double(result, conversion.d);
        break;
    case 11:
        org_xmlvm_iphone_CAAnimation_setBeginTime___double(receiver, ((java_lang_Double*) argsArray[0])->fields.java_lang_Double.value_);
        break;
    case 12:
        result = (JAVA_OBJECT) org_xmlvm_iphone_CAAnimation_getFillMode__(receiver);
        break;
    case 13:
        org_xmlvm_iphone_CAAnimation_setFillMode___java_lang_String(receiver, argsArray[0]);
        break;
    case 14:
        conversion.f = (JAVA_FLOAT) org_xmlvm_iphone_CAAnimation_getRepeatCount__(receiver);
        result = __NEW_java_lang_Float();
        java_lang_Float___INIT____float(result, conversion.f);
        break;
    case 15:
        org_xmlvm_iphone_CAAnimation_setRepeatCount___float(receiver, ((java_lang_Float*) argsArray[0])->fields.java_lang_Float.value_);
        break;
    case 16:
        conversion.d = (JAVA_DOUBLE) org_xmlvm_iphone_CAAnimation_getRepeatDuration__(receiver);
        result = __NEW_java_lang_Double();
        java_lang_Double___INIT____double(result, conversion.d);
        break;
    case 17:
        org_xmlvm_iphone_CAAnimation_setRepeatDuration___double(receiver, ((java_lang_Double*) argsArray[0])->fields.java_lang_Double.value_);
        break;
    case 18:
        conversion.f = (JAVA_FLOAT) org_xmlvm_iphone_CAAnimation_getSpeed__(receiver);
        result = __NEW_java_lang_Float();
        java_lang_Float___INIT____float(result, conversion.f);
        break;
    case 19:
        org_xmlvm_iphone_CAAnimation_setSpeed___float(receiver, ((java_lang_Float*) argsArray[0])->fields.java_lang_Float.value_);
        break;
    case 20:
        conversion.d = (JAVA_DOUBLE) org_xmlvm_iphone_CAAnimation_getTimeOffset__(receiver);
        result = __NEW_java_lang_Double();
        java_lang_Double___INIT____double(result, conversion.d);
        break;
    case 21:
        org_xmlvm_iphone_CAAnimation_setTimeOffset___double(receiver, ((java_lang_Double*) argsArray[0])->fields.java_lang_Double.value_);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return result;
}

void __INIT_org_xmlvm_iphone_CAAnimation()
{
    staticInitializerLock(&__TIB_org_xmlvm_iphone_CAAnimation);

    // While the static initializer mutex is locked, locally store the value of
    // whether class initialization began or not
    int initBegan = __TIB_org_xmlvm_iphone_CAAnimation.classInitializationBegan;

    // Whether or not class initialization had already began, it has begun now
    __TIB_org_xmlvm_iphone_CAAnimation.classInitializationBegan = 1;

    staticInitializerUnlock(&__TIB_org_xmlvm_iphone_CAAnimation);

    JAVA_LONG curThreadId = (JAVA_LONG)pthread_self();
    if (initBegan) {
        if (__TIB_org_xmlvm_iphone_CAAnimation.initializerThreadId != curThreadId) {
            // Busy wait until the other thread finishes initializing this class
            while (!__TIB_org_xmlvm_iphone_CAAnimation.classInitialized) {
                // do nothing
            }
        }
    } else {
        __TIB_org_xmlvm_iphone_CAAnimation.initializerThreadId = curThreadId;
        XMLVM_CLASS_USED("org.xmlvm.iphone.CAAnimation")
        __INIT_IMPL_org_xmlvm_iphone_CAAnimation();
    }
}

void __INIT_IMPL_org_xmlvm_iphone_CAAnimation()
{
    // Initialize base class if necessary
    XMLVM_CLASS_INIT(org_xmlvm_iphone_NSObject)
    __TIB_org_xmlvm_iphone_CAAnimation.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_iphone_CAAnimation;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_iphone_CAAnimation.vtable, __TIB_org_xmlvm_iphone_NSObject.vtable, sizeof(__TIB_org_xmlvm_iphone_NSObject.vtable));
    // Initialize vtable for this class
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[8] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_getDuration__;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[18] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_setDuration___double;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[15] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_runAction___java_lang_String_org_xmlvm_iphone_NSObject_java_util_Map;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[14] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_isAutoreverses__;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[16] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_setAutoreverses___boolean;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[7] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_getBeginTime__;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[17] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_setBeginTime___double;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[9] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_getFillMode__;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[19] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_setFillMode___java_lang_String;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[10] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_getRepeatCount__;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[20] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_setRepeatCount___float;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[11] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_getRepeatDuration__;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[21] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_setRepeatDuration___double;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[12] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_getSpeed__;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[22] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_setSpeed___float;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[13] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_getTimeOffset__;
    __TIB_org_xmlvm_iphone_CAAnimation.vtable[23] = (VTABLE_PTR) &org_xmlvm_iphone_CAAnimation_setTimeOffset___double;
    // Initialize interface information
    __TIB_org_xmlvm_iphone_CAAnimation.numImplementedInterfaces = 2;
    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 2);

    // Initialize interfaces if necessary and assign tib to implementedInterfaces

    XMLVM_CLASS_INIT(org_xmlvm_iphone_CAAction)

    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][0] = &__TIB_org_xmlvm_iphone_CAAction;

    XMLVM_CLASS_INIT(org_xmlvm_iphone_CAMediaTiming)

    __TIB_org_xmlvm_iphone_CAAnimation.implementedInterfaces[0][1] = &__TIB_org_xmlvm_iphone_CAMediaTiming;
    // Initialize itable for this class
    __TIB_org_xmlvm_iphone_CAAnimation.itableBegin = &__TIB_org_xmlvm_iphone_CAAnimation.itable[0];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAAction_runAction___java_lang_String_org_xmlvm_iphone_NSObject_java_util_Map] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[15];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getBeginTime__] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[7];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getDuration__] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[8];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getFillMode__] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[9];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getRepeatCount__] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[10];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getRepeatDuration__] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[11];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getSpeed__] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[12];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_getTimeOffset__] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[13];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_isAutoreverses__] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[14];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setAutoreverses___boolean] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[16];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setBeginTime___double] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[17];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setDuration___double] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[18];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setFillMode___java_lang_String] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[19];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setRepeatCount___float] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[20];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setRepeatDuration___double] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[21];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setSpeed___float] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[22];
    __TIB_org_xmlvm_iphone_CAAnimation.itable[XMLVM_ITABLE_IDX_org_xmlvm_iphone_CAMediaTiming_setTimeOffset___double] = __TIB_org_xmlvm_iphone_CAAnimation.vtable[23];


    __TIB_org_xmlvm_iphone_CAAnimation.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_iphone_CAAnimation.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_CAAnimation.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_iphone_CAAnimation.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_iphone_CAAnimation.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __TIB_org_xmlvm_iphone_CAAnimation.methodDispatcherFunc = method_dispatcher;
    __TIB_org_xmlvm_iphone_CAAnimation.declaredMethods = &__method_reflection_data[0];
    __TIB_org_xmlvm_iphone_CAAnimation.numDeclaredMethods = sizeof(__method_reflection_data) / sizeof(XMLVM_METHOD_REFLECTION_DATA);
    __CLASS_org_xmlvm_iphone_CAAnimation = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_iphone_CAAnimation);
    __TIB_org_xmlvm_iphone_CAAnimation.clazz = __CLASS_org_xmlvm_iphone_CAAnimation;
    __TIB_org_xmlvm_iphone_CAAnimation.baseType = JAVA_NULL;
    __CLASS_org_xmlvm_iphone_CAAnimation_1ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_CAAnimation);
    __CLASS_org_xmlvm_iphone_CAAnimation_2ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_CAAnimation_1ARRAY);
    __CLASS_org_xmlvm_iphone_CAAnimation_3ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_iphone_CAAnimation_2ARRAY);
    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_iphone_CAAnimation]
    //XMLVM_END_WRAPPER

    __TIB_org_xmlvm_iphone_CAAnimation.classInitialized = 1;
}

void __DELETE_org_xmlvm_iphone_CAAnimation(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_iphone_CAAnimation]
    //XMLVM_END_WRAPPER
}

void __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_CAAnimation(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer)
{
    __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_NSObject(me, 0 || derivedClassWillRegisterFinalizer);
    ((org_xmlvm_iphone_CAAnimation*) me)->fields.org_xmlvm_iphone_CAAnimation.delegateWrapper_ = (org_xmlvm_iphone_CAAnimationDelegate_Wrapper*) JAVA_NULL;
    //XMLVM_BEGIN_WRAPPER[__INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_CAAnimation]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_iphone_CAAnimation()
{    XMLVM_CLASS_INIT(org_xmlvm_iphone_CAAnimation)
org_xmlvm_iphone_CAAnimation* me = (org_xmlvm_iphone_CAAnimation*) XMLVM_MALLOC(sizeof(org_xmlvm_iphone_CAAnimation));
    me->tib = &__TIB_org_xmlvm_iphone_CAAnimation;
    __INIT_INSTANCE_MEMBERS_org_xmlvm_iphone_CAAnimation(me, 0);
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_iphone_CAAnimation]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_CAAnimation()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_iphone_CAAnimation();
    org_xmlvm_iphone_CAAnimation___INIT___(me);
    return me;
}

void org_xmlvm_iphone_CAAnimation___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_CAAnimation_defaultValueForKey___java_lang_String(JAVA_OBJECT n1)
{
    XMLVM_CLASS_INIT(org_xmlvm_iphone_CAAnimation)
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_defaultValueForKey___java_lang_String]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_CAAnimation_getDelegate__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_getDelegate__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setDelegate___org_xmlvm_iphone_CAAnimationDelegate(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setDelegate___org_xmlvm_iphone_CAAnimationDelegate]
    XMLVM_VAR_THIZ;

    org_xmlvm_iphone_CAAnimationDelegate* jdelegate = n1;
    org_xmlvm_iphone_CAAnimationDelegate_Wrapper* jwrapper = __NEW_org_xmlvm_iphone_CAAnimationDelegate_Wrapper();
    org_xmlvm_iphone_CAAnimationDelegate_Wrapper___INIT____org_xmlvm_iphone_CAAnimationDelegate(jwrapper, jdelegate);

    jthiz->fields.org_xmlvm_iphone_CAAnimation.delegateWrapper_ = jwrapper;

    CAAnimationDelegateWrapper* wrapper = jwrapper->fields.org_xmlvm_iphone_NSObject.wrappedObjCObj;
    [wrapper addSource: jthiz: thiz];
    thiz.delegate = wrapper;

    //XMLVM_END_WRAPPER
}

JAVA_BOOLEAN org_xmlvm_iphone_CAAnimation_isRemovedOnCompletion__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_isRemovedOnCompletion__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setRemovedOnCompletion___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setRemovedOnCompletion___boolean]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_DOUBLE org_xmlvm_iphone_CAAnimation_getDuration__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_getDuration__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setDuration___double(JAVA_OBJECT me, JAVA_DOUBLE n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setDuration___double]
    XMLVM_VAR_THIZ;
    thiz.duration = n1;
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_runAction___java_lang_String_org_xmlvm_iphone_NSObject_java_util_Map(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_runAction___java_lang_String_org_xmlvm_iphone_NSObject_java_util_Map]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_BOOLEAN org_xmlvm_iphone_CAAnimation_isAutoreverses__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_isAutoreverses__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setAutoreverses___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setAutoreverses___boolean]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_DOUBLE org_xmlvm_iphone_CAAnimation_getBeginTime__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_getBeginTime__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setBeginTime___double(JAVA_OBJECT me, JAVA_DOUBLE n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setBeginTime___double]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT org_xmlvm_iphone_CAAnimation_getFillMode__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_getFillMode__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setFillMode___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setFillMode___java_lang_String]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_FLOAT org_xmlvm_iphone_CAAnimation_getRepeatCount__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_getRepeatCount__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setRepeatCount___float(JAVA_OBJECT me, JAVA_FLOAT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setRepeatCount___float]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_DOUBLE org_xmlvm_iphone_CAAnimation_getRepeatDuration__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_getRepeatDuration__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setRepeatDuration___double(JAVA_OBJECT me, JAVA_DOUBLE n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setRepeatDuration___double]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_FLOAT org_xmlvm_iphone_CAAnimation_getSpeed__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_getSpeed__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setSpeed___float(JAVA_OBJECT me, JAVA_FLOAT n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setSpeed___float]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_DOUBLE org_xmlvm_iphone_CAAnimation_getTimeOffset__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_getTimeOffset__]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

void org_xmlvm_iphone_CAAnimation_setTimeOffset___double(JAVA_OBJECT me, JAVA_DOUBLE n1)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_iphone_CAAnimation_setTimeOffset___double]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

