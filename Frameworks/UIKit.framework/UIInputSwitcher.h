/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIInputSwitcherView, UIDelayedAction;

@interface UIInputSwitcher : NSObject  {
    UIDelayedAction *m_switcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    NSString *_newMode;
}

@property(copy) NSString * newMode;

+ (id)activeInstance;
+ (id)sharedInstance;

- (BOOL)isVisible;
- (void)handleRotate:(id)arg1;
- (void)showSwitcher;
- (void)touchSwitcherTimer;
- (void)cancelSwitcherTimer;
- (void)clearSwitcherTimer;
- (id)newMode;
- (void)setNewMode:(id)arg1;
- (BOOL)switchMode:(id)arg1 withDelay:(BOOL)arg2;
- (BOOL)handleSwitchCommand:(BOOL)arg1;
- (void)hideSwitcher;
- (BOOL)handleModifiersChangedEvent:(struct __GSEvent { }*)arg1;
- (id)init;
- (void)dealloc;

@end