/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class PKPhysicsField, SKRegion, SKTexture;

@interface SKFieldNode : SKNode {

	PKPhysicsField* _field;
	SKRegion* _region;
	float _smoothness;
	float _animationSpeed;
	SKTexture* _texture;
	char _exclusive;

}

@property (nonatomic,retain) SKRegion * region; 
@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (assign,getter=isExclusive,nonatomic) char exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) float smoothness; 
@property (assign,nonatomic) float animationSpeed; 
@property (nonatomic,retain) SKTexture * texture; 
+(id)velocityFieldWithTexture:(id)arg1 ;
+(id)dragField;
+(id)vortexField;
+(id)linearGravityFieldWithVector:;
+(id)velocityFieldWithVector:;
+(id)noiseFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2 ;
+(id)turbulenceFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2 ;
+(id)springField;
+(id)electricField;
+(id)magneticField;
+(id)radialGravityField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
-(char)isEqualToNode:(id)arg1 ;
-(id)_descriptionClassName;
-(id)initWithCoder:(id)arg1 field:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:;
-()direction;
-(void)setRegion:(SKRegion *)arg1 ;
-(SKRegion *)region;
-(float)strength;
-(void)setStrength:(float)arg1 ;
-(id)field;
-(void)setSmoothness:(float)arg1 ;
-(void)setAnimationSpeed:(float)arg1 ;
-(unsigned)categoryBitMask;
-(void)setFalloff:(float)arg1 ;
-(float)falloff;
-(void)setMinimumRadius:(float)arg1 ;
-(float)minimumRadius;
-(float)smoothness;
-(float)animationSpeed;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setPhysicsField:(id)arg1 ;
-(void)setExclusive:(char)arg1 ;
-(char)isExclusive;
-(SKTexture *)texture;
-(void)setTexture:(SKTexture *)arg1 ;
@end

