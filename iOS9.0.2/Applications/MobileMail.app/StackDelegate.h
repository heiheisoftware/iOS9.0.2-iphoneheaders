/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol StackDelegate <NSObject>
@optional
-(void)stackControllerWillStartStackingViews:(id)arg1;
-(void)stackControllerDidStopStackingViews:(id)arg1;
-(void)stackControllerWillStartAnimatingViews:(id)arg1;
-(void)stackControllerDidStopAnimatingViews:(id)arg1;
-(void)stackController:(id)arg1 dataLoadTimedOutInView:(id)arg2 forItem:(id)arg3;
-(void)stackController:(id)arg1 willStackView:(id)arg2 forItem:(id)arg3;
-(void)stackController:(id)arg1 willDisplayView:(id)arg2 forItem:(id)arg3;
-(void)stackController:(id)arg1 willRemoveViewForItem:(id)arg2;

@end

