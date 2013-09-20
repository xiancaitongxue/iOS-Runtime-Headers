/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@class NSObject<OS_dispatch_source>, _GCACHomeButton, _GCUserHIDDevice;

@interface _GCDragonflyControllerProfile : _GCGamepad <_GCACHomeButtonDelegate> {
    _GCACHomeButton *_acHome;
    _GCUserHIDDevice *_emulatedHIDDevice;
    NSObject<OS_dispatch_source> *_inputSource;
}

- (void).cxx_destruct;
- (id)initWithController:(id)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)name;
- (void)toggleSuspendResume;

@end