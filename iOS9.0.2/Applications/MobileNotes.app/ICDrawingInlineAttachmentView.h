/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICAttachmentView.h>

@class ICDrawingInlineView;

@interface ICDrawingInlineAttachmentView : ICAttachmentView {

	ICDrawingInlineView* _drawingInlineView;

}

@property (nonatomic,readonly) CGRect boundsForDisplay; 
@property (nonatomic,retain) ICDrawingInlineView * drawingInlineView;              //@synthesize drawingInlineView=_drawingInlineView - In the implementation block
-(void)sharedInit;
-(void)didTapAttachment:(id)arg1 ;
-(CGRect)boundsForDisplay;
-(void)setDrawingInlineView:(ICDrawingInlineView *)arg1 ;
-(ICDrawingInlineView *)drawingInlineView;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(void)setAttachment:(id)arg1 ;
-(void)didScrollOutOfVisibleRange;
-(void)didScrollIntoVisibleRange;
@end

