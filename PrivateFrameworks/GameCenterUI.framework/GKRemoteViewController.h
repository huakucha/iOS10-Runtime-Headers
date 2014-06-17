/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIColor, NSMutableDictionary, GKHostedViewController, GKGame;

@interface GKRemoteViewController : _UIRemoteViewController <GKServiceViewControllerDelegate> {
    bool_didSetRemoteGame;
    bool_viewDidAppear;
    GKHostedViewController *_managingViewControllerWeak;
    GKGame *_game;
    NSMutableDictionary *_dirtyProperties;
    UIColor *_previousStatusBarColor;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _blockToPerformAfterViewDidAppear;

}

@property bool didSetRemoteGame;
@property bool viewDidAppear;
@property(readonly) bool serviceNeedsCurrentGame;
@property(readonly) bool serviceNeedsLocalPlayer;
@property(retain) NSMutableDictionary * dirtyProperties;
@property GKHostedViewController * managingViewController;
@property(retain) UIColor * previousStatusBarColor;
@property(copy) id blockToPerformAfterViewDidAppear;
@property(retain) GKGame * game;

+ (id)exportedInterface;
+ (bool)shouldPropagateAppearanceCustomizations;
+ (id)serviceViewControllerInterface;

- (void)setPreviousStatusBarColor:(id)arg1;
- (id)previousStatusBarColor;
- (void)setDidSetRemoteGame:(bool)arg1;
- (void)readyToPresentInController:(id)arg1;
- (bool)_dismissSelfAfterGettingShouldCancel;
- (void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1;
- (void)setBlockToPerformAfterViewDidAppear:(id)arg1;
- (id)blockToPerformAfterViewDidAppear;
- (void)_performBlockAfterViewDidAppearIfNeeded;
- (void)setViewDidAppear:(bool)arg1;
- (long long)_desiredStatusBarStyle;
- (void)setDirtyProperties:(id)arg1;
- (void)populateInitialStateForRemoteView:(id)arg1;
- (bool)serviceNeedsLocalPlayer;
- (bool)serviceNeedsCurrentGame;
- (bool)didSetRemoteGame;
- (void)nudge;
- (void)setManagingViewController:(id)arg1;
- (bool)viewDidAppear;
- (id)observedKeyPaths;
- (bool)_dismissSelfAfterGettingShouldFinish;
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerIsCanceling;
- (void)setupRemoteView;
- (id)managingViewController;
- (void)setGame:(id)arg1;
- (id)game;
- (id)dirtyProperties;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end