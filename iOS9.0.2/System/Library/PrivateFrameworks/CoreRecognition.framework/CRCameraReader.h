/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol CRCameraReaderDelegate, OS_dispatch_semaphore, OS_dispatch_queue;
@class NSArray, UIColor, NSString, CRCaptureSessionManager, CRBoxLayer, DiagnosticHUDLayer, NSDate, NSPointerArray, NSTimer, NSObject, NSMutableDictionary, CRAlignmentLayer, UIActivityIndicatorView, UITapGestureRecognizer, NSMutableArray;

@interface CRCameraReader : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {

	char _hidePlacementText;
	char _continousMode;
	char _captureMode;
	char _showDiagnosticHUD;
	char _configPresentCentered;
	char _codeInverted;
	char _didSendEndOrCancel;
	char _didSendFindBox;
	char _configUseJPEGForColor;
	char _configExperimentalMode;
	char _configUseFastScanning;
	char _previousIdleState;
	char _foundNumberFreeform;
	char _foundNumberTextDetector;
	char _foundNumberEmbossed;
	char _foundNumberPortrait;
	char _foundNumberFlatISO;
	char _foundNumberFixedLandscape;
	char _foundNumberFixedPortrait;
	id<CRCameraReaderDelegate> _callbackDelegate;
	NSArray* _outputObjectTypes;
	UIColor* _maskColor;
	UIColor* _maskOutlineColor;
	UIColor* _placementTextColor;
	UIColor* _capturedTextColor;
	unsigned _captureCount;
	int _whiteBalanceMode;
	int _focusMode;
	int _exposureMode;
	int _torchMode;
	NSString* _cameraMode;
	int _cameraPosition;
	float _configDemoSpeed;
	CRCaptureSessionManager* _sessionManager;
	CRBoxLayer* _boxLayer;
	DiagnosticHUDLayer* _diagnosticHUDLayer;
	NSArray* _foundPoints;
	NSString* _foundCode;
	NSDate* _sessionStarted;
	NSDate* _pointsFound;
	NSDate* _codePresented;
	NSDate* _lastSendFindBox;
	unsigned _imagesToCapture;
	NSPointerArray* _captureBuffer;
	NSTimer* _boxLayerHideTimer;
	opaqueCMSampleBufferRef _lastBuffer;
	NSObject*<OS_dispatch_semaphore> _processingImage;
	NSMutableDictionary* _cardNumberCounts;
	NSMutableDictionary* _cardholderCounts;
	NSMutableDictionary* _expirationDateCounts;
	NSMutableDictionary* _pinnedFoundInfo;
	NSDate* _lastFieldFoundDate;
	CRAlignmentLayer* _alignmentLayer;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	UIActivityIndicatorView* _activityIndicator;
	UITapGestureRecognizer* _tapGestureRecognizer;
	OpaqueVTPixelTransferSessionRef _previewScaleSession;
	NSMutableArray* _dateCutRects;
	NSMutableArray* _nameCutRects;
	NSDate* _lastFoundNumberDate;
	double _sessionTimeout;

}

