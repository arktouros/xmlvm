
//XMLVM_BEGIN_IMPLEMENTATION
@interface ExtAudioFile (ExtAudioFileWrapperCategory)
+ (void) initialize_class;
@end

@implementation ExtAudioFile (ExtAudioFileWrapperCategory)
+ (void) initialize_class {
    if(!__TIB_org_xmlvm_ios_ExtAudioFile.classInitialized)
        __INIT_org_xmlvm_ios_ExtAudioFile();
}
@end

void org_xmlvm_ios_ExtAudioFile_INTERNAL_CONSTRUCTOR(JAVA_OBJECT me,NSObject* wrappedObj){
    org_xmlvm_ios_NSObject_INTERNAL_CONSTRUCTOR(me, wrappedObj);
    }

static JAVA_OBJECT __WRAPPER_CREATOR(NSObject* obj)
{
    if([obj class] == [ExtAudioFile class]) 
    {
        [obj retain];
        JAVA_OBJECT jobj = __NEW_org_xmlvm_ios_ExtAudioFile();
        org_xmlvm_ios_ExtAudioFile_INTERNAL_CONSTRUCTOR(jobj, obj);
        return jobj;
    }
    return JAVA_NULL;
}
//XMLVM_END_IMPLEMENTATION

//XMLVM_BEGIN_WRAPPER[__INIT_org_xmlvm_ios_ExtAudioFile]
xmlvm_register_wrapper_creator(__WRAPPER_CREATOR);
//XMLVM_END_WRAPPER

//XMLVM_BEGIN_WRAPPER[__DELETE_org_xmlvm_ios_ExtAudioFile]
__DELETE_org_xmlvm_ios_NSObject(me, client_data);
//XMLVM_END_WRAPPER

//XMLVM_BEGIN_WRAPPER[org_xmlvm_ios_ExtAudioFile___INIT___]
    ExtAudioFile* var0 = [[ExtAudioFile alloc ] init];
    org_xmlvm_ios_ExtAudioFile_INTERNAL_CONSTRUCTOR(me, var0);
//XMLVM_END_WRAPPER
