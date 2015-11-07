/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UINavigationController.h>
#import <MobileMail/MFApplicationSceneActor.h>

@class MFMailComposeController, NSString;

@interface ComposeNavigationController : UINavigationController <MFApplicationSceneActor> {

	MFMailComposeController* _composeViewController;

}

@property (assign,nonatomic) id<MFMailComposeViewControllerDelegate> mailComposeDelegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
+(char)hasAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)_mailComposeView;
-(id)_mailComposeController;
-(id)initWithComposition:(id)arg1 mailComposeControllerOptions:(unsigned)arg2 ;
-(void)setNavigationBarButtonItemsVisible:(char)arg1 animated:(char)arg2 ;
-(void)prepareToBeWithdrawnAsActiveSceneActor;
-(void)_setCompositionContext:(id)arg1 ;
-(void)willBecomeActiveSceneActor;
-(id)withdrawlGestureExclusionRects;
-(id)localizedIdentificationString;
-(void)scrollToTopAnimated:(char)arg1 ;
-(CGRect)frameForAttachmentWithIdentifier:(id)arg1 ;
-(void)setInitialTitle:(id)arg1 ;
-(void)serializedPlaceholderForFileName:(id)arg1 fileSize:(int)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)securityScopeForURL:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id<MFMailComposeViewControllerDelegate>)mailComposeDelegate;
-(void)dealloc;
-(id)view;
-(char)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setContentVisible:(char)arg1 ;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(void)setMailComposeDelegate:(id<MFMailComposeViewControllerDelegate>)arg1 ;
-(void)recoverAutosavedMessageWithIdentifier:(id)arg1 ;
-(char)isDirty;
-(int)resolution;
-(id)initWithComposition:(id)arg1 ;
@end
