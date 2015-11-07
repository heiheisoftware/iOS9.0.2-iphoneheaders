/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicContextualActionsHeaderLockupViewDelegate.h>

@class MusicEntityViewHorizontalLockupContentDescriptor, MusicContextualActionsHeaderLockupView, NSArray, MusicEntityValueContext, NSString;

@interface MusicContextualActionsHeaderViewController : UIViewController <MusicContextualActionsHeaderLockupViewDelegate> {

	MusicEntityViewHorizontalLockupContentDescriptor* _contentDescriptor;
	MusicContextualActionsHeaderLockupView* _lockupView;
	CGSize _previousBoundsSize;
	NSArray* _contextualActions;
	/*^block*/id _dismissRequestHandler;
	MusicEntityValueContext* _entityValueContext;
	/*^block*/id _selectionHandler;

}

@property (nonatomic,copy,readonly) NSArray * contextualActions;                          //@synthesize contextualActions=_contextualActions - In the implementation block
@property (nonatomic,copy) id dismissRequestHandler;                                      //@synthesize dismissRequestHandler=_dismissRequestHandler - In the implementation block
@property (nonatomic,readonly) MusicEntityValueContext * entityValueContext;              //@synthesize entityValueContext=_entityValueContext - In the implementation block
@property (nonatomic,copy) id selectionHandler;                                           //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)_newContentDescriptorForEntityValueContext:(id)arg1 ;
-(void)_updatePreferredContentSizeForced:(char)arg1 ;
-(void)_getEntityValueProvider:(id*)arg1 identifierCollection:(id*)arg2 ;
-(id)_addToLibraryAlertAction;
-(id)_radioAlertAction;
-(id)_shareAlertAction;
-(id)_contentTasteAlertAction;
-(void)_requestDismissalWithDelay:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_actionsWithClass:(Class)arg1 ;
-(void)contextualActionsHeaderLockupViewDidSelectAddToLibraryButton:(id)arg1 ;
-(void)contextualActionsHeaderLockupViewDidSelectLikeButton:(id)arg1 ;
-(void)contextualActionsHeaderLockupViewDidSelectRadioButton:(id)arg1 ;
-(void)contextualActionsHeaderLockupViewDidSelectShareButton:(id)arg1 ;
-(void)contextualActionsHeaderLockupViewWasSelected:(id)arg1 ;
-(id)initWithEntityValueContext:(id)arg1 contextualActions:(id)arg2 ;
-(void)setSelectionHandler:(id)arg1 ;
-(NSArray *)contextualActions;
-(id)dismissRequestHandler;
-(void)setDismissRequestHandler:(id)arg1 ;
-(MusicEntityValueContext *)entityValueContext;
-(id)selectionHandler;
@end
