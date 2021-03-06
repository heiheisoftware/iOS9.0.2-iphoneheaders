/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKDataRepresentation.h>

@class NSString;

@interface BKFileDataRepresentation : BKDataRepresentation {

	NSString* mPath;
	int mSharedFd;
	long long mFileLength;
	unsigned long mFileType;
	char mHasFileAttributes;
	char mDeleteFileWhenDone;

}
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(unsigned long)fileType;
-(void)setFileType:(unsigned long)arg1 ;
-(long long)encodedLength;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)readFileAttributes;
-(void)deleteFileWhenDone;
-(id)inputStream;
-(long long)dataLength;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 ;
-(char)isEncrypted;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 ;
-(char)isReadable;
-(char)hasSameLocationAs:(id)arg1 ;
@end

