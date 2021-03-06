//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMediaTimingFunction, UIColor;

@interface NTKColorCurveElement : NSObject
{
    UIColor *_color;
    float _fraction;
    int _curve;
    CAMediaTimingFunction *_timingFunction;
}

+ (id)defaultEndElement;
+ (id)defaultStartElement;
@property(nonatomic) float fraction; // @synthesize fraction=_fraction;
- (id)initWithColor:(id)arg1 fraction:(float)arg2 curve:(int)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) int curve; // @synthesize curve=_curve;

@end

