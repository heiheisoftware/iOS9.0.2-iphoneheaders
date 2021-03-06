/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIWebRotationDelegate
@optional
-(float)scaleForProposedNewScale:(float)arg1 andOldScale:(float)arg2;
-(CGSize*)contentSizeForScrollView:(id)arg1;

@required
-(id)contentView;
-(float)minimumScaleForSize:(CGSize)arg1;
-(id)enclosingScrollView;
-(float)zoomedDocumentScale;
-(float)currentDocumentScale;
-(SCD_Struct_UI47*)scalesForContainerSize:(CGSize)arg1;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI47)arg2;
-(CGRect*)rectOfInterestForRotation;
-(float)minimumVerticalContentOffset;
-(float)heightToKeepVisible;
-(CGRect*)activeRectForRectOfInterest:(CGRect)arg1;
-(char)considerHeightOfRectOfInterestForRotation;

@end

