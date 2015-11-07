/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class ContentStyle, NSMutableArray, NSString, NSObject;

@interface BKStyleManager : NSObject {

	ContentStyle* _style;
	char _autoHyphenation;
	char _justification;
	char _hyphenation;
	char _legibility;
	NSMutableArray* _presets;
	int _index;
	NSString* _language;
	NSString* _languageSuffix;
	NSMutableArray* _fonts;
	char _validatedFonts;
	char _addedPresetFonts;
	NSObject*<OS_dispatch_group> _presetFontsGroup;

}

@property (assign,nonatomic) NSString * font; 
@property (nonatomic,retain) ContentStyle * style;                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) float fontSize; 
@property (assign,nonatomic) float lineHeight; 
@property (assign,nonatomic) char justification;                                         //@synthesize justification=_justification - In the implementation block
@property (assign,nonatomic) char autoHyphenation;                                       //@synthesize autoHyphenation=_autoHyphenation - In the implementation block
@property (assign,nonatomic) char optimizeLegibility;                                    //@synthesize legibility=_legibility - In the implementation block
@property (nonatomic,retain) NSString * language;                                        //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSString * languageSuffix;                                  //@synthesize languageSuffix=_languageSuffix - In the implementation block
@property (assign,nonatomic) char addedPresetFonts;                                      //@synthesize addedPresetFonts=_addedPresetFonts - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_group> presetFontsGroup;              //@synthesize presetFontsGroup=_presetFontsGroup - In the implementation block
+(char)shouldDisableFontFallbacksForLanguage:(id)arg1 ;
+(id)_suffixForLanguage:(id)arg1 ;
+(id)sharedInstance;
+(void)initialize;
-(void)prewarmFontRegistration;
-(void)waitForFontRegistrationToComplete;
-(id)defaultStyleWithOriginalFonts:(char)arg1 ;
-(void)verifySelectedFont;
-(id)overrideTOCFontFamily;
-(void)registerAllFonts;
-(void)increaseFontSize;
-(void)decreaseFontSize;
-(char)optimizeLegibility;
-(void)setOptimizeLegibility:(char)arg1 ;
-(char)canDecreaseFontSize;
-(char)canIncreaseFontSize;
-(void)fontStateChanged:(id)arg1 ;
-(void)_validatePresetFonts;
-(void)storeDefaultStyle:(id)arg1 ;
-(void)notifyStyleChanged;
-(NSString *)languageSuffix;
-(id)_presetsFileNameForLanguageSuffix:(id)arg1 ;
-(id)presets;
-(id)_fontWithDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)presetsForFontName:(id)arg1 ;
-(char)autoHyphenation;
-(id)styleForFont:(id)arg1 presetIndex:(int)arg2 ;
-(void)setLanguageSuffix:(NSString *)arg1 ;
-(void)updateFontsForLanguage:(id)arg1 ;
-(id)defaultFontName;
-(void)setAutoHyphenation:(char)arg1 ;
-(int)indexOfPresetWithSize:(float)arg1 font:(id)arg2 ;
-(id)fontFaceMappings;
-(char)addedPresetFonts;
-(void)setAddedPresetFonts:(char)arg1 ;
-(NSObject*<OS_dispatch_group>)presetFontsGroup;
-(void)setPresetFontsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)setFont:(NSString *)arg1 ;
-(ContentStyle *)style;
-(float)lineHeight;
-(void)setStyle:(ContentStyle *)arg1 ;
-(NSString *)font;
-(void)setLineHeight:(float)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(float)fontSize;
-(void)loadFonts;
-(char)justification;
-(id)fonts;
-(void)setJustification:(char)arg1 ;
@end
