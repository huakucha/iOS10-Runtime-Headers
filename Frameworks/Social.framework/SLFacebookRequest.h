/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSString;

@interface SLFacebookRequest : SLRequest  {
}

@property(retain) NSString * accessToken;
@property int responseDataFormat;


- (int)responseDataFormat;
- (void)preflightRequest;
- (void)setResponseDataFormat:(int)arg1;
- (void)setAccessToken:(id)arg1;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(int)arg3;
- (id)preparedURLRequest;
- (id)accessToken;

@end