/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMGridViewDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)gridView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(int)arg3;
-(int)gridView:(id)arg1 willSelectItemAtIndex:(int)arg2;
-(void)gridView:(id)arg1 didSelectItemAtIndex:(int)arg2;
-(void)gridView:(id)arg1 updateSelectedCell:(id)arg2;
-(char)gridView:(id)arg1 canDeleteCellAtIndex:(int)arg2;
-(char)gridView:(id)arg1 canMoveCellAtIndex:(int)arg2;
-(void)gridView:(id)arg1 moveCellAtIndex:(int)arg2 toIndex:(int)arg3;
-(void)gridView:(id)arg1 willGrabCell:(id)arg2;
-(void)gridView:(id)arg1 shouldDeleteItemAtIndex:(unsigned)arg2;
-(int)gridView:(id)arg1 numberOfColumnsFor:(int)arg2;

@end
