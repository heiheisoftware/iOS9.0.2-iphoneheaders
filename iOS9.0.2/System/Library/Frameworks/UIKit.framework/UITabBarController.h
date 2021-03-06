/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/GKContentRefresh.h>
#import <libobjc.A.dylib/GKURLHandling.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITabBarDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UITabBarControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
@class UITabBar, UIView, UIViewController, UIMoreNavigationController, NSArray, UITapGestureRecognizer, UIGestureRecognizer, NSMapTable, NSMutableArray, NSString, UINavigationController;

@interface UITabBarController : UIViewController <GKContentRefresh, GKURLHandling, UIGestureRecognizerDelegate, UITabBarDelegate, NSCoding> {

	UITabBar* _tabBar;
	UIView* _containerView;
	UIView* _viewControllerTransitionView;
	id _tabBarItemsToViewControllers;
	UIViewController* _selectedViewController;
	UIMoreNavigationController* _moreNavigationController;
	NSArray* _customizableViewControllers;
	UIViewController* _selectedViewControllerDuringWillAppear;
	UIViewController* _transientViewController;
	unsigned _customMaxItems;
	unsigned _defaultMaxItems;
	int _tabBarPosition;
	UITapGestureRecognizer* _backGestureRecognizer;
	UITapGestureRecognizer* _nudgeLeftGestureRecognizer;
	UITapGestureRecognizer* _nudgeRightGestureRecognizer;
	UITapGestureRecognizer* _selectGestureRecognizer;
	UIGestureRecognizer* _touchDetectionGestureRecognizer;
	NSMapTable* _rememberedFocusedViews;
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
		unsigned barLayoutIsValid : 1;
		unsigned reselectTab : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned delegatePreferredInterfaceOrientationForPresentation : 1;
		unsigned preferTabBarFocused : 1;
		unsigned offscreen : 1;
		unsigned hidNavBar : 1;
	}  _tabBarControllerFlags;
	NSMutableArray* _moreChildViewControllers;
	UIView* _accessoryView;
	id<UITabBarControllerDelegate> _delegate;
	id<UIViewControllerAnimatedTransitioning> __animator;
	id<UIViewControllerInteractiveTransitioning> __interactor;
	NSString* __backdropGroupName;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char pu_isTabBarHidden; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic) UIViewController * selectedViewController; 
