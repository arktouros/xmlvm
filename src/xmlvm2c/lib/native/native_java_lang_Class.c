
#include "java_lang_Class.h"


//XMLVM_BEGIN_NATIVE_IMPLEMENTATION

#include "java_lang_reflect_Field.h"
#include "java_lang_reflect_Constructor.h"


XMLVM_DEFINE_CLASS(boolean_TYPE, XMLVM_SIZE_OF_OBJECT_VTABLE)
XMLVM_DEFINE_CLASS(byte_TYPE, XMLVM_SIZE_OF_OBJECT_VTABLE)
XMLVM_DEFINE_CLASS(char_TYPE, XMLVM_SIZE_OF_OBJECT_VTABLE)
XMLVM_DEFINE_CLASS(short_TYPE, XMLVM_SIZE_OF_OBJECT_VTABLE)
XMLVM_DEFINE_CLASS(int_TYPE, XMLVM_SIZE_OF_OBJECT_VTABLE)
XMLVM_DEFINE_CLASS(long_TYPE, XMLVM_SIZE_OF_OBJECT_VTABLE)
XMLVM_DEFINE_CLASS(float_TYPE, XMLVM_SIZE_OF_OBJECT_VTABLE)
XMLVM_DEFINE_CLASS(double_TYPE, XMLVM_SIZE_OF_OBJECT_VTABLE)

__TIB_DEFINITION_boolean_TYPE __TIB_boolean_TYPE;
__TIB_DEFINITION_byte_TYPE    __TIB_byte_TYPE;
__TIB_DEFINITION_char_TYPE    __TIB_char_TYPE;
__TIB_DEFINITION_short_TYPE   __TIB_short_TYPE;
__TIB_DEFINITION_int_TYPE     __TIB_int_TYPE;
__TIB_DEFINITION_long_TYPE    __TIB_long_TYPE;
__TIB_DEFINITION_float_TYPE   __TIB_float_TYPE;
__TIB_DEFINITION_double_TYPE  __TIB_double_TYPE;

JAVA_OBJECT __CLASS_boolean_TYPE;
JAVA_OBJECT __CLASS_byte_TYPE;
JAVA_OBJECT __CLASS_char_TYPE;
JAVA_OBJECT __CLASS_short_TYPE;
JAVA_OBJECT __CLASS_int_TYPE;
JAVA_OBJECT __CLASS_long_TYPE;
JAVA_OBJECT __CLASS_float_TYPE;
JAVA_OBJECT __CLASS_double_TYPE;

void init_primitive_class(void* clazz, const char* name)
{
    __TIB_DEFINITION_TEMPLATE* c = (__TIB_DEFINITION_TEMPLATE*) clazz;
    //TODO who is initializing this class?
    c->classInitialized = 0;
    c->className = name;
    c->extends = (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Class;
}

//XMLVM_END_NATIVE_IMPLEMENTATION

void java_lang_Class_registerNatives__()
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_registerNatives__]
    init_primitive_class(&__TIB_boolean_TYPE, "boolean");
    init_primitive_class(&__TIB_byte_TYPE, "byte");
    init_primitive_class(&__TIB_char_TYPE, "char");
    init_primitive_class(&__TIB_short_TYPE, "short");
    init_primitive_class(&__TIB_int_TYPE, "int");
    init_primitive_class(&__TIB_long_TYPE, "long");
    init_primitive_class(&__TIB_float_TYPE, "float");
    init_primitive_class(&__TIB_double_TYPE, "double");
    
    __CLASS_boolean_TYPE = __NEW_XMLVMClass(&__TIB_boolean_TYPE);
    XMLVMClass_setPrimitive(__CLASS_boolean_TYPE, 1);
    __CLASS_byte_TYPE = __NEW_XMLVMClass(&__TIB_byte_TYPE);
    XMLVMClass_setPrimitive(__CLASS_byte_TYPE, 1);
    __CLASS_char_TYPE = __NEW_XMLVMClass(&__TIB_char_TYPE);
    XMLVMClass_setPrimitive(__CLASS_char_TYPE, 1);
    __CLASS_short_TYPE = __NEW_XMLVMClass(&__TIB_short_TYPE);
    XMLVMClass_setPrimitive(__CLASS_short_TYPE, 1);
    __CLASS_int_TYPE = __NEW_XMLVMClass(&__TIB_int_TYPE);
    XMLVMClass_setPrimitive(__CLASS_int_TYPE, 1);
    __CLASS_long_TYPE = __NEW_XMLVMClass(&__TIB_long_TYPE);
    XMLVMClass_setPrimitive(__CLASS_long_TYPE, 1);
    __CLASS_float_TYPE = __NEW_XMLVMClass(&__TIB_float_TYPE);
    XMLVMClass_setPrimitive(__CLASS_float_TYPE, 1);
    __CLASS_double_TYPE = __NEW_XMLVMClass(&__TIB_double_TYPE);
    XMLVMClass_setPrimitive(__CLASS_double_TYPE, 1);
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_forName0___java_lang_String_boolean_java_lang_ClassLoader(JAVA_OBJECT n1, JAVA_BOOLEAN n2, JAVA_OBJECT n3)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_forName0___java_lang_String_boolean_java_lang_ClassLoader]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_BOOLEAN java_lang_Class_isInstance___java_lang_Object(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_isInstance___java_lang_Object]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_BOOLEAN java_lang_Class_isAssignableFrom___java_lang_Class(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_isAssignableFrom___java_lang_Class]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_BOOLEAN java_lang_Class_isInterface__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_isInterface__]
    //TODO
    return 0;
    //XMLVM_END_NATIVE
}

