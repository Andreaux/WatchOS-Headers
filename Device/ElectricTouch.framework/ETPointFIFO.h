//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ETPointFIFO : NSObject
{
    ETPointFIFO *_nextFIFO;
}

-     // Error parsing type: v16@0:4^8L12, name: emitPoints:count:
-     // Error parsing type: v16@0:4^8L12, name: addPoints:count:
@property(retain, nonatomic) ETPointFIFO *nextFIFO; // @synthesize nextFIFO=_nextFIFO;
- (void).cxx_destruct;
- (id)initWithFIFO:(id)arg1;
- (void)clear;
- (void)flush;

@end
