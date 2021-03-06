/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDFragmentationStreamTuple : NSObject {
    NSDate * _expirationDate;
    HAPFragmentationStream * _fragmentationStream;
    NSString * _homeUUID;
    HMFMessage * _lastMessage;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) HAPFragmentationStream *fragmentationStream;
@property (nonatomic, readonly) NSString *homeUUID;
@property (nonatomic, retain) HMFMessage *lastMessage;

+ (id)tupleWithFragmentationStreamForHome:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)close;
- (id)expirationDate;
- (id)fragmentationStream;
- (id)homeUUID;
- (id)initWithFragmentationStreamForHome:(id)arg1 delegate:(id)arg2;
- (BOOL)isExpired;
- (id)lastMessage;
- (void)setLastMessage:(id)arg1;

@end