JAVA_BOOLEAN java_lang_Class_isArray__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_isArray__]
    return XMLVMClass_isArray(me);
    //XMLVM_END_NATIVE
}

JAVA_BOOLEAN java_lang_Class_isPrimitive__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_isPrimitive__]
    return XMLVMClass_isPrimitive(me);
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getName0__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getName0__]
    __TIB_DEFINITION_TEMPLATE* tib = XMLVMClass_getTIB(me);
    return xmlvm_create_java_string(tib->className);
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getClassLoader0__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getClassLoader0__]
    return JAVA_NULL;
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getSuperclass__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getSuperclass__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getInterfaces__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getInterfaces__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getComponentType__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getComponentType__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_INT java_lang_Class_getModifiers__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getModifiers__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getSigners__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getSigners__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

void java_lang_Class_setSigners___java_lang_Object_ARRAYTYPE(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_setSigners___java_lang_Object_ARRAYTYPE]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getEnclosingMethod0__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getEnclosingMethod0__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getDeclaringClass__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getDeclaringClass__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getProtectionDomain0__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getProtectionDomain0__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

void java_lang_Class_setProtectionDomain0___java_security_ProtectionDomain(JAVA_OBJECT me, JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_setProtectionDomain0___java_security_ProtectionDomain]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getPrimitiveClass___java_lang_String(JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getPrimitiveClass___java_lang_String]
    if (xmlvm_java_string_cmp(n1, "boolean")) {
        return __CLASS_boolean_TYPE;
    }
    if (xmlvm_java_string_cmp(n1, "byte")) {
        return __CLASS_byte_TYPE;
    }
    if (xmlvm_java_string_cmp(n1, "char")) {
        return __CLASS_char_TYPE;
    }
    if (xmlvm_java_string_cmp(n1, "short")) {
        return __CLASS_short_TYPE;
    }
    if (xmlvm_java_string_cmp(n1, "int")) {
        return __CLASS_int_TYPE;
    }
    if (xmlvm_java_string_cmp(n1, "float")) {
        return __CLASS_float_TYPE;
    }
    if (xmlvm_java_string_cmp(n1, "double")) {
        return __CLASS_double_TYPE;
    }
    if (xmlvm_java_string_cmp(n1, "long")) {
        return __CLASS_long_TYPE;
    }
    xmlvm_unimplemented_native_method();
    return JAVA_NULL;
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getGenericSignature__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getGenericSignature__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getRawAnnotations__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getRawAnnotations__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getConstantPool__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getConstantPool__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getDeclaredFields0___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getDeclaredFields0___boolean]
    //TODO n1 arg
    __TIB_DEFINITION_TEMPLATE* tib = XMLVMClass_getTIB(me);
    int numFields = tib->numDeclaredFields;
    XMLVMArray* fields = XMLVMArray_createSingleDimension(0, numFields);
    int i = 0;
    for (i = 0; i < numFields; i++) {
        java_lang_reflect_Field* field = __NEW_java_lang_reflect_Field();
        XMLVM_FIELD_REFLECTION_DATA* currentField = (tib->declaredFields) + i;
        java_lang_Class* declaringClass = tib->clazz;
        java_lang_String* name = xmlvm_create_java_string(currentField->name);
        java_lang_Class* type = *(currentField->type);
        JAVA_INT modifiers = currentField->modifiers;
        JAVA_INT offset = currentField->offset;
        JAVA_OBJECT* address = currentField->address;
        java_lang_String* signature = xmlvm_create_java_string(currentField->signature);
        XMLVMArray* annotations = currentField->annotations;
        java_lang_reflect_Field___INIT____java_lang_Class_java_lang_String_java_lang_Class_int_int_java_lang_Object_java_lang_String_byte_ARRAYTYPE(field, declaringClass, name, type, modifiers, offset, address, signature, annotations);                                                                                                                     
        fields->array.o[i] = field;
    }
    return fields;
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getDeclaredMethods0___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getDeclaredMethods0___boolean]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getDeclaredConstructors0___boolean(JAVA_OBJECT me, JAVA_BOOLEAN n1)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getDeclaredConstructors0___boolean]
    //TODO n1 == publicOnly
    __TIB_DEFINITION_TEMPLATE* tib = XMLVMClass_getTIB(me);
    int numConstructors = tib->numDeclaredConstructors;
    Func_OOO dispatcher = tib->constructorDispatcherFunc;
    XMLVMArray* constructors = XMLVMArray_createSingleDimension(0, numConstructors);
    JAVA_INT slot = 0;
    for (slot = 0; slot < numConstructors; slot++) {
        java_lang_reflect_Constructor* constructor = __NEW_java_lang_reflect_Constructor();
        XMLVM_CONSTRUCTOR_REFLECTION_DATA* currentConstructor = (tib->declaredConstructors) + slot;
        int numParameters = currentConstructor->numParameterTypes;
        XMLVMArray* parameters = XMLVMArray_createSingleDimension(0, numParameters);
        int j = 0;
        JAVA_OBJECT** paramTypes = currentConstructor->parameterTypes;
        for (j = 0; j < numParameters; j++) {
            parameters->array.o[j] = *(paramTypes[j]);
        }            
        JAVA_OBJECT*  checkedExceptions = JAVA_NULL;
        int          numCheckedExceptions = 0;
        int          modifiers = 0;
        java_lang_String* signature = xmlvm_create_java_string(currentConstructor->signature);
        JAVA_OBJECT  annotations = JAVA_NULL;
        JAVA_OBJECT  parameterAnnotations = JAVA_NULL;
        java_lang_reflect_Constructor___INIT____java_lang_Class_java_lang_Class_ARRAYTYPE_java_lang_Class_ARRAYTYPE_int_java_lang_Object_int_java_lang_String_byte_ARRAYTYPE_byte_ARRAYTYPE(constructor, tib->clazz, parameters, checkedExceptions, modifiers, dispatcher, slot, signature, annotations, parameterAnnotations);
        constructors->array.o[slot] = constructor;
    }
    return constructors;
    //XMLVM_END_NATIVE
}

JAVA_OBJECT java_lang_Class_getDeclaredClasses0__(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_getDeclaredClasses0__]
    xmlvm_unimplemented_native_method();
    //XMLVM_END_NATIVE
}

JAVA_BOOLEAN java_lang_Class_desiredAssertionStatus0___java_lang_Class(JAVA_OBJECT n1)
{
    //XMLVM_BEGIN_NATIVE[java_lang_Class_desiredAssertionStatus0___java_lang_Class]
    return 0;
    //XMLVM_END_NATIVE
}


void xmlvm_init_native_java_lang_Class()
{
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_isInstance___java_lang_Object] = 
    (VTABLE_PTR) java_lang_Class_isInstance___java_lang_Object;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_isAssignableFrom___java_lang_Class] = 
    (VTABLE_PTR) java_lang_Class_isAssignableFrom___java_lang_Class;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_isInterface__] = 
    (VTABLE_PTR) java_lang_Class_isInterface__;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_isArray__] = 
    (VTABLE_PTR) java_lang_Class_isArray__;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_isPrimitive__] = 
    (VTABLE_PTR) java_lang_Class_isPrimitive__;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_getClassLoader0__] = 
    (VTABLE_PTR) java_lang_Class_getClassLoader0__;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_getSuperclass__] = 
    (VTABLE_PTR) java_lang_Class_getSuperclass__;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_getInterfaces__] = 
    (VTABLE_PTR) java_lang_Class_getInterfaces__;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_getComponentType__] = 
    (VTABLE_PTR) java_lang_Class_getComponentType__;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_getModifiers__] = 
    (VTABLE_PTR) java_lang_Class_getModifiers__;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_getSigners__] = 
    (VTABLE_PTR) java_lang_Class_getSigners__;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_setSigners___java_lang_Object_ARRAYTYPE] = 
    (VTABLE_PTR) java_lang_Class_setSigners___java_lang_Object_ARRAYTYPE;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_getDeclaringClass__] = 
    (VTABLE_PTR) java_lang_Class_getDeclaringClass__;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_setProtectionDomain0___java_security_ProtectionDomain] = 
    (VTABLE_PTR) java_lang_Class_setProtectionDomain0___java_security_ProtectionDomain;
    __TIB_java_lang_Class.vtable[XMLVM_VTABLE_IDX_java_lang_Class_getConstantPool__] = 
    (VTABLE_PTR) java_lang_Class_getConstantPool__;
}
