/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UISplitViewControllerDelegatePrivate.h>
#import <MobileMail/TransferMailboxPickerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MobileMail/MFApplicationSceneActor.h>

@class UIPanGestureRecognizer, UITapGestureRecognizer, UIView, MailNavigationController, MailDetailNavigationController, TransferNavigationController, NSString;

@interface MailSplitViewController : UISplitViewController <UISplitViewControllerDelegate, UISplitViewControllerDelegatePrivate, TransferMailboxPickerDelegate, UIGestureRecognizerDelegate, MFApplicationSceneActor> {

	UIPanGestureRecognizer* _overlaySwipeRecognizer;
	UITapGestureRecognizer* _overlayTapRecognizer;
	unsigned _lastGestureRecognized;
	float _panHysteresisHorizontalLocation;
	UIView* _detailDimmingView;
	char _detailDimmed;
	char _primaryHasFocus;
	char _isInEditMode;
	char _overlayGesturesEnabled;
	MailNavigationController* _messageListNavController;
	MailDetailNavigationController* _messageDetailNavController;
	TransferNavigationController* _transferNavigationController;

}

@property (nonatomic,readonly) MailNavigationController * messageListNavController;                      //@synthesize messageListNavController=_messageListNavController - In the implementation block
@property (nonatomic,readonly) MailDetailNavigationController * messageDetailNavController;              //@synthesize messageDetailNavController=_messageDetailNavController - In the implementation block
@property (assign,nonatomic) char overlayGesturesEnabled;                                                //@synthesize overlayGesturesEnabled=_overlayGesturesEnabled - In the implementation block
@property (nonatomic,retain) TransferNavigationController * transferNavigationController;                //@synthesize transferNavigationController=_transferNavigationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(id)initWithMasterController:(id)arg1 detailController:(id)arg2 ;
-(MailNavigationController *)messageListNavController;
-(MailDetailNavigationController *)messageDetailNavController;
-(char)usePadTransferStyle;
-(void)prepareTransferOfMessages:(id)arg1 options:(int)arg2 animated:(char)arg3 ;
-(void)setPrimaryVisible:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)overlayGesturesEnabled;
-(void)setFocusedViewController:(id)arg1 ;
-(void)cancelTransferOfMessagesAnimated:(char)arg1 ;
-(void)transferMailboxPickerController:(id)arg1 didSelectMailbox:(id)arg2 withMessages:(id)arg3 ;
-(void)transferMailboxPickerControllerDidFinish:(id)arg1 animated:(char)arg2 ;
-(void)transferMailboxPickerController:(id)arg1 animateMessageToPoint:(CGPoint)arg2 inView:(id)arg3 didFinishDelegate:(id)arg4 selector:(SEL)arg5 context:(id)arg6 ;
-(char)isDetailVisible;
-(void)applicationSceneController:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)setOverlayGesturesEnabled:(char)arg1 ;
-(void)focusViewController:(id)arg1 animated:(char)arg2 ;
-(void)unfocusViewController:(id)arg1 animated:(char)arg2 ;
-(void)didBecomeActiveSceneActor;
-(void)_createAndAttachOverlayGestures;
-(void)_swipedBack:(id)arg1 ;
-(void)_tappedDimmingView:(id)arg1 ;
-(void)_slideInOrNavigateBack:(char)arg1 ;
-(char)_swipeRecognizerShouldBegin:(id)arg1 ;
-(char)_tapRecognizerShouldBegin:(id)arg1 ;
-(void)setTransferNavigationController:(id)arg1 animated:(char)arg2 ;
-(void)setTransferNavigationController:(TransferNavigationController *)arg1 ;
-(TransferNavigationController *)transferNavigationController;
-(void)setDetailDimmed:(char)arg1 animated:(char)arg2 ;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)applicationWillSuspend;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(char)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(char)_splitViewControllerIsPrimaryVisible:(id)arg1 ;
-(char)_splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 forRestorationOfCollapsedWhileSuspendedWithPrimaryVisible:(char)arg4 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(int)arg2 ;
-(char)isCollapsed;
-(char)_isPortrait;
@end
