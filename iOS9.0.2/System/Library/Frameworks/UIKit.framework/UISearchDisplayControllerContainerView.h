/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSLayoutConstraint;

@interface UISearchDisplayControllerContainerView : UIView {

	char _collapsedTopView;
	UIView* _topView;
	UIView* _bottomView;
	UIView* _behindView;
	NSLayoutConstraint* _topViewHeightConstraint;
	NSLayoutConstraint* _topViewAttributeTopConstraint;

}

@property (nonatomic,readonly) UIView * topView;                                              //@synthesize topView=_topView - In the implementation block
@property (nonatomic,readonly) UIView * bottomView;                                           //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,readonly) UIView * behindView;                                           //@synthesize behindView=_behindView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topViewHeightConstraint;                    //@synthesize topViewHeightConstraint=_topViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topViewAttributeTopConstraint;              //@synthesize topViewAttributeTopConstraint=_topViewAttributeTopConstraint - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(UIView *)topView;
-(void)setBottomViewUserInteractionEnabled:(char)arg1 ;
-(void)updateTopViewHeight:(float)arg1 ;
-(void)updateTopAttributeConstant:(float)arg1 ;
-(void)collapseTopView;
-(void)updateTopViewHeight:(float)arg1 animateUpdate:(char)arg2 ;
-(void)configureInteractionForContainment:(char)arg1 ;
-(void)adjustTopAttributeConstantByDelta:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 topViewHeight:(float)arg2 ;
-(UIView *)bottomView;
-(UIView *)behindView;
-(void)setTopViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopViewAttributeTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topViewHeightConstraint;
-(NSLayoutConstraint *)topViewAttributeTopConstraint;
@end