@property (__weak) id<CRCameraReaderDelegate> callbackDelegate;                      //@synthesize callbackDelegate=_callbackDelegate - In the implementation block
@property (copy) NSArray * outputObjectTypes;                                        //@synthesize outputObjectTypes=_outputObjectTypes - In the implementation block
@property (assign) char hidePlacementText;                                           //@synthesize hidePlacementText=_hidePlacementText - In the implementation block
@property (readonly) int currentCameraIdentifier; 
@property (nonatomic,copy) UIColor * maskColor;                                      //@synthesize maskColor=_maskColor - In the implementation block
@property (nonatomic,copy) UIColor * maskOutlineColor;                               //@synthesize maskOutlineColor=_maskOutlineColor - In the implementation block
@property (nonatomic,copy) UIColor * placementTextColor;                             //@synthesize placementTextColor=_placementTextColor - In the implementation block
@property (nonatomic,copy) UIColor * capturedTextColor;                              //@synthesize capturedTextColor=_capturedTextColor - In the implementation block
@property (assign) char continousMode;                                               //@synthesize continousMode=_continousMode - In the implementation block
@property (getter=isCaptureMode) char captureMode;                                   //@synthesize captureMode=_captureMode - In the implementation block
@property (assign) unsigned captureCount;                                            //@synthesize captureCount=_captureCount - In the implementation block
@property (assign) double sessionTimeout;                                            //@synthesize sessionTimeout=_sessionTimeout - In the implementation block
@property (assign) int whiteBalanceMode;                                             //@synthesize whiteBalanceMode=_whiteBalanceMode - In the implementation block
@property (assign) int focusMode;                                                    //@synthesize focusMode=_focusMode - In the implementation block
@property (assign) int exposureMode;                                                 //@synthesize exposureMode=_exposureMode - In the implementation block
@property (assign) int torchMode;                                                    //@synthesize torchMode=_torchMode - In the implementation block
@property (copy) NSString * cameraMode;                                              //@synthesize cameraMode=_cameraMode - In the implementation block
@property (assign) int cameraPosition;                                               //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (assign) char showDiagnosticHUD;                                           //@synthesize showDiagnosticHUD=_showDiagnosticHUD - In the implementation block
@property (assign) char configPresentCentered;                                       //@synthesize configPresentCentered=_configPresentCentered - In the implementation block
@property (assign) float configDemoSpeed;                                            //@synthesize configDemoSpeed=_configDemoSpeed - In the implementation block
@property (retain) CRCaptureSessionManager * sessionManager;                         //@synthesize sessionManager=_sessionManager - In the implementation block
@property (retain) CRBoxLayer * boxLayer;                                            //@synthesize boxLayer=_boxLayer - In the implementation block
@property (retain) DiagnosticHUDLayer * diagnosticHUDLayer;                          //@synthesize diagnosticHUDLayer=_diagnosticHUDLayer - In the implementation block
@property (retain) NSArray * foundPoints;                                            //@synthesize foundPoints=_foundPoints - In the implementation block
@property (retain) NSString * foundCode;                                             //@synthesize foundCode=_foundCode - In the implementation block
@property (retain) NSDate * sessionStarted;                                          //@synthesize sessionStarted=_sessionStarted - In the implementation block
@property (retain) NSDate * pointsFound;                                             //@synthesize pointsFound=_pointsFound - In the implementation block
@property (retain) NSDate * codePresented;                                           //@synthesize codePresented=_codePresented - In the implementation block
@property (assign) char codeInverted;                                                //@synthesize codeInverted=_codeInverted - In the implementation block
@property (assign) char didSendEndOrCancel;                                          //@synthesize didSendEndOrCancel=_didSendEndOrCancel - In the implementation block
@property (assign) char didSendFindBox;                                              //@synthesize didSendFindBox=_didSendFindBox - In the implementation block
@property (retain) NSDate * lastSendFindBox;                                         //@synthesize lastSendFindBox=_lastSendFindBox - In the implementation block
@property (assign) unsigned imagesToCapture;                                         //@synthesize imagesToCapture=_imagesToCapture - In the implementation block
@property (assign) char configUseJPEGForColor;                                       //@synthesize configUseJPEGForColor=_configUseJPEGForColor - In the implementation block
@property (retain) NSPointerArray * captureBuffer;                                   //@synthesize captureBuffer=_captureBuffer - In the implementation block
@property (retain) NSTimer * boxLayerHideTimer;                                      //@synthesize boxLayerHideTimer=_boxLayerHideTimer - In the implementation block
@property (assign) char configExperimentalMode;                                      //@synthesize configExperimentalMode=_configExperimentalMode - In the implementation block
@property (assign) char configUseFastScanning;                                       //@synthesize configUseFastScanning=_configUseFastScanning - In the implementation block
@property (assign) opaqueCMSampleBufferRef lastBuffer;                               //@synthesize lastBuffer=_lastBuffer - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> processingImage;                 //@synthesize processingImage=_processingImage - In the implementation block
@property (retain) NSMutableDictionary * cardNumberCounts;                           //@synthesize cardNumberCounts=_cardNumberCounts - In the implementation block
@property (retain) NSMutableDictionary * cardholderCounts;                           //@synthesize cardholderCounts=_cardholderCounts - In the implementation block
@property (retain) NSMutableDictionary * expirationDateCounts;                       //@synthesize expirationDateCounts=_expirationDateCounts - In the implementation block
@property (retain) NSMutableDictionary * pinnedFoundInfo;                            //@synthesize pinnedFoundInfo=_pinnedFoundInfo - In the implementation block
@property (retain) NSDate * lastFieldFoundDate;                                      //@synthesize lastFieldFoundDate=_lastFieldFoundDate - In the implementation block
@property (retain) CRAlignmentLayer * alignmentLayer;                                //@synthesize alignmentLayer=_alignmentLayer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> processingQueue;                     //@synthesize processingQueue=_processingQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;                       //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (retain) UIActivityIndicatorView * activityIndicator;                      //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (retain) UITapGestureRecognizer * tapGestureRecognizer;                    //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign) OpaqueVTPixelTransferSessionRef previewScaleSession;              //@synthesize previewScaleSession=_previewScaleSession - In the implementation block
@property (assign) char previousIdleState;                                           //@synthesize previousIdleState=_previousIdleState - In the implementation block
@property (retain) NSMutableArray * dateCutRects;                                    //@synthesize dateCutRects=_dateCutRects - In the implementation block
@property (retain) NSMutableArray * nameCutRects;                                    //@synthesize nameCutRects=_nameCutRects - In the implementation block
@property (assign) char foundNumberFreeform;                                         //@synthesize foundNumberFreeform=_foundNumberFreeform - In the implementation block
@property (assign) char foundNumberTextDetector;                                     //@synthesize foundNumberTextDetector=_foundNumberTextDetector - In the implementation block
@property (assign) char foundNumberEmbossed;                                         //@synthesize foundNumberEmbossed=_foundNumberEmbossed - In the implementation block
@property (assign) char foundNumberPortrait;                                         //@synthesize foundNumberPortrait=_foundNumberPortrait - In the implementation block
@property (assign) char foundNumberFlatISO;                                          //@synthesize foundNumberFlatISO=_foundNumberFlatISO - In the implementation block
@property (assign) char foundNumberFixedLandscape;                                   //@synthesize foundNumberFixedLandscape=_foundNumberFixedLandscape - In the implementation block
@property (assign) char foundNumberFixedPortrait;                                    //@synthesize foundNumberFixedPortrait=_foundNumberFixedPortrait - In the implementation block
@property (retain) NSDate * lastFoundNumberDate;                                     //@synthesize lastFoundNumberDate=_lastFoundNumberDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)loadFonts;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned)arg2 outputObjectTypes:(id)arg3 ;
+(id)extractCardImage:(vImage_Buffer*)arg1 fromPixelBuffer:(CVBufferRef)arg2 withCardBuffer:(CVBufferRef)arg3 withPoints:(id)arg4 pixelFocalLength:(id)arg5 ;
+(id)extractCardImage:(vImage_Buffer*)arg1 fromPixelBuffer:(CVBufferRef)arg2 withCardBuffer:(CVBufferRef)arg3 pixelFocalLength:(id)arg4 ;
+(id)findObjects:(id)arg1 inCorrectedImage:(vImage_Buffer*)arg2 ;
+(id)findObjects:(id)arg1 inPixelBuffer:(CVBufferRef)arg2 withFixedCut:(CGRect)arg3 ;
+(id)findObjects:(id)arg1 inPixelBuffer:(CVBufferRef)arg2 withFixedCut:(CGRect)arg3 nameRects:(id)arg4 dateRects:(id)arg5 useFlatEngine:(char)arg6 ;
+(int)targetRectsForImage:(CVBufferRef)arg1 cardNumberRects:(id*)arg2 cardholderRects:(id*)arg3 expirationRects:(id*)arg4 ;
+(id)findCCObjects:(id)arg1 inImage:(vImage_Buffer*)arg2 numberRects:(id)arg3 nameRects:(id)arg4 dateRects:(id)arg5 isDetectedRect:(char)arg6 useFlatEngine:(char)arg7 ;
+(id)findObjects:(id)arg1 inCorrectedImage:(vImage_Buffer*)arg2 nameRects:(id)arg3 dateRects:(id)arg4 useFlatEngine:(char)arg5 ;
+(id)findCCObjects:(id)arg1 InImage:(vImage_Buffer*)arg2 nameRects:(id)arg3 dateRects:(id)arg4 useFlatEngine:(char)arg5 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned)arg2 roi:(CGRect)arg3 outputObjectTypes:(id)arg4 ;
+(id)findCCNameInImage:(vImage_Buffer*)arg1 usingTextFeatures:(id)arg2 invert:(char)arg3 ;
+(id)findCCExpDateInImage:(vImage_Buffer*)arg1 usingTextFeatures:(id)arg2 invert:(char)arg3 ;
+(id)findCCNameInImage:(vImage_Buffer*)arg1 useCombinedEngine:(char)arg2 ;
+(id)findCCExpDateInImage:(vImage_Buffer*)arg1 useCombinedEngine:(char)arg2 ;
+(id)findCCNumberInImage:(vImage_Buffer*)arg1 usingTextFeatures:(id)arg2 invert:(char)arg3 ;
+(id)findCCNumberInImage:(vImage_Buffer*)arg1 useCombinedEngine:(char)arg2 ;
+(id)findCCObject:(id)arg1 inImage:(vImage_Buffer*)arg2 forRect:(id)arg3 rotateRectImage:(char)arg4 useFlatEngine:(char)arg5 numberRecognizedInverted:(char)arg6 ;
+(id)findCCNumberInImage:(vImage_Buffer*)arg1 useCombinedEngine:(char)arg2 usingTextFeatures:(id)arg3 invert:(char)arg4 ;
+(id)findCCNameInImage:(vImage_Buffer*)arg1 useCombinedEngine:(char)arg2 usingTextFeatures:(id)arg3 invert:(char)arg4 ;
+(id)findCCExpDateInImage:(vImage_Buffer*)arg1 useCombinedEngine:(char)arg2 usingTextFeatures:(id)arg3 invert:(char)arg4 ;
+(id)findObjects:(id)arg1 inImage:(id)arg2 properties:(id)arg3 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned)arg2 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned)arg2 roi:(CGRect)arg3 ;
+(unsigned)supportedCameraCount;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(int)whiteBalanceMode;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setMaskColor:(UIColor *)arg1 ;
-(void)setMaskOutlineColor:(UIColor *)arg1 ;
-(void)setPlacementTextColor:(UIColor *)arg1 ;
-(void)setCapturedTextColor:(UIColor *)arg1 ;
-(void)setOutputObjectTypes:(NSArray *)arg1 ;
-(void)setHidePlacementText:(char)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)start;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setCaptureMode:(char)arg1 ;
-(int)exposureMode;
-(int)torchMode;
-(int)focusMode;
-(void)setExposureMode:(int)arg1 ;
-(void)setWhiteBalanceMode:(int)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTorchMode:(int)arg1 ;
-(void)setFocusMode:(int)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSessionTimeout:(double)arg1 ;
-(double)sessionTimeout;
-(void)setConfigPresentCentered:(char)arg1 ;
-(void)setConfigDemoSpeed:(float)arg1 ;
-(void)setConfigExperimentalMode:(char)arg1 ;
-(void)setConfigUseFastScanning:(char)arg1 ;
-(void)setConfigUseJPEGForColor:(char)arg1 ;
-(void)setShowDiagnosticHUD:(char)arg1 ;
-(void)setCaptureCount:(unsigned)arg1 ;
-(void)setCaptureBuffer:(NSPointerArray *)arg1 ;
-(void)setPreviewScaleSession:(OpaqueVTPixelTransferSessionRef)arg1 ;
-(void)setProcessingImage:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setLastBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CRAlignmentLayer *)alignmentLayer;
-(void)setSessionManager:(CRCaptureSessionManager *)arg1 ;
-(NSArray *)outputObjectTypes;
-(void)setAlignmentLayer:(CRAlignmentLayer *)arg1 ;
-(char)showDiagnosticHUD;
-(void)setDiagnosticHUDLayer:(DiagnosticHUDLayer *)arg1 ;
-(DiagnosticHUDLayer *)diagnosticHUDLayer;
-(void)orientationDidChange:(id)arg1 ;
-(void)hideBoxLayer;
-(void)setBoxLayerHideTimer:(NSTimer *)arg1 ;
-(char)isCaptureMode;
-(void)handleTapFrom:(id)arg1 ;
-(NSTimer *)boxLayerHideTimer;
-(opaqueCMSampleBufferRef)lastBuffer;
-(void)removeLayerTree;
-(void)switchToCameraWithDeviceID:(id)arg1 ;
-(id)currentDeviceID;
-(void)switchToCamera:(int)arg1 ;
-(void)captureImage;
-(unsigned)captureCount;
-(unsigned)imagesToCapture;
-(void)setImagesToCapture:(unsigned)arg1 ;
-(void)sendDidCancel;
-(void)setFoundCode:(NSString *)arg1 ;
-(void)setSessionStarted:(NSDate *)arg1 ;
-(void)setPointsFound:(NSDate *)arg1 ;
-(void)setCodePresented:(NSDate *)arg1 ;
-(void)setCodeInverted:(char)arg1 ;
-(void)setDidSendEndOrCancel:(char)arg1 ;
-(void)setDidSendFindBox:(char)arg1 ;
-(void)setLastSendFindBox:(NSDate *)arg1 ;
-(CRBoxLayer *)boxLayer;
-(void)setCardNumberCounts:(NSMutableDictionary *)arg1 ;
-(void)setCardholderCounts:(NSMutableDictionary *)arg1 ;
-(void)setExpirationDateCounts:(NSMutableDictionary *)arg1 ;
-(void)setPinnedFoundInfo:(NSMutableDictionary *)arg1 ;
-(void)setLastFieldFoundDate:(NSDate *)arg1 ;
-(void)setNameCutRects:(NSMutableArray *)arg1 ;
-(void)setDateCutRects:(NSMutableArray *)arg1 ;
-(void)setFoundNumberFreeform:(char)arg1 ;
-(void)setFoundNumberEmbossed:(char)arg1 ;
-(void)setFoundNumberTextDetector:(char)arg1 ;
-(void)setFoundNumberPortrait:(char)arg1 ;
-(void)setFoundNumberFlatISO:(char)arg1 ;
-(void)setFoundNumberFixedLandscape:(char)arg1 ;
-(void)setFoundNumberFixedPortrait:(char)arg1 ;
-(void)setLastFoundNumberDate:(NSDate *)arg1 ;
-(char)hidePlacementText;
-(void)setBoxLayer:(CRBoxLayer *)arg1 ;
-(void)setPreviousIdleState:(char)arg1 ;
-(char)previousIdleState;
-(void)captureImageFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSDate *)sessionStarted;
-(void)sendDidEndWithErrorDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3 ;
-(NSObject*<OS_dispatch_semaphore>)processingImage;
-(void)findCodeInSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)findObjects:(id)arg1 inPixelBuffer:(CVBufferRef)arg2 attachments:(id)arg3 ;
-(NSPointerArray *)captureBuffer;
-(id)generateStringFromDate:(id)arg1 ;
-(char)configUseJPEGForColor;
-(void)flashScreenAndPlayCaptureSound;
-(NSString *)foundCode;
-(NSArray *)foundPoints;
-(void)setFoundPoints:(NSArray *)arg1 ;
-(NSDate *)pointsFound;
-(void)primeBoxLayerHideTimer;
-(char)configPresentCentered;
-(char)codeInverted;
-(void)sendDidEndWithInfo:(id)arg1 ;
-(void)pauseBoxLayerHideTimer;
-(void)animatePresentCode;
-(NSMutableDictionary *)pinnedFoundInfo;
-(void)updatePinnedInfoFrameIndex;
-(NSMutableArray *)nameCutRects;
-(NSMutableArray *)dateCutRects;
-(NSMutableDictionary *)cardNumberCounts;
-(char)foundNumberFreeform;
-(NSDate *)lastFoundNumberDate;
-(char)foundNumberEmbossed;
-(char)foundNumberTextDetector;
-(char)foundNumberFlatISO;
-(char)foundNumberFixedLandscape;
-(char)foundNumberFixedPortrait;
-(char)foundNumberPortrait;
-(void)sendDidFindTarget:(id)arg1 ;
-(NSMutableDictionary *)cardholderCounts;
-(void)setFirstTimeFrameIndexForPinnedField:(id)arg1 ;
-(NSMutableDictionary *)expirationDateCounts;
-(NSDate *)lastFieldFoundDate;
-(void)sendDidRecognizeNewObjects:(id)arg1 ;
-(unsigned)getFirstTimeFrameIndexForPinnedField:(id)arg1 ;
-(void)sendDidEndAnimation;
-(float)configDemoSpeed;
-(CGRect)boxLayerPresentationFrame;
-(NSDate *)codePresented;
-(void)sendDidDisplayMessageStyle:(int)arg1 ;
-(char)didSendEndOrCancel;
-(char)didSendFindBox;
-(NSDate *)lastSendFindBox;
-(void)sendDidEndWithError:(id)arg1 ;
-(void)aetPlacementTextColor:(id)arg1 ;
-(int)currentCameraIdentifier;
-(void)reportAcceptedString:(id)arg1 forOutput:(id)arg2 withClientID:(id)arg3 ;
-(UIColor *)maskColor;
-(UIColor *)maskOutlineColor;
-(UIColor *)placementTextColor;
-(UIColor *)capturedTextColor;
-(char)continousMode;
-(void)setContinousMode:(char)arg1 ;
-(char)configExperimentalMode;
-(char)configUseFastScanning;
-(OpaqueVTPixelTransferSessionRef)previewScaleSession;
-(void)stopSession;
-(void)setCameraMode:(NSString *)arg1 ;
-(NSString *)cameraMode;
-(void)setCallbackDelegate:(id<CRCameraReaderDelegate>)arg1 ;
-(id<CRCameraReaderDelegate>)callbackDelegate;
-(int)cameraPosition;
-(void)setCameraPosition:(int)arg1 ;
-(void)toggleCamera;
-(void)startSession;
-(void)showMessage:(id)arg1 color:(id)arg2 style:(int)arg3 duration:(double)arg4 ;
-(CRCaptureSessionManager *)sessionManager;
@end

