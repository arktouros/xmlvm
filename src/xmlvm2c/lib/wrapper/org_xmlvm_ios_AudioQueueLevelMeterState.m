
//XMLVM_BEGIN_IMPLEMENTATION
AudioQueueLevelMeterState toAudioQueueLevelMeterState(void *obj)
{
    org_xmlvm_ios_AudioQueueLevelMeterState* objCObj = obj;
    AudioQueueLevelMeterState toRet;
    toRet.mAveragePower = objCObj->fields.org_xmlvm_ios_AudioQueueLevelMeterState.mAveragePower_;
    toRet.mPeakPower = objCObj->fields.org_xmlvm_ios_AudioQueueLevelMeterState.mPeakPower_;
    return toRet;
}
JAVA_OBJECT fromAudioQueueLevelMeterState(AudioQueueLevelMeterState obj)
{
    org_xmlvm_ios_AudioQueueLevelMeterState* jObj = __NEW_org_xmlvm_ios_AudioQueueLevelMeterState();
    org_xmlvm_ios_AudioQueueLevelMeterState___INIT___(jObj);
    jObj->fields.org_xmlvm_ios_AudioQueueLevelMeterState.mAveragePower_ = obj.mAveragePower;
    jObj->fields.org_xmlvm_ios_AudioQueueLevelMeterState.mPeakPower_ = obj.mPeakPower;
    return jObj;
}
//XMLVM_END_IMPLEMENTATION

//XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_ios_AudioQueueLevelMeterState]
//XMLVM_END_WRAPPER

//XMLVM_BEGIN_WRAPPER[org_xmlvm_ios_AudioQueueLevelMeterState___INIT___]
//XMLVM_END_WRAPPER
