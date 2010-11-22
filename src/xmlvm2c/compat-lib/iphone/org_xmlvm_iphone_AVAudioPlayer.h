#ifndef __ORG_XMLVM_IPHONE_AVAUDIOPLAYER__
#define __ORG_XMLVM_IPHONE_AVAUDIOPLAYER__

#include "xmlvm.h"
#include "org_xmlvm_iphone_NSObject.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSObject
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSObject)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSData
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSData)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_AVAudioPlayer
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_AVAudioPlayer
XMLVM_FORWARD_DECL(org_xmlvm_iphone_AVAudioPlayer)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURL
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSURL
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSURL)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSErrorHolder
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_NSErrorHolder
XMLVM_FORWARD_DECL(org_xmlvm_iphone_NSErrorHolder)
#endif
#ifndef XMLVM_FORWARD_DECL_javazoom_jlgui_basicplayer_BasicPlayer
#define XMLVM_FORWARD_DECL_javazoom_jlgui_basicplayer_BasicPlayer
XMLVM_FORWARD_DECL(javazoom_jlgui_basicplayer_BasicPlayer)
#endif
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_AVAudioPlayerDelegate
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_AVAudioPlayerDelegate
XMLVM_FORWARD_DECL(org_xmlvm_iphone_AVAudioPlayerDelegate)
#endif
// Class declarations for org.xmlvm.iphone.AVAudioPlayer
XMLVM_DEFINE_CLASS(org_xmlvm_iphone_AVAudioPlayer, 31)

//XMLVM_BEGIN_MEMBERS
#define __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_AVAudioPlayer
//XMLVM_END_MEMBERS

#define __INSTANCE_MEMBERS_org_xmlvm_iphone_AVAudioPlayer \
    __INSTANCE_MEMBERS_org_xmlvm_iphone_NSObject; \
    struct { \
        __ADDITIONAL_INSTANCE_MEMBERS_org_xmlvm_iphone_AVAudioPlayer \
    } org_xmlvm_iphone_AVAudioPlayer

struct org_xmlvm_iphone_AVAudioPlayer {
    __CLASS_DEFINITION_org_xmlvm_iphone_AVAudioPlayer* __class;
    __INSTANCE_MEMBERS_org_xmlvm_iphone_AVAudioPlayer;
};
#ifndef XMLVM_FORWARD_DECL_org_xmlvm_iphone_AVAudioPlayer
#define XMLVM_FORWARD_DECL_org_xmlvm_iphone_AVAudioPlayer
typedef struct org_xmlvm_iphone_AVAudioPlayer org_xmlvm_iphone_AVAudioPlayer;
#endif

#define XMLVM_VTABLE_SIZE_org_xmlvm_iphone_AVAudioPlayer 31
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_play__ 14
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_stop__ 15
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_pause__ 16
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_prepareToPlay__ 17
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_getNumberOfLoops__ 18
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_setNumberOfLoops___int 19
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_getDelegate__ 20
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_setDelegate___org_xmlvm_iphone_AVAudioPlayerDelegate 21
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_isPlaying__ 22
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_setCurrentTime___double 23
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_getCurrentTime__ 24
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_setVolume___float 25
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_getVolume__ 26
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_getNumberOfChannels__ 27
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_getDuration__ 28
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_getURL__ 29
#define XMLVM_VTABLE_IDX_org_xmlvm_iphone_AVAudioPlayer_getData__ 30

