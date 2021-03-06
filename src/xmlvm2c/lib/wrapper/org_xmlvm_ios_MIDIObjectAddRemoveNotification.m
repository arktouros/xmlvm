
//XMLVM_BEGIN_IMPLEMENTATION
MIDIObjectAddRemoveNotification toMIDIObjectAddRemoveNotification(void *obj)
{
    org_xmlvm_ios_MIDIObjectAddRemoveNotification* objCObj = obj;
    MIDIObjectAddRemoveNotification toRet;
    toRet.messageID = objCObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.messageID_;
    toRet.messageSize = objCObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.messageSize_;
    toRet.parent = objCObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.parent_;
    toRet.parentType = objCObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.parentType_;
    toRet.child = objCObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.child_;
    toRet.childType = objCObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.childType_;
    return toRet;
}
JAVA_OBJECT fromMIDIObjectAddRemoveNotification(MIDIObjectAddRemoveNotification obj)
{
    org_xmlvm_ios_MIDIObjectAddRemoveNotification* jObj = __NEW_org_xmlvm_ios_MIDIObjectAddRemoveNotification();
    org_xmlvm_ios_MIDIObjectAddRemoveNotification___INIT___(jObj);
    jObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.messageID_ = obj.messageID;
    jObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.messageSize_ = obj.messageSize;
    jObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.parent_ = obj.parent;
    jObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.parentType_ = obj.parentType;
    jObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.child_ = obj.child;
    jObj->fields.org_xmlvm_ios_MIDIObjectAddRemoveNotification.childType_ = obj.childType;
    return jObj;
}
//XMLVM_END_IMPLEMENTATION

//XMLVM_BEGIN_WRAPPER[__NEW_org_xmlvm_ios_MIDIObjectAddRemoveNotification]
//XMLVM_END_WRAPPER

//XMLVM_BEGIN_WRAPPER[org_xmlvm_ios_MIDIObjectAddRemoveNotification___INIT___]
//XMLVM_END_WRAPPER
