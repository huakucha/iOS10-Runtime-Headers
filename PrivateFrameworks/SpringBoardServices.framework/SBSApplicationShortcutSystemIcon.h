/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon {
    long long  _type;
}

@property (nonatomic, readonly) UIImage *sbui_image;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (id)_initForSubclass;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI

+ (id)sbui_defaultImage;

- (id)sbui_image;

@end