void __INIT_org_xmlvm_iphone_AVAudioPlayer();
JAVA_OBJECT __NEW_org_xmlvm_iphone_AVAudioPlayer();
JAVA_OBJECT __NEW_INSTANCE_org_xmlvm_iphone_AVAudioPlayer();
JAVA_OBJECT org_xmlvm_iphone_AVAudioPlayer_initWithContentsOfURL___org_xmlvm_iphone_NSURL_org_xmlvm_iphone_NSErrorHolder(JAVA_OBJECT n1, JAVA_OBJECT n2);
// Vtable index: 14
void org_xmlvm_iphone_AVAudioPlayer_play__(JAVA_OBJECT me);
// Vtable index: 15
void org_xmlvm_iphone_AVAudioPlayer_stop__(JAVA_OBJECT me);
// Vtable index: 16
void org_xmlvm_iphone_AVAudioPlayer_pause__(JAVA_OBJECT me);
// Vtable index: 17
void org_xmlvm_iphone_AVAudioPlayer_prepareToPlay__(JAVA_OBJECT me);
// Vtable index: 18
JAVA_INT org_xmlvm_iphone_AVAudioPlayer_getNumberOfLoops__(JAVA_OBJECT me);
// Vtable index: 19
void org_xmlvm_iphone_AVAudioPlayer_setNumberOfLoops___int(JAVA_OBJECT me, JAVA_INT n1);
// Vtable index: 20
JAVA_OBJECT org_xmlvm_iphone_AVAudioPlayer_getDelegate__(JAVA_OBJECT me);
// Vtable index: 21
void org_xmlvm_iphone_AVAudioPlayer_setDelegate___org_xmlvm_iphone_AVAudioPlayerDelegate(JAVA_OBJECT me, JAVA_OBJECT n1);
// Vtable index: 22
JAVA_BOOLEAN org_xmlvm_iphone_AVAudioPlayer_isPlaying__(JAVA_OBJECT me);
// Vtable index: 23
void org_xmlvm_iphone_AVAudioPlayer_setCurrentTime___double(JAVA_OBJECT me, JAVA_DOUBLE n1);
// Vtable index: 24
JAVA_DOUBLE org_xmlvm_iphone_AVAudioPlayer_getCurrentTime__(JAVA_OBJECT me);
// Vtable index: 25
void org_xmlvm_iphone_AVAudioPlayer_setVolume___float(JAVA_OBJECT me, JAVA_FLOAT n1);
// Vtable index: 26
JAVA_FLOAT org_xmlvm_iphone_AVAudioPlayer_getVolume__(JAVA_OBJECT me);
// Vtable index: 27
JAVA_INT org_xmlvm_iphone_AVAudioPlayer_getNumberOfChannels__(JAVA_OBJECT me);
// Vtable index: 28
JAVA_DOUBLE org_xmlvm_iphone_AVAudioPlayer_getDuration__(JAVA_OBJECT me);
// Vtable index: 29
JAVA_OBJECT org_xmlvm_iphone_AVAudioPlayer_getURL__(JAVA_OBJECT me);
// Vtable index: 30
JAVA_OBJECT org_xmlvm_iphone_AVAudioPlayer_getData__(JAVA_OBJECT me);
JAVA_BOOLEAN org_xmlvm_iphone_AVAudioPlayer_access$000___org_xmlvm_iphone_AVAudioPlayer(JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_AVAudioPlayer_access$100___org_xmlvm_iphone_AVAudioPlayer(JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_AVAudioPlayer_access$200___org_xmlvm_iphone_AVAudioPlayer(JAVA_OBJECT n1);
JAVA_OBJECT org_xmlvm_iphone_AVAudioPlayer_access$300___org_xmlvm_iphone_AVAudioPlayer(JAVA_OBJECT n1);
JAVA_INT org_xmlvm_iphone_AVAudioPlayer_access$400___org_xmlvm_iphone_AVAudioPlayer(JAVA_OBJECT n1);
JAVA_INT org_xmlvm_iphone_AVAudioPlayer_access$410___org_xmlvm_iphone_AVAudioPlayer(JAVA_OBJECT n1);
JAVA_BOOLEAN org_xmlvm_iphone_AVAudioPlayer_access$502___org_xmlvm_iphone_AVAudioPlayer_boolean(JAVA_OBJECT n1, JAVA_BOOLEAN n2);
JAVA_OBJECT org_xmlvm_iphone_AVAudioPlayer_access$600___org_xmlvm_iphone_AVAudioPlayer(JAVA_OBJECT n1);

#endif
