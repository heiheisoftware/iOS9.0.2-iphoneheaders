/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBIconStateUnarchiveContext <NSObject>
@required
-(void)_noteEnteredNode;
-(void)_noteExitedNode;
-(id)_iconSource;
-(void)_pushFolder:(id)arg1;
-(id)_currentFolder;
-(id)_popFolder;
-(int)_currentParseDepth;
-(void)_noteRepresentationIsCorrupted;
-(void)_noteSignificantDeviation;
-(char)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
-(void)_noteNodeIdentifierWasUnarchived:(id)arg1;

@end
