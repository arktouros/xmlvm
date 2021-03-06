#include "xmlvm.h"
#include "java_lang_Runnable.h"

#include "org_xmlvm_runtime_emscripten_EmscriptenUtil.h"

#define XMLVM_CURRENT_CLASS_NAME EmscriptenUtil
#define XMLVM_CURRENT_PKG_CLASS_NAME org_xmlvm_runtime_emscripten_EmscriptenUtil

__TIB_DEFINITION_org_xmlvm_runtime_emscripten_EmscriptenUtil __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil = {
    0, // classInitializationBegan
    0, // classInitialized
    -1, // initializerThreadId
    __INIT_org_xmlvm_runtime_emscripten_EmscriptenUtil, // classInitializer
    "org.xmlvm.runtime.emscripten.EmscriptenUtil", // className
    "org.xmlvm.runtime.emscripten", // package
    JAVA_NULL, // enclosingClassName
    JAVA_NULL, // enclosingMethodName
    JAVA_NULL, // signature
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Object, // extends
    sizeof(org_xmlvm_runtime_emscripten_EmscriptenUtil), // sizeInstance
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil;
JAVA_OBJECT __CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil_1ARRAY;
JAVA_OBJECT __CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil_2ARRAY;
JAVA_OBJECT __CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil_3ARRAY;
//XMLVM_BEGIN_IMPLEMENTATION
#ifdef EMSCRIPTEN
JAVA_OBJECT xmlvm_main_loop_object;

void xmlvm_main_loop() {
	(*(void (*)(JAVA_OBJECT)) *(((java_lang_Object*)xmlvm_main_loop_object)->tib->itableBegin)[XMLVM_ITABLE_IDX_java_lang_Runnable_run__])(xmlvm_main_loop_object);
}
#endif
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
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
    JAVA_OBJECT obj = __NEW_org_xmlvm_runtime_emscripten_EmscriptenUtil();
    java_lang_reflect_Constructor* c = (java_lang_reflect_Constructor*) constructor;
    org_xmlvm_runtime_XMLVMArray* args = (org_xmlvm_runtime_XMLVMArray*) arguments;
    JAVA_ARRAY_OBJECT* argsArray = (JAVA_ARRAY_OBJECT*) args->fields.org_xmlvm_runtime_XMLVMArray.array_;
    switch (c->fields.java_lang_reflect_Constructor.slot_) {
    case 0:
        org_xmlvm_runtime_emscripten_EmscriptenUtil___INIT___(obj);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return obj;
}

static JAVA_OBJECT* __method0_arg_types[] = {
};

static JAVA_OBJECT* __method1_arg_types[] = {
    &__CLASS_java_lang_Runnable,
};

static XMLVM_METHOD_REFLECTION_DATA __method_reflection_data[] = {
    {"isEmscripten",
    &__method0_arg_types[0],
    sizeof(__method0_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "()Z",
    JAVA_NULL,
    JAVA_NULL},
    {"setMainLoop",
    &__method1_arg_types[0],
    sizeof(__method1_arg_types) / sizeof(JAVA_OBJECT*),
    JAVA_NULL,
    0,
    0,
    "(Ljava/lang/Runnable;)V",
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
        conversion.i = (JAVA_BOOLEAN) org_xmlvm_runtime_emscripten_EmscriptenUtil_isEmscripten__();
        result = __NEW_java_lang_Boolean();
        java_lang_Boolean___INIT____boolean(result, conversion.i);
        break;
    case 1:
        org_xmlvm_runtime_emscripten_EmscriptenUtil_setMainLoop___java_lang_Runnable(argsArray[0]);
        break;
    default:
        XMLVM_INTERNAL_ERROR();
        break;
    }
    return result;
}

void __INIT_org_xmlvm_runtime_emscripten_EmscriptenUtil()
{
    staticInitializerLock(&__TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil);

    // While the static initializer mutex is locked, locally store the value of
    // whether class initialization began or not
    int initBegan = __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.classInitializationBegan;

    // Whether or not class initialization had already began, it has begun now
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.classInitializationBegan = 1;

    staticInitializerUnlock(&__TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil);

    JAVA_LONG curThreadId = (JAVA_LONG)pthread_self();
    if (initBegan) {
        if (__TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.initializerThreadId != curThreadId) {
            // Busy wait until the other thread finishes initializing this class
            while (!__TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.classInitialized) {
                // do nothing
            }
        }
    } else {
        __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.initializerThreadId = curThreadId;
        XMLVM_CLASS_USED("org.xmlvm.runtime.emscripten.EmscriptenUtil")
        __INIT_IMPL_org_xmlvm_runtime_emscripten_EmscriptenUtil();
    }
}

void __INIT_IMPL_org_xmlvm_runtime_emscripten_EmscriptenUtil()
{
    // Initialize base class if necessary
    if (!__TIB_java_lang_Object.classInitialized) __INIT_java_lang_Object();
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.newInstanceFunc = __NEW_INSTANCE_org_xmlvm_runtime_emscripten_EmscriptenUtil;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.vtable, __TIB_java_lang_Object.vtable, sizeof(__TIB_java_lang_Object.vtable));
    // Initialize vtable for this class
    // Initialize interface information
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.numImplementedInterfaces = 0;
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    // Initialize interfaces if necessary and assign tib to implementedInterfaces

    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.declaredFields = &__field_reflection_data[0];
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.methodDispatcherFunc = method_dispatcher;
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.declaredMethods = &__method_reflection_data[0];
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.numDeclaredMethods = sizeof(__method_reflection_data) / sizeof(XMLVM_METHOD_REFLECTION_DATA);
    __CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil = XMLVM_CREATE_CLASS_OBJECT(&__TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil);
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.clazz = __CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil;
    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.baseType = JAVA_NULL;
    __CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil_1ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil);
    __CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil_2ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil_1ARRAY);
    __CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil_3ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_org_xmlvm_runtime_emscripten_EmscriptenUtil_2ARRAY);
    //XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_runtime_emscripten_EmscriptenUtil]
    //XMLVM_END_WRAPPER

    __TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.classInitialized = 1;
}

