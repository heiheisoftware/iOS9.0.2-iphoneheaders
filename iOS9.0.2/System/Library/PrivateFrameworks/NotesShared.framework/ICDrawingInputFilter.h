/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICDrawingInputFilter <NSObject>
@required
-(void)setInputScale:(float)arg1;
-(void)reset;
-(unsigned)copyUpdatedRangeFromIndex:(unsigned)arg1 into:(vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >*)arg2 onQueue:(id)arg3;
-(vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >*)getUpdatedRangeFromIndex:(inout unsigned*)arg1;

@end
