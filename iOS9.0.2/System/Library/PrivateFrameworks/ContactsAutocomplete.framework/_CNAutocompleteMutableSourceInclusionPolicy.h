/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSourceInclusionPolicy.h>

@class NSString;

@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {

	char _includeContacts;
	char _includeRecents;
	char _includeSuggestions;
	char _includeDirectoryServers;
	char _includeCalendarServers;
	char _includeSupplementalResults;
	char _includePredictions;

}

@property (assign) char includeContacts;                            //@synthesize includeContacts=_includeContacts - In the implementation block
@property (assign) char includeRecents;                             //@synthesize includeRecents=_includeRecents - In the implementation block
@property (assign) char includeSuggestions;                         //@synthesize includeSuggestions=_includeSuggestions - In the implementation block
@property (assign) char includeDirectoryServers;                    //@synthesize includeDirectoryServers=_includeDirectoryServers - In the implementation block
@property (assign) char includeCalendarServers;                     //@synthesize includeCalendarServers=_includeCalendarServers - In the implementation block
@property (assign) char includeSupplementalResults;                 //@synthesize includeSupplementalResults=_includeSupplementalResults - In the implementation block
@property (assign) char includePredictions;                         //@synthesize includePredictions=_includePredictions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIncludeContacts:(char)arg1 ;
-(void)setIncludeRecents:(char)arg1 ;
-(void)setIncludeSuggestions:(char)arg1 ;
-(void)setIncludeDirectoryServers:(char)arg1 ;
-(char)includeContacts;
-(char)includeRecents;
-(char)includeSuggestions;
-(void)setIncludeCalendarServers:(char)arg1 ;
-(void)setIncludePredictions:(char)arg1 ;
-(char)includeDirectoryServers;
-(char)includeCalendarServers;
-(char)includePredictions;
-(char)includeSupplementalResults;
-(void)setIncludeSupplementalResults:(char)arg1 ;
@end
