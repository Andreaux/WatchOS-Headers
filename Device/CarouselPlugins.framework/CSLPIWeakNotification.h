//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CSLPIWeakNotification : NSObject
{
    NSString *_name;
    NSMutableArray *_observers;
    NSMutableArray *_observersToNotify;
}

@property(retain, nonatomic) NSMutableArray *observersToNotify; // @synthesize observersToNotify=_observersToNotify;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;

@end

