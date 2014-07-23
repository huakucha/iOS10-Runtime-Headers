/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class NSString;

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)inertWhenLocked;
- (id)actionWithIdentifier:(id)arg1;
- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)defaultActionWithContext:(id)arg1;
- (bool)hasSubActions;
- (id)subActionLabels;
- (id)pullDownNotification;
- (bool)canShowWhileLocked;
- (bool)canShowInAssistant;
- (bool)isSticky;
- (bool)overridesQuietMode;
- (id)subActions;
- (id)sound;
- (bool)isCritical;
- (id)action;
- (unsigned long long)priority;
- (id)sortDate;

@end