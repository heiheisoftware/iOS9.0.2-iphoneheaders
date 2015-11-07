/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPPlaceCorrectableItem.h>

@class NSMapTable, RAPPlaceCorrectableString, NSArray, NSString;

@interface RAPPlaceCorrectableAddress : NSObject <RAPPlaceCorrectableItem> {

	NSMapTable* _observers;
	char _markedWrong;
	int _kind;
	RAPPlaceCorrectableString* _street;
	RAPPlaceCorrectableString* _city;
	RAPPlaceCorrectableString* _state;
	RAPPlaceCorrectableString* _zipCode;
	RAPPlaceCorrectableString* _country;
	NSArray* _orderedCorrectableItems;
	NSString* _addressFormattingLocaleIdentifier;

}

@property (nonatomic,copy) NSString * addressFormattingLocaleIdentifier;              //@synthesize addressFormattingLocaleIdentifier=_addressFormattingLocaleIdentifier - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableString * street;                    //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableString * city;                      //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableString * state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableString * zipCode;                   //@synthesize zipCode=_zipCode - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableString * country;                   //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) NSArray * orderedCorrectableItems;                     //@synthesize orderedCorrectableItems=_orderedCorrectableItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (getter=isEdited,nonatomic,readonly) char edited; 
@property (nonatomic,readonly) int kind;                                              //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isMarkedWrong,nonatomic) char markedWrong;                   //@synthesize markedWrong=_markedWrong - In the implementation block
-(void)_invokeChangeHandlers;
-(char)isEdited;
-(id)_initWithStreet:(id)arg1 city:(id)arg2 state:(id)arg3 zipCode:(id)arg4 country:(id)arg5 addressFormattingLocaleIdentifier:(id)arg6 ;
-(void)revertCorrections;
-(RAPPlaceCorrectableString *)zipCode;
-(NSArray *)orderedCorrectableItems;
-(char)isMarkedWrong;
-(void)setMarkedWrong:(char)arg1 ;
-(void)setAddressFormattingLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)addressFormattingLocaleIdentifier;
-(void)setCorrectionsFromPlacemark:(id)arg1 ;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(RAPPlaceCorrectableString *)city;
-(RAPPlaceCorrectableString *)state;
-(void)removeObserver:(id)arg1 ;
-(NSString *)localizedTitle;
-(int)kind;
-(RAPPlaceCorrectableString *)country;
-(RAPPlaceCorrectableString *)street;
@end
