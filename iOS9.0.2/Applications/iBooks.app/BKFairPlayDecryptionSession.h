/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKFairPlayDecryptionSession.h>

@protocol BKFairPlayDecryptionSession <NSObject>
@property (nonatomic,readonly) unsigned dataChunkSize; 
@required
-(char)decryptChunk:(char*)arg1 withSize:(unsigned long)arg2 into:(char*)arg3 refetch:(char*)arg4 error:(id*)arg5;
-(char)decryptChunks:(char*)arg1 withSize:(unsigned long)arg2 into:(char*)arg3 refetch:(char*)arg4 error:(id*)arg5;
-(unsigned)dataChunkSize;

@end


@class IMKbCryptRefWrapper, NSString;

@interface BKFairPlayDecryptionSession : NSObject <BKFairPlayDecryptionSession> {

	tpZFqotcPt* mContextManager;
	IMKbCryptRefWrapper* mCryptRef;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned dataChunkSize; 
+(tpZFqotcPt*)fairPlayContextManager;
-(char)decryptChunk:(char*)arg1 withSize:(unsigned long)arg2 into:(char*)arg3 refetch:(char*)arg4 error:(id*)arg5 ;
-(char)decryptChunks:(char*)arg1 withSize:(unsigned long)arg2 into:(char*)arg3 refetch:(char*)arg4 error:(id*)arg5 ;
-(unsigned)dataChunkSize;
-(id)initWithSinfData:(id)arg1 ;
@end

