//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPComplicationDataSubscriber : NSObject
{
    CDUnknownBlockType _handler;
    long long _requestedDataInterval;
}

@property(nonatomic) long long requestedDataInterval; // @synthesize requestedDataInterval=_requestedDataInterval;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)initWithHandler:(CDUnknownBlockType)arg1 requestedDataInterval:(long long)arg2;
- (id)init;

@end

