/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol BookmarkViewControllerDelegate;
@class UITableView, UITextField, NSString, UIColor;

@interface BookmarkViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	UITextField* _textField;
	id<BookmarkViewControllerDelegate> _bookmarkDelegate;
	CGRect _currentKeyboardFrame;

}

@property (nonatomic,copy) NSString * bookmarkTitle; 
@property (assign,nonatomic,__weak) id<BookmarkViewControllerDelegate> bookmarkDelegate;              //@synthesize bookmarkDelegate=_bookmarkDelegate - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                                 //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIColor * valueColor; 
@property (assign,nonatomic) CGRect currentKeyboardFrame;                                             //@synthesize currentKeyboardFrame=_currentKeyboardFrame - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bookmarkTitle;
-(void)setBookmarkTitle:(NSString *)arg1 ;
-(CGRect)currentKeyboardFrame;
-(void)setCurrentKeyboardFrame:(CGRect)arg1 ;
-(void)setBookmarkDelegate:(id<BookmarkViewControllerDelegate>)arg1 ;
-(id<BookmarkViewControllerDelegate>)bookmarkDelegate;
-(CGRect)_onscreenRectForKeyboardOverlap;
-(float)_navBarOverlapHeight;
-(UIColor *)valueColor;
-(CGRect)_keyboardOverlap;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)keyboardChanged:(id)arg1 ;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
-(void)_layoutTableView;
@end
