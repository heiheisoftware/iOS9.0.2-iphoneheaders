/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICDrawingLightView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIButton, NSLayoutConstraint, UIView, CADisplayLink, ICDrawingController, ICOpenGLESView, UIActivityIndicatorView, ICRulerGestureRecognizer, ICDrawingToolsView, NSTimer, ICRulerLayer, CALayer, CATextLayer, UITouch, ICUndoSwipeGestureRecognizer, ICDismissToolsGestureRecongizer, ICDrawing, NSString;

@interface ICDrawingView : ICDrawingLightView <UIGestureRecognizerDelegate> {

	UIButton* _showToolsButton;
	char _toolsHidden;
	char _navigationBarHidden;
	UIButton* _exitButton;
	NSLayoutConstraint* bottomConstraint;
	char _fullscreen;
	UIView* _transitionBackgroundView;
	UIView* _transitionImageView;
	CADisplayLink* _displayLink;
	ICDrawingController* _drawingController;
	char _shouldPause;
	char _isDrawing;
	char _isInteractingWithRuler;
	char _zooming;
	char _allowLiveInteraction;
	char _isInlineResizing;
	char _isExpandedInline;
	char _editable;
	char _rulerEnabledButNotReportedToAnalytics;
	char _rulerIsRotating;
	char _canRulerSnapToAngle;
	char _isRulerDrawingMovingToEndOfRuler;
	char _fullySetup;
	char _claimedLiveDrawing;
	ICOpenGLESView* _glView;
	UIActivityIndicatorView* _activityView;
	ICRulerGestureRecognizer* _rulerGestureRecognizer;
	ICDrawingToolsView* _toolsView;
	NSTimer* _imageTransformTimer;
	float _initialDrawingBoundsYOrigin;
	ICRulerLayer* _rulerLayer;
	CALayer* _rulerAngleMarker;
	CALayer* _rulerAngleTick;
	CATextLayer* _rulerAngleText;
	CALayer* _rulerDistanceHUD;
	CATextLayer* _rulerDistanceText;
	float _currentTValueForSnappedDrawing;
	float _minTValueForSnappedDrawing;
	float _maxTValueForSnappedDrawing;
	float _originTValueForSnappedDrawing;
	float _rulerZoomStartCenterTValueOnScreen;
	float _rulerZoomStartScale;
	UITouch* _drawingTouch;
	ICUndoSwipeGestureRecognizer* _undoGestureRecognizer;
	ICUndoSwipeGestureRecognizer* _redoGestureRecognizer;
	ICDismissToolsGestureRecongizer* _hideToolGestureRecognizer;
	int _cachedOrientation;
	CGPoint _startDrawingLocation;
	SCD_Struct_IC18 _rulerState;
	SCD_Struct_IC18 _previousRulerState;
	CGAffineTransform _rulerTransform;
	CGAffineTransform _rulerStartTransform;
	CGAffineTransform _rulerZoomStartTransform;

}