void __DELETE_org_xmlvm_runtime_emscripten_EmscriptenUtil(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_runtime_emscripten_EmscriptenUtil]
    //XMLVM_END_WRAPPER
}

void __INIT_INSTANCE_MEMBERS_org_xmlvm_runtime_emscripten_EmscriptenUtil(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer)
{
    __INIT_INSTANCE_MEMBERS_java_lang_Object(me, 0 || derivedClassWillRegisterFinalizer);
    //XMLVM_BEGIN_WRAPPER[__INIT_INSTANCE_MEMBERS_org_xmlvm_runtime_emscripten_EmscriptenUtil]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_org_xmlvm_runtime_emscripten_EmscriptenUtil()
{
    if (!__TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.classInitialized) __INIT_org_xmlvm_runtime_emscripten_EmscriptenUtil();
    org_xmlvm_runtime_emscripten_EmscriptenUtil* me = (org_xmlvm_runtime_emscripten_EmscriptenUtil*) XMLVM_MALLOC(sizeof(org_xmlvm_runtime_emscripten_EmscriptenUtil));
    me->tib = &__TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil;
    __INIT_INSTANCE_MEMBERS_org_xmlvm_runtime_emscripten_EmscriptenUtil(me, 0);
    //XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_runtime_emscripten_EmscriptenUtil]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_runtime_emscripten_EmscriptenUtil()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_org_xmlvm_runtime_emscripten_EmscriptenUtil();
    org_xmlvm_runtime_emscripten_EmscriptenUtil___INIT___(me);
    return me;
}

void org_xmlvm_runtime_emscripten_EmscriptenUtil___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_runtime_emscripten_EmscriptenUtil___INIT___]
    XMLVM_NOT_IMPLEMENTED();
    //XMLVM_END_WRAPPER
}

JAVA_BOOLEAN org_xmlvm_runtime_emscripten_EmscriptenUtil_isEmscripten__()
{
    if (!__TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.classInitialized) __INIT_org_xmlvm_runtime_emscripten_EmscriptenUtil();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_runtime_emscripten_EmscriptenUtil_isEmscripten__]
#ifdef EMSCRIPTEN
    return 1;
#else
    return 0;
#endif
    //XMLVM_END_WRAPPER
}

void org_xmlvm_runtime_emscripten_EmscriptenUtil_setMainLoop___java_lang_Runnable(JAVA_OBJECT n1)
{
    if (!__TIB_org_xmlvm_runtime_emscripten_EmscriptenUtil.classInitialized) __INIT_org_xmlvm_runtime_emscripten_EmscriptenUtil();
    //XMLVM_BEGIN_WRAPPER[org_xmlvm_runtime_emscripten_EmscriptenUtil_setMainLoop___java_lang_Runnable]
#ifdef EMSCRIPTEN
    xmlvm_main_loop_object = n1;
    emscripten_set_main_loop(xmlvm_main_loop, 30, 0);
#endif
    //XMLVM_END_WRAPPER
}

