/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDGLDataBufferAccessor <NSObject>
@required
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned)arg2;
-(void)setCGFloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3;
-(CGPoint*)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned)arg2;
-(void)setGLPoint2D:(CGPoint)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3;
-(SCD_Struct_TS15*)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned)arg2;
-(void)setGLPoint3D:(SCD_Struct_TS15)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3;
-(SCD_Struct_TS16*)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned)arg2;
-(void)setGLPoint4D:(SCD_Struct_TS16)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3;

@end