@property (assign,nonatomic) unsigned selectedIndex; 
@property (nonatomic,readonly) UINavigationController * moreNavigationController; 
@property (nonatomic,copy) NSArray * customizableViewControllers;                                                                //@synthesize customizableViewControllers=_customizableViewControllers - In the implementation block
@property (nonatomic,readonly) UITabBar * tabBar; 
@property (assign,nonatomic,__weak) id<UITabBarControllerDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setAccessoryView:,nonatomic,retain) UIView * _accessoryView;                                                  //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreChildViewControllers;                                                          //@synthesize moreChildViewControllers=_moreChildViewControllers - In the implementation block
@property (setter=_setAnimator:,nonatomic,retain) id<UIViewControllerAnimatedTransitioning> _animator;                           //@synthesize _animator=__animator - In the implementation block
@property (setter=_setInteractor:,nonatomic,retain) id<UIViewControllerInteractiveTransitioning> _interactor;                    //@synthesize _interactor=__interactor - In the implementation block
@property (setter=_setBackdropGroupName:,getter=_backdropGroupName,nonatomic,retain) NSString * _backdropGroupName;              //@synthesize _backdropGroupName=__backdropGroupName - In the implementation block
+(char)_directlySetsContentOverlayInsetsForChildren;
+(char)doesOverrideSupportedInterfaceOrientations;
+(char)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+(char)doesOverridePreferredInterfaceOrientationForPresentation;
+(Class)_moreNavigationControllerClass;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(char)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/id)arg1 ;
-(void)_gkForceNextContentUpdate;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2 ;
-(char)pu_isTabBarHidden;
-(id)selectedNavigationController;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UITabBarControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UITabBarControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_deepestUnambiguousResponder;
-(char)becomeFirstResponder;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)_setAnimator:(id)arg1 ;
-(id<UIViewControllerAnimatedTransitioning>)_animator;
-(id)preferredFocusedView;
-(void)setRestorationIdentifier:(id)arg1 ;
-(id)_responderSelectionContainerViewForResponder:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(id)_transitionView;
-(void)focusedViewDidChange;
-(char)_gestureRecognizerShouldBegin:(id)arg1 ;
-(UIView *)_accessoryView;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(void)_setInteractor:(id)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)_interactor;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_performBackGesture:(id)arg1 ;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(char)arg1 ;
-(void)_setAccessoryView:(id)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(char*)arg2 ;
-(char)_isPresentationContextByDefault;
-(char)_shouldPersistViewWhenCoding;
-(void)viewDidLoad;
-(void)_populateArchivedChildViewControllers:(id)arg1 ;
-(id)_backdropBarGroupName;
-(id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)purgeMemoryForReason:(int)arg1 ;
-(char)_reallyWantsFullScreenLayout;
-(char)_isSupportedInterfaceOrientation:(int)arg1 ;
-(id)transitionCoordinator;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(char)_allowsAutorotation;
-(char)_shouldSynthesizeSupportedOrientations;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(char)_shouldUseOnePartRotation;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI33*)arg1 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2 ;
-(char)_transitionsChildViewControllers;
-(id)rotatingSnapshotViewForWindow:(id)arg1 ;
-(void)updateTabBarItemForViewController:(id)arg1 ;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(CGRect)_frameForViewController:(id)arg1 ;
-(CGRect)_frameForWrapperViewForViewController:(id)arg1 ;
-(void)_setBackdropGroupName:(id)arg1 ;
-(NSString *)_backdropGroupName;
-(UITabBar *)tabBar;
-(id)_recallRememberedFocusedViewForViewController:(id)arg1 ;
-(void)_forgetFocusedViewForViewController:(id)arg1 ;
-(NSArray *)viewControllers;
-(void)_layoutViewController:(id)arg1 ;
-(void)_rememberFocusedView:(id)arg1 forViewController:(id)arg2 ;
-(id)_selectedViewControllerInTabBar;
-(void)_hideBarWithTransition:(int)arg1 isExplicit:(char)arg2 ;
-(void)showBarWithTransition:(int)arg1 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)__viewWillLayoutSubviews;
-(unsigned)_effectiveMaxItems;
-(UIViewController *)selectedViewController;
-(id)_viewForViewController:(id)arg1 ;
-(void)setSelectedViewController:(UIViewController *)arg1 ;
-(id)_wrapperViewForViewController:(id)arg1 ;
-(void)_rebuildTabBarItemsIfNeeded;
-(void)_setSelectedTabBarItem:(id)arg1 ;
-(void)_layoutContainerView;
-(void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(char)arg1 ;
-(int)_effectiveTabBarPosition;
-(void)_prepareTabBar;
-(void)_setTabBarVisualAltitude;
-(char)_isBarHidden;
-(void)_updateGestureRecognizersForIdiom:(int)arg1 ;
-(void)_updateLayoutForTraitCollection:(id)arg1 ;
-(void)_rebuildTabBarItemsAnimated:(char)arg1 ;
-(void)_showBarWithTransition:(int)arg1 isExplicit:(char)arg2 ;
-(void)_setTabBarPosition:(int)arg1 ;
-(void)_setViewControllers:(id)arg1 animated:(char)arg2 ;
-(void)_performSelectGesture:(id)arg1 ;
-(void)_performLeftGesture:(id)arg1 ;
-(void)_performRightGesture:(id)arg1 ;
-(void)_performTouchDetectionGesture:(id)arg1 ;
-(char)_isTabBarFocused;
-(void)_performFocusGesture:(unsigned)arg1 ;
-(void)_tabBarItemClicked:(id)arg1 ;
-(void)_configureTargetActionForTabBarItem:(id)arg1 ;
-(UINavigationController *)moreNavigationController;
-(id)transientViewController;
-(void)setTransientViewController:(id)arg1 animated:(char)arg2 ;
-(unsigned)selectedIndex;
-(id)_viewControllersInTabBar;
-(id)_existingMoreNavigationController;
-(id)_viewControllerForSelectAtIndex:(unsigned)arg1 ;
-(void)setSelectedIndex:(unsigned)arg1 ;
-(void)setCustomizableViewControllers:(NSArray *)arg1 ;
-(char)_allowSelectionWithinMoreList;
-(void)setTransientViewController:(id)arg1 ;
-(void)_setSelectedViewController:(id)arg1 ;
-(id)allViewControllers;
-(void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(NSArray *)customizableViewControllers;
-(void)_setMoreNavigationControllerRestorationIdentifier;
-(char)_allowsCustomizing;
-(id)_viewControllerForTabBarItem:(id)arg1 ;
-(void)concealTabBarSelection;
-(void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(char)arg4 ;
-(id)_customAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(id)_customInteractionControllerForAnimator:(id)arg1 ;
-(void)revealTabBarSelection;
-(char)_doAllViewControllersSupportInterfaceOrientation:(int)arg1 ;
-(void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2 ;
-(void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(char)arg3 ;
-(void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(char)arg3 ;
-(void)setTabBar:(UITabBar *)arg1 ;
-(void)beginCustomizingTabBar:(id)arg1 ;
-(void)tabBarSizingDidChange:(id)arg1 ;
-(void)hideBarWithTransition:(int)arg1 ;
-(int)_tabBarPosition;
-(void)setShowsEditButtonOnLeft:(char)arg1 ;
-(char)showsEditButtonOnLeft;
-(void)_setMaximumNumberOfItems:(unsigned)arg1 ;
-(void)_setSelectedViewControllerNeedsLayout;
-(void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2 ;
-(NSMutableArray *)moreChildViewControllers;
-(void)setMoreChildViewControllers:(NSMutableArray *)arg1 ;
-(char)_ignoreUnselectedTabsForStateRestoration;
@end

