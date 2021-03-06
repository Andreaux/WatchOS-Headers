//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion, NSString, NSTimer;

@interface NMCTaskAssertion : NSObject
{
    NSString *_name;
    BOOL _acquired;
    NSTimer *_invalidationTimer;
    BKSProcessAssertion *_processAssertion;
}

- (void)invalidateAfterDelay:(double)arg1;
- (void)_cancelInvalidationTimer;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)dealloc;

@end

