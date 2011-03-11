/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKNetworkActivityManager : NSObject  {
    BOOL _enabled;
    int _count;
}

+ (id)sharedManager;

- (void)beginNetworkActivity;
- (void)resetNetworkActivity;
- (void)endNetworkActivity;
- (id)init;

@end