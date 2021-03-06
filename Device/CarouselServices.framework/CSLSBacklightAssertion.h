//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@interface CSLSBacklightAssertion : NSObject
{
    _Bool _willPreventDim;
    _Bool _willPreventScreenOff;
    _Bool _willPreventGestures;
    NSString *_reason;
    NSString *_display;
    CDUnknownBlockType _timeoutBlock;
    NSUUID *_uuid;
    double _timeoutSeconds;
}

- (void)tickle;
- (id)initWithReason:(id)arg1 forDisplay:(id)arg2 willPreventDim:(_Bool)arg3 willPreventScreenOff:(_Bool)arg4 willPreventGestures:(_Bool)arg5 timeoutSeconds:(double)arg6 timeoutBlock:(CDUnknownBlockType)arg7;
@property(readonly, nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
- (id)initWithReason:(id)arg1 forDisplay:(id)arg2 willPreventDim:(_Bool)arg3 willPrevenScreenOff:(_Bool)arg4 timeoutSeconds:(double)arg5 timeoutBlock:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) CDUnknownBlockType timeoutBlock; // @synthesize timeoutBlock=_timeoutBlock;
@property(readonly, nonatomic) _Bool willPreventGestures; // @synthesize willPreventGestures=_willPreventGestures;
@property(readonly, nonatomic) _Bool willPreventScreenOff; // @synthesize willPreventScreenOff=_willPreventScreenOff;
@property(readonly, nonatomic) _Bool willPreventDim; // @synthesize willPreventDim=_willPreventDim;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *display; // @synthesize display=_display;
- (id)init;
- (void)dealloc;

@end

