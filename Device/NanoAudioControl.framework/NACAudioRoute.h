//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NACAudioRoute : NSObject
{
    BOOL _supportsVolumeControl;
    BOOL _picked;
    NSString *_uniqueIdentifier;
    NSString *_routeName;
    int _routeType;
    int _routeSubtype;
}

+ (int)_routeBufferTypeFromMPAVRouteType:(int)arg1;
+ (int)_routeBufferSubtypeFromMPAVRouteSubtype:(int)arg1;
+ (int)_routeBufferTypeFromRouteType:(int)arg1;
+ (id)audioRouteFromBuffer:(id)arg1;
+ (int)_routeSubtypeFromRouteBufferSubtype:(int)arg1;
+ (int)_routeTypeFromRouteBufferType:(int)arg1;
+ (int)_routeTypeFromMPAVRouteType:(int)arg1;
+ (id)audioRoutesFromBuffers:(id)arg1;
+ (id)buffersFromAudioRoutes:(id)arg1;
+ (id)audioRouteWithMPAVRoute:(id)arg1;
- (BOOL)isEqualToAudioRoute:(id)arg1;
@property(readonly, nonatomic) BOOL supportsVolumeControl; // @synthesize supportsVolumeControl=_supportsVolumeControl;
- (void)setSupportsVolumeControl:(BOOL)arg1;
- (id)buffer;
- (id)initWithMPAVRoute:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) int routeType; // @synthesize routeType=_routeType;
@property(readonly, nonatomic) int routeSubtype; // @synthesize routeSubtype=_routeSubtype;
@property(readonly, nonatomic, getter=isPicked) BOOL picked; // @synthesize picked=_picked;
@property(readonly, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;

@end
