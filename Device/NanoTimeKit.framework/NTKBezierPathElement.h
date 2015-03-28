//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTKBezierPathElement : NSObject
{
    int _type;
    unsigned int _pointCount;
    struct CGPoint *_points;
    float _length;
}

@property(nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property(nonatomic) struct CGPoint *points; // @synthesize points=_points;
- (struct CGPoint)pointOnPathForX:(float)arg1;
- (float)computeLength;
- (unsigned int)numberOfPointsForCGPathElementType:(int)arg1;
- (id)initWithStartPoint:(struct CGPoint)arg1 pathElement:(const struct CGPathElement *)arg2;
@property(readonly, nonatomic) struct CGPoint endPoint;
@property(nonatomic) float length; // @synthesize length=_length;
@property(readonly, nonatomic) struct CGPoint startPoint;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end