@property (assign,nonatomic) CGAffineTransform imageTransform; 
@property (nonatomic,readonly) ICDrawing * drawing; 
@property (nonatomic,readonly) CGRect drawingBounds; 
@property (nonatomic,readonly) CGSize drawingFullSize; 
@property (nonatomic,readonly) CGSize unrotatedDrawingFullSize; 
@property (nonatomic,readonly) CGAffineTransform drawingOrientationTransform; 
@property (nonatomic,readonly) CGAffineTransform viewOrientationTransform; 
@property (assign,nonatomic) char isDrawing;                                                           //@synthesize isDrawing=_isDrawing - In the implementation block
@property (assign,nonatomic) char isInteractingWithRuler;                                              //@synthesize isInteractingWithRuler=_isInteractingWithRuler - In the implementation block
@property (assign,nonatomic) char zooming;                                                             //@synthesize zooming=_zooming - In the implementation block
@property (assign,nonatomic) char allowLiveInteraction;                                                //@synthesize allowLiveInteraction=_allowLiveInteraction - In the implementation block
@property (nonatomic,readonly) ICOpenGLESView * glView;                                                //@synthesize glView=_glView - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityView;                            //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) ICRulerGestureRecognizer * rulerGestureRecognizer;                        //@synthesize rulerGestureRecognizer=_rulerGestureRecognizer - In the implementation block
@property (nonatomic,readonly) ICDrawingToolsView * toolsView;                                         //@synthesize toolsView=_toolsView - In the implementation block
@property (assign,nonatomic) char contentHidden; 
@property (nonatomic,readonly) char prefersStatusBarHidden; 
@property (nonatomic,readonly) id icaxOpenGLView; 
@property (nonatomic,readonly) char icaxIsFullscreen; 
@property (nonatomic,readonly) ICDrawingToolsView * icaxToolsView; 
@property (nonatomic,retain) NSTimer * imageTransformTimer;                                            //@synthesize imageTransformTimer=_imageTransformTimer - In the implementation block
@property (assign,nonatomic) float initialDrawingBoundsYOrigin;                                        //@synthesize initialDrawingBoundsYOrigin=_initialDrawingBoundsYOrigin - In the implementation block
@property (assign,nonatomic) char isInlineResizing;                                                    //@synthesize isInlineResizing=_isInlineResizing - In the implementation block
@property (assign,nonatomic) char isExpandedInline;                                                    //@synthesize isExpandedInline=_isExpandedInline - In the implementation block
@property (assign,getter=isEditable,nonatomic) char editable;                                          //@synthesize editable=_editable - In the implementation block
@property (nonatomic,retain) ICRulerLayer * rulerLayer;                                                //@synthesize rulerLayer=_rulerLayer - In the implementation block
@property (assign,nonatomic) CGAffineTransform rulerTransform;                                         //@synthesize rulerTransform=_rulerTransform - In the implementation block
@property (nonatomic,retain) CALayer * rulerAngleMarker;                                               //@synthesize rulerAngleMarker=_rulerAngleMarker - In the implementation block
@property (nonatomic,retain) CALayer * rulerAngleTick;                                                 //@synthesize rulerAngleTick=_rulerAngleTick - In the implementation block
@property (nonatomic,retain) CATextLayer * rulerAngleText;                                             //@synthesize rulerAngleText=_rulerAngleText - In the implementation block
@property (nonatomic,retain) CALayer * rulerDistanceHUD;                                               //@synthesize rulerDistanceHUD=_rulerDistanceHUD - In the implementation block
@property (nonatomic,retain) CATextLayer * rulerDistanceText;                                          //@synthesize rulerDistanceText=_rulerDistanceText - In the implementation block
@property (assign) char rulerEnabledButNotReportedToAnalytics;                                         //@synthesize rulerEnabledButNotReportedToAnalytics=_rulerEnabledButNotReportedToAnalytics - In the implementation block
@property (assign,nonatomic) CGPoint startDrawingLocation;                                             //@synthesize startDrawingLocation=_startDrawingLocation - In the implementation block
@property (assign,nonatomic) CGAffineTransform rulerStartTransform;                                    //@synthesize rulerStartTransform=_rulerStartTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_IC18 rulerState;                                               //@synthesize rulerState=_rulerState - In the implementation block
@property (assign,nonatomic) SCD_Struct_IC18 previousRulerState;                                       //@synthesize previousRulerState=_previousRulerState - In the implementation block
@property (assign,nonatomic) char rulerIsRotating;                                                     //@synthesize rulerIsRotating=_rulerIsRotating - In the implementation block
@property (assign,nonatomic) char canRulerSnapToAngle;                                                 //@synthesize canRulerSnapToAngle=_canRulerSnapToAngle - In the implementation block
@property (assign,nonatomic) char isRulerDrawingMovingToEndOfRuler;                                    //@synthesize isRulerDrawingMovingToEndOfRuler=_isRulerDrawingMovingToEndOfRuler - In the implementation block
@property (assign,nonatomic) float currentTValueForSnappedDrawing;                                     //@synthesize currentTValueForSnappedDrawing=_currentTValueForSnappedDrawing - In the implementation block
@property (assign,nonatomic) float minTValueForSnappedDrawing;                                         //@synthesize minTValueForSnappedDrawing=_minTValueForSnappedDrawing - In the implementation block
@property (assign,nonatomic) float maxTValueForSnappedDrawing;                                         //@synthesize maxTValueForSnappedDrawing=_maxTValueForSnappedDrawing - In the implementation block
@property (assign,nonatomic) float originTValueForSnappedDrawing;                                      //@synthesize originTValueForSnappedDrawing=_originTValueForSnappedDrawing - In the implementation block
@property (assign,nonatomic) float rulerZoomStartCenterTValueOnScreen;                                 //@synthesize rulerZoomStartCenterTValueOnScreen=_rulerZoomStartCenterTValueOnScreen - In the implementation block
@property (assign,nonatomic) float rulerZoomStartScale;                                                //@synthesize rulerZoomStartScale=_rulerZoomStartScale - In the implementation block
@property (assign,nonatomic) CGAffineTransform rulerZoomStartTransform;                                //@synthesize rulerZoomStartTransform=_rulerZoomStartTransform - In the implementation block
@property (nonatomic,retain) UITouch * drawingTouch;                                                   //@synthesize drawingTouch=_drawingTouch - In the implementation block
@property (nonatomic,retain) ICUndoSwipeGestureRecognizer * undoGestureRecognizer;                     //@synthesize undoGestureRecognizer=_undoGestureRecognizer - In the implementation block
@property (nonatomic,retain) ICUndoSwipeGestureRecognizer * redoGestureRecognizer;                     //@synthesize redoGestureRecognizer=_redoGestureRecognizer - In the implementation block
@property (nonatomic,retain) ICDismissToolsGestureRecongizer * hideToolGestureRecognizer;              //@synthesize hideToolGestureRecognizer=_hideToolGestureRecognizer - In the implementation block
@property (assign,nonatomic) char fullySetup;                                                          //@synthesize fullySetup=_fullySetup - In the implementation block
@property (assign,nonatomic) char claimedLiveDrawing;                                                  //@synthesize claimedLiveDrawing=_claimedLiveDrawing - In the implementation block
@property (assign,nonatomic) int cachedOrientation;                                                    //@synthesize cachedOrientation=_cachedOrientation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setupDefaults;
-(id)initWithFrame:(CGRect)arg1 andTextAttachment:(id)arg2 forManualRendering:(char)arg3 ;
-(void)setupEventHandling;
-(void)incrementRulerAngleBy:(float)arg1 ;
-(void)makeRulerVertical;
-(void)makeRulerHorizontal;
-(char)contentHidden;
-(void)setContentHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andTextAttachment:(id)arg2 forManualRendering:(char)arg3 fullscreen:(char)arg4 editable:(char)arg5 ;
-(void)drawingBoundsUpdated;
-(void)layoutUIForSize:(CGSize)arg1 ;
-(void)setupFullScreenTransform;
-(void)setOrientationIfPossibleFromSize:(CGSize)arg1 ;
-(ICDrawingToolsView *)toolsView;
-(void)willTransitionToSize:(CGSize)arg1 ;
-(void)resetRuler;
-(void)transitionToSize:(CGSize)arg1 ;
-(char)showEraseAllButton;
-(char)canEraseAll;
-(CGSize)drawingFullSize;
-(CGSize)unrotatedDrawingFullSize;
-(CGAffineTransform)transformToAccountForViewOrientationAndSize;
-(void)setZooming:(char)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 animated:(char)arg2 ;
-(ICRulerGestureRecognizer *)rulerGestureRecognizer;
-(void)drawingCancelled:(/*^block*/id)arg1 ;
-(void)rotate;
-(char)isDrawing;
-(id)icaxOpenGLView;
-(ICDrawingToolsView *)icaxToolsView;
-(void)showRuler;
-(void)hideRuler;
-(char)isInteractingWithRuler;
-(void)hideDrawingTools;
-(char)supportsFreeTransformGesture;
-(id)newNavigationController;
-(void)setAllowLiveInteraction:(char)arg1 ;
-(ICOpenGLESView *)glView;
-(void)drawingDisplay;
-(void)setNeedsDrawingDisplay;
-(void)rotateIfNeeded;
-(CGPoint)drawingCenterOffsetForSize:(CGSize)arg1 ;
-(void)setupOpenGL;
-(void)setRulerEnabledButNotReportedToAnalytics:(char)arg1 ;
-(void)setupOpenGLViewAccessibility;
-(char)claimedLiveDrawing;
-(void)setClaimedLiveDrawing:(char)arg1 ;
-(NSTimer *)imageTransformTimer;
-(char)isExpandedInline;
-(CGAffineTransform)viewOrientationTransform;
-(CGSize)drawingFullSizeForOrientation:(int)arg1 ;
-(void)setupFullScreenTransform:(CGAffineTransform)arg1 toViewOrientation:(CGAffineTransform)arg2 animated:(char)arg3 ;
-(void)rulerMoveGesture:(id)arg1 ;
-(void)setRulerGestureRecognizer:(ICRulerGestureRecognizer *)arg1 ;
-(ICUndoSwipeGestureRecognizer *)undoGestureRecognizer;
-(void)setUndoGestureRecognizer:(ICUndoSwipeGestureRecognizer *)arg1 ;
-(void)setRedoGestureRecognizer:(ICUndoSwipeGestureRecognizer *)arg1 ;
-(ICUndoSwipeGestureRecognizer *)redoGestureRecognizer;
-(char)canChangeOrientationOnRotation;
-(void)setupTransitionFrameForViewSize:(CGSize)arg1 ;
-(void)setCachedOrientation:(int)arg1 ;
-(void)setupPickerForViewSize:(CGSize)arg1 ;
-(unsigned)toolStateForSize:(CGSize)arg1 ;
-(void)setHideToolGestureRecognizer:(ICDismissToolsGestureRecongizer *)arg1 ;
-(ICDismissToolsGestureRecongizer *)hideToolGestureRecognizer;
-(void)showDrawingTools;
-(ICRulerLayer *)rulerLayer;
-(void)setRulerZoomStartTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)rulerZoomStartTransform;
-(float)getRulerCenterTValueOnScreenForTransfrom:(CGAffineTransform)arg1 ;
-(void)setRulerZoomStartCenterTValueOnScreen:(float)arg1 ;
-(CGAffineTransform)canvasTransform;
-(void)setRulerZoomStartScale:(float)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 fromViewOrientation:(CGAffineTransform)arg2 toViewOrientation:(CGAffineTransform)arg3 animated:(char)arg4 duration:(double)arg5 ;
-(char)allowLiveInteraction;
-(char)enableUserActionButton;
-(char)canPerformUserAction;
-(void)setImageTransformTimer:(NSTimer *)arg1 ;
-(void)updateImageTransform:(id)arg1 ;
-(void)updateTickMarkImage;
-(char)fullySetup;
-(int)cachedOrientation;
-(CGAffineTransform)viewOrientationTransformForOrientation:(int)arg1 ;
-(void)setFullySetup:(char)arg1 ;
-(id)dismissButtonImage;
-(void)setStartDrawingLocation:(CGPoint)arg1 ;
-(void)setIsDrawing:(char)arg1 ;
-(float)rulerAlignInset;
-(SCD_Struct_IC19)drawingInputPoint:(CGPoint)arg1 forTouch:(id)arg2 predicted:(char)arg3 ;
-(void)reportDrawingToolUsage;
-(void)resetRulerTouches;
-(void)removeRulerMarkers;
-(char)rulerEnabledButNotReportedToAnalytics;
-(CGAffineTransform)ensureRulerFullyOnscreen:(CGAffineTransform)arg1 ;
-(char)compactRuler;
-(id)rulerBackgroundImage;
-(char)zooming;
-(float)rulerZoomStartCenterTValueOnScreen;
-(float)rulerZoomStartScale;
-(CGAffineTransform)pixelSnapRulerTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)defaultRulerTransfrom;
-(void)setRulerStartTransform:(CGAffineTransform)arg1 ;
-(void)setRulerIsRotating:(char)arg1 ;
-(void)setRulerLayer:(ICRulerLayer *)arg1 ;
-(CGAffineTransform)rulerStartTransform;
-(id)addOpacityAnimationOnLayer:(id)arg1 delegate:(id)arg2 toOpacity:(float)arg3 ;
-(void)setRulerState:(SCD_Struct_IC18)arg1 ;
-(CALayer *)rulerAngleMarker;
-(void)setRulerAngleMarker:(CALayer *)arg1 ;
-(char)rulerIsRotating;
-(void)updateAngleWithAngleMarkerPosition:(CGPoint)arg1 ;
-(char)shouldUseLargestRulerTextFontSize;
-(id)rulerDialImage;
-(void)setRulerAngleTick:(CALayer *)arg1 ;
-(id)rulerDialLevelImage;
-(CALayer *)rulerAngleTick;
-(void)setRulerAngleText:(CATextLayer *)arg1 ;
-(CATextLayer *)rulerAngleText;
-(SCD_Struct_IC18)rulerState;
-(void)setCanRulerSnapToAngle:(char)arg1 ;
-(void)setPreviousRulerState:(SCD_Struct_IC18)arg1 ;
-(SCD_Struct_IC18)previousRulerState;
-(char)canRulerSnapToAngle;
-(CGAffineTransform)angleSnapRulerTransform:(CGAffineTransform)arg1 aroundOrigin:(CGPoint)arg2 ;
-(void)updateAngle:(id)arg1 ;
-(void)setDrawingTouch:(UITouch *)arg1 ;
-(void)setIsInteractingWithRuler:(char)arg1 ;
-(void)updateRuler:(id)arg1 ;
-(char)viewPointInRuler:(CGPoint)arg1 ;
-(float)maxTValueForSnappedDrawing;
-(float)minTValueForSnappedDrawing;
-(CATextLayer *)rulerDistanceText;
-(float)originTValueForSnappedDrawing;
-(void)setIsRulerDrawingMovingToEndOfRuler:(char)arg1 ;
-(void)setRulerDistanceHUD:(CALayer *)arg1 ;
-(CALayer *)rulerDistanceHUD;
-(void)setRulerDistanceText:(CATextLayer *)arg1 ;
-(id)addScaleAnimationOnLayer:(id)arg1 delegate:(id)arg2 fromScale:(float)arg3 toScale:(float)arg4 ;
-(float)currentTValueForSnappedDrawing;
-(CGPoint)getRulerCenterLineOriginAndTangent:(CGPoint*)arg1 ;
-(void)setCurrentTValueForSnappedDrawing:(float)arg1 ;
-(void)setMinTValueForSnappedDrawing:(float)arg1 ;
-(void)setMaxTValueForSnappedDrawing:(float)arg1 ;
-(void)setOriginTValueForSnappedDrawing:(float)arg1 ;
-(void)updateDistanceMarkerWithSpacing:(float)arg1 ;
-(UITouch *)drawingTouch;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 ;
-(void)drawingBeganAtPoint:(CGPoint)arg1 forTouch:(id)arg2 inputType:(int)arg3 ;
-(void)updateRulerMarkerForLocation:(CGPoint)arg1 firstTouch:(char)arg2 ;
-(void)temporaryHideDrawingTools;
-(void)temporaryHideNavigationBar;
-(void)temporaryShowHiddenUI;
-(id)initWithTextAttachment:(id)arg1 forManualRendering:(char)arg2 fullscreen:(char)arg3 ;
-(char)scrollViewShouldCancelTouchesForThisView;
-(CGAffineTransform)drawingOrientationTransform;
-(char)isInReplay;
-(void)endReplays;
-(float)rulerTickMarkInset;
-(char)icaxIsFullscreen;
-(float)initialDrawingBoundsYOrigin;
-(void)setInitialDrawingBoundsYOrigin:(float)arg1 ;
-(char)isInlineResizing;
-(void)setIsInlineResizing:(char)arg1 ;
-(void)setIsExpandedInline:(char)arg1 ;
-(CGPoint)startDrawingLocation;
-(char)isRulerDrawingMovingToEndOfRuler;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)imageTransform;
-(CGRect)imageFrame;
-(void)hideUI;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(char)canUndo;
-(char)canRedo;
-(id)undoManager;
-(void)undo;
-(void)redo;
-(char)becomeFirstResponder;
-(char)isEditable;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(char)canBecomeFirstResponder;
-(id)accessibilityLabel;
-(void)setEditable:(char)arg1 ;
-(void)done;
-(id)accessibilityHint;
-(char)isAccessibilityElement;
-(char)accessibilityElementsHidden;
-(id)accessibilityElements;
-(void)setAttachment:(id)arg1 ;
-(CGRect)drawingBounds;
-(void)setRulerTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)rulerTransform;
-(float)rulerWidth;
-(void)drawingEnded;
-(ICDrawing *)drawing;
-(void)erase;
-(UIActivityIndicatorView *)activityView;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(void)didTransitionToSize:(CGSize)arg1 ;
-(void)setupUI;
@end

