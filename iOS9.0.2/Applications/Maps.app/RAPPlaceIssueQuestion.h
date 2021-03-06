/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPQuestion.h>
#import <Maps/RAPTransitSubcategoryQuestionHost.h>
#import <Maps/RAPQuestionAcceptingAlternatePlace.h>

@protocol RAPPlace, RAPPlaceIssue;
@class NSArray, MKMapItem, NSString;

@interface RAPPlaceIssueQuestion : RAPQuestion <RAPTransitSubcategoryQuestionHost, RAPQuestionAcceptingAlternatePlace> {

	id<RAPPlace> _reportedPlace;
	NSArray* _selectableIssues;
	id<RAPPlaceIssue> _selectedIssue;
	id<RAPPlaceIssue> _notListedIssue;

}

@property (nonatomic,readonly) MKMapItem * snippetMapItem; 
@property (nonatomic,readonly) NSArray * selectableIssues;                                  //@synthesize selectableIssues=_selectableIssues - In the implementation block
@property (nonatomic,retain) id<RAPPlaceIssue> selectedIssue;                               //@synthesize selectedIssue=_selectedIssue - In the implementation block
@property (nonatomic,readonly) id<RAPPlaceIssue> notListedIssue;                            //@synthesize notListedIssue=_notListedIssue - In the implementation block
@property (getter=_reportedPlace,nonatomic,retain) id<RAPPlace> reportedPlace;              //@synthesize reportedPlace=_reportedPlace - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_canDisplayIssuesOtherThanProblemNotListed;
-(char)_isRecursivelyComplete;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 ;
-(id)_reportedPlace;
-(id)_initWithReport:(id)arg1 parentQuestion:(id)arg2 place:(id)arg3 ;
-(char)childTransitSubcategoryQuestionsShouldHideStationInfoIncorrect;
-(id<RAPPlaceIssue>)selectedIssue;
-(NSArray *)selectableIssues;
-(void)setSelectedIssue:(id<RAPPlaceIssue>)arg1 ;
-(void)setReportedPlace:(id<RAPPlace>)arg1 ;
-(id)_locationClosedTitleForMapItem:(id)arg1 ;
-(id<RAPPlaceIssue>)notListedIssue;
-(MKMapItem *)snippetMapItem;
-(char)isComplete;
@end

