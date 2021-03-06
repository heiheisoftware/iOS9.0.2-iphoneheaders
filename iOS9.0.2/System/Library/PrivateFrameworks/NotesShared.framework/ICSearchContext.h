/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICNoteContext;

@interface ICSearchContext : NSObject {

	id _query;
	ICNoteContext* _noteContext;

}

@property (nonatomic,retain) id query;                                 //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) ICNoteContext * noteContext;              //@synthesize noteContext=_noteContext - In the implementation block
-(void)dealloc;
-(id)query;
-(void)setQuery:(id)arg1 ;
-(id)initWithSearchTerms:(id)arg1 context:(id)arg2 ;
-(char)nextSearchResults:(id*)arg1 ;
-(void)destroyContext;
-(void)setNoteContext:(ICNoteContext *)arg1 ;
-(ICNoteContext *)noteContext;
@end

