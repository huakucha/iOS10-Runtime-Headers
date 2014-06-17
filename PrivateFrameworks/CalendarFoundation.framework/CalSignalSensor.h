/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_source>;

@interface CalSignalSensor : NSObject  {
    NSObject<OS_dispatch_source> *_signalSource;
    int _signal;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fireBlock;

}

@property int signal;
@property(copy) id fireBlock;


- (void)setFireBlock:(id)arg1;
- (void)setSignal:(int)arg1;
- (void)stopSensor;
- (void)startSensor;
- (id)initWithSignal:(int)arg1;
- (id)fireBlock;
- (void)_shutDownSource;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (int)signal;

@end