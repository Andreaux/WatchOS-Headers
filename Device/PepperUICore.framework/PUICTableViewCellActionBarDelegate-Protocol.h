//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PUICTableViewCellActionBar, PUICTableViewRowAction;

@protocol PUICTableViewCellActionBarDelegate <NSObject>
- (unsigned int)nextStateForActionBar:(PUICTableViewCellActionBar *)arg1;
- (void)actionBar:(PUICTableViewCellActionBar *)arg1 tappedButtonForAction:(PUICTableViewRowAction *)arg2;
- (NSArray *)actionsForActionBar:(PUICTableViewCellActionBar *)arg1;
@end

