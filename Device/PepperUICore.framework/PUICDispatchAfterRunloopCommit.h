//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PUICDispatchAfterRunloopCommit : NSObject
{
    CDUnknownBlockType _block;
    struct __CFRunLoopObserver *_runLoopObserver;
}

+ (id)dispatchBlock:(CDUnknownBlockType)arg1;
- (void)_afterRender;
- (void)_schedule;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

