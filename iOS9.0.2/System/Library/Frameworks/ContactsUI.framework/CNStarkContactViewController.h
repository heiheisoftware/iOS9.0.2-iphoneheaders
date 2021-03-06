/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNContactContentViewController.h>
#import <libobjc.A.dylib/CNPropertyBestIDSValueQueryDelegate.h>

@class CNPropertyBestIDSValueQuery, CNCardiMessageEmailGroup;

@interface CNStarkContactViewController : CNContactContentViewController <CNPropertyBestIDSValueQueryDelegate> {

	CNPropertyBestIDSValueQuery* _bestiMessageQuery;
	CNCardiMessageEmailGroup* _iMessageEmailGroup;

}

@property (nonatomic,retain) CNPropertyBestIDSValueQuery * bestiMessageQuery;              //@synthesize bestiMessageQuery=_bestiMessageQuery - In the implementation block
@property (nonatomic,retain) CNCardiMessageEmailGroup * iMessageEmailGroup;                //@synthesize iMessageEmailGroup=_iMessageEmailGroup - In the implementation block
-(void)queryComplete;
-(void)_initiateBestiMessagePropertyQuery;
-(CNPropertyBestIDSValueQuery *)bestiMessageQuery;
-(void)setBestiMessageQuery:(CNPropertyBestIDSValueQuery *)arg1 ;
-(CNCardiMessageEmailGroup *)iMessageEmailGroup;
-(void)setIMessageEmailGroup:(CNCardiMessageEmailGroup *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(char)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)title;
-(void)loadView;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(char)arg2 ;
-(void)viewWillLayoutSubviews;
-(float)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
@end

