
//XMLVM_BEGIN_IMPLEMENTATION
CMBufferCallbacks toCMBufferCallbacks(void *obj)
{
    org_xmlvm_ios_CMBufferCallbacks* objCObj = obj;
    CMBufferCallbacks toRet;
    toRet.version = objCObj->fields.org_xmlvm_ios_CMBufferCallbacks.version_;
    toRet.refcon = objCObj->fields.org_xmlvm_ios_CMBufferCallbacks.refcon_;
    toRet.getDecodeTimeStamp = objCObj->fields.org_xmlvm_ios_CMBufferCallbacks.getDecodeTimeStamp_;
    toRet.getPresentationTimeStamp = objCObj->fields.org_xmlvm_ios_CMBufferCallbacks.getPresentationTimeStamp_;
    toRet.getDuration = objCObj->fields.org_xmlvm_ios_CMBufferCallbacks.getDuration_;
    toRet.isDataReady = objCObj->fields.org_xmlvm_ios_CMBufferCallbacks.isDataReady_;
    toRet.compare = objCObj->fields.org_xmlvm_ios_CMBufferCallbacks.compare_;
    toRet.dataBecameReadyNotification = objCObj->fields.org_xmlvm_ios_CMBufferCallbacks.dataBecameReadyNotification_;
    return toRet;
}
JAVA_OBJECT fromCMBufferCallbacks(CMBufferCallbacks obj)
{
    org_xmlvm_ios_CMBufferCallbacks* jObj = __NEW_org_xmlvm_ios_CMBufferCallbacks();
    org_xmlvm_ios_CMBufferCallbacks___INIT___(jObj);
    jObj->fields.org_xmlvm_ios_CMBufferCallbacks.version_ = obj.version;
    jObj->fields.org_xmlvm_ios_CMBufferCallbacks.refcon_ = obj.refcon;
    jObj->fields.org_xmlvm_ios_CMBufferCallbacks.getDecodeTimeStamp_ = obj.getDecodeTimeStamp;
    jObj->fields.org_xmlvm_ios_CMBufferCallbacks.getPresentationTimeStamp_ = obj.getPresentationTimeStamp;
    jObj->fields.org_xmlvm_ios_CMBufferCallbacks.getDuration_ = obj.getDuration;
    jObj->fields.org_xmlvm_ios_CMBufferCallbacks.isDataReady_ = obj.isDataReady;
    jObj->fields.org_xmlvm_ios_CMBufferCallbacks.compare_ = obj.compare;
    jObj->fields.org_xmlvm_ios_CMBufferCallbacks.dataBecameReadyNotification_ = obj.dataBecameReadyNotification;
    return jObj;
}
//XMLVM_END_IMPLEMENTATION

//XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_ios_CMBufferCallbacks]
//XMLVM_END_WRAPPER

//XMLVM_BEGIN_WRAPPER[org_xmlvm_ios_CMBufferCallbacks___INIT___]
//XMLVM_END_WRAPPER
