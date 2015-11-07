/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:29:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/MapKitFramework.axbundle/MapKitFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKitFramework/MapKitFramework-Structs.h>
#import <MapKitFramework/__MKAnnotationContainerViewAccessibility_super.h>

@interface MKAnnotationContainerViewAccessibility : __MKAnnotationContainerViewAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(char)accessibilityIsShowingAnnotationCallout;
-(id)_accessibilityAnnotationCalloutView;
-(id)_accessibilityAnnotationViews;
-(void)_accessibilityZoom:(char)arg1 point:(CGPoint)arg2 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityContainerElements;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(void)deselectAnnotationView:(id)arg1 animated:(char)arg2 ;
-(void)selectAnnotationView:(id)arg1 animated:(char)arg2 avoid:(CGRect)arg3 ;
-(char)isAccessibilityElement;
-(char)accessibilityPerformEscape;
@end
