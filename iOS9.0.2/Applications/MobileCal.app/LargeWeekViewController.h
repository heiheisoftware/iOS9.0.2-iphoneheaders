/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/WeekViewController.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>
#import <MobileCal/EnqueuablePopoverPresentationManagedNavigationControllerDelegate.h>
#import <libobjc.A.dylib/ABPersonViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class EKEventGestureController, EKDayOccurrenceView, NSString;

@interface LargeWeekViewController : WeekViewController <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate, EnqueuablePopoverPresentationManagedNavigationControllerDelegate, ABPersonViewControllerDelegate, UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate> {

	char _shouldRePresentPopoverAfterDrag;
	EKEventGestureController* _gestureController;
	EKDayOccurrenceView* _selectedOccurrenceView;
	EKDayOccurrenceView* _selectedOccurrenceFrontmostClonedView;
	char _isTransformingInterfaceSize;
	char _isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
	char _shouldPresentEventCommentsForSelectedOccurrence;
	char _isPresentingPageSheet;

}

@property (assign,nonatomic) char isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 ;
-(void)showViewController:(id)arg1 sender:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)selectDate:(id)arg1 animated:(char)arg2 ;
-(void)updatePalette:(id)arg1 ;
-(void)updateNavigationBarDisplayedDateString;
-(char)isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
-(void)setIsWaitingForBackgroundLoadingOfSelectedEventOccurrenceView:(char)arg1 ;
-(char)allowsOverriddenRightNavigationBarItems;
-(char)allowsOverriddenToolbarItems;
-(id)pushedDayViewControllerWithDate:(id)arg1 animated:(char)arg2 ;
-(int)presentationStyleOverrideForChildViewControllers;
-(id)pushedListViewControllerWithDate:(id)arg1 animated:(char)arg2 ;
-(void)_closeEventPresentationAnimated:(char)arg1 ;
-(char)isReadyToShowViewControllersInsideEnqueueableManagedNavigationController:(id)arg1 ;
-(void)enqueuableNavigationController:(id)arg1 requestsDeferShowViewControllerUntilReady:(/*^block*/id)arg2 ;
-(void)enqueueableManagedNavigationController:(id)arg1 requestsConfigurationOfPropertiesForPopoverPresentationController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(float)headerVerticalOffset;
-(float)scrollToDisplayedDateAnimated:(char)arg1 ;
-(void)overlayCalendarDidChange;
-(void)updateBannerDateStrings;
-(void)customizeWeekGroupView:(id)arg1 ;
-(NSRange)visibleRangeForOffset:(float)arg1 ;
-(void)snapTargetScrollOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 ;
-(void)draggingDone;
-(Class)managedNavigationControllerType;
-(void)_resizeInterfaceForWindowSize:(CGSize)arg1 ;
-(void)_setSelectedEvent:(id)arg1 ;
-(void)_showMonthOverlayInCellAtOffset:(float)arg1 animated:(char)arg2 ;
-(void)_weekViewDidEndScrolling:(id)arg1 ;
-(void)_occurrenceViewDidEndSelection:(id)arg1 ;
-(void)_setMinimalModeIfNeededOnEventViewController:(id)arg1 ;
-(void)_displayEventDetailsViewControllerForEvent:(id)arg1 showComment:(char)arg2 ;
-(char)_tooFarToAnimate:(id)arg1 ;
-(void)_presentEventViewController:(id)arg1 forOccurrenceView:(id)arg2 animated:(char)arg3 showComments:(char)arg4 ;
-(void)_cleanupSelectionState;
-(void)_presentDetailViewControllerAsPageSheet:(id)arg1 ;
-(void)_displayOccurrenceViewAsSelectedAndFrontmost:(id)arg1 ;
-(void)_displayEventDetailsViewControllerForSelectedEventWithOccurrenceView:(id)arg1 showComments:(char)arg2 ;
-(id)_occurrenceViewForPopoverSource;
-(void)_rePresentEditPopoverFromTargetView:(id)arg1 ;
-(void)_showSelectedEvent;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(char)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(float)minimumHourScale;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(char)arg3 ;
-(char)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(char)arg4 span:(int)arg5 ;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(char)arg3 ;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2 ;
-(char)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1 ;
-(void)eventViewControllerWillBeginEditingEvent:(id)arg1 ;
-(char)eventViewDelegateShouldCreateOwnEditViewController:(id)arg1 ;
-(char)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1 ;
-(void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(char)arg3 ;
-(void)eventViewControllerWillFinishEditingEvent:(id)arg1 deleted:(char)arg2 ;
-(char)eventViewControllerShouldHideInlineEditButton;
-(char)eventViewControllerShouldHandleInlineEdit:(id)arg1 ;
-(void)eventViewControllerInlineEditButtonWasTapped:(id)arg1 ;
-(char)eventViewControllerShouldShowInlineEditButtonForInvitations:(id)arg1 ;
-(char)eventViewControllerUseMinimalModeAfterTraitCollectionChange:(id)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(int)editorShowTransition;
-(int)editorHideTransition;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(char)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
@end
