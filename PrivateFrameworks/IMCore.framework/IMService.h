/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMService : NSObject  {
}

+ (id)allServicesNonBlocking;
+ (id)allServices;
+ (id)serviceWithName:(id)arg1;
+ (id)serviceWithNameNonBlocking:(id)arg1;
+ (id)aimService;
+ (id)subnetService;
+ (unsigned int)myStatus;
+ (id)notificationCenter;
+ (id)jabberService;
+ (id)facetimeService;
+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned int)arg1;
+ (id)imageURLForStatus:(unsigned int)arg1;
+ (id)myIdleTime;
+ (BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2;
+ (unsigned int)statusForIMPerson:(id)arg1;
+ (unsigned int)statusForABPerson:(id)arg1;
+ (id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2;

- (void)login;
- (id)localizedName;
- (id)name;
- (BOOL)isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)infoForScreenName:(id)arg1;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)myScreenNames;
- (void)logout;
- (BOOL)initialSyncPerformed;
- (id)localizedShortName;
- (id)canonicalFormOfID:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (id)infoForPerson:(id)arg1;
- (id)infoForAllPeople;
- (id)infoForDisplayedPeople;
- (unsigned int)status;

@end