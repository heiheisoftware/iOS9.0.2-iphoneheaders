/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AEAssetViewController <NSObject>
@property (nonatomic,readonly) id<AEAsset> asset; 
@property (assign,nonatomic) id<AEAssetViewControllerDelegate> assetViewControllerDelegate; 
@property (nonatomic,retain) id<AEAssetOpenAnimating> contentOpenAnimator; 
@optional
-(void)assetViewControllerDidCloseAnimated:(char)arg1;
-(void)assetViewControllerDidOpenAnimated:(char)arg1;
-(void)assetViewControllerPrepareForClose;
-(char)allowsFullScreen;
-(char)opensAsync;
-(id)assetType;

@required
-(void)setAssetViewControllerDelegate:(id)arg1;
-(void)openToLocation:(id)arg1 animated:(char)arg2;
-(void)setContentOpenAnimator:(id)arg1;
-(id<AEAssetViewControllerDelegate>)assetViewControllerDelegate;
-(id<AEAssetOpenAnimating>)contentOpenAnimator;
-(void)open:(char)arg1;
-(void)saveState;
-(id<AEAsset>)asset;
-(void)close:(char)arg1;

@end
