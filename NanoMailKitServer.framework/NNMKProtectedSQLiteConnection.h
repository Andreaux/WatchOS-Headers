//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoMailKitServer/NNMKSQLiteConnection.h>

@class NSString;

@interface NNMKProtectedSQLiteConnection : NNMKSQLiteConnection
{
    _Bool _protectedDatabaseAttached;
    NSString *_protectedDatabasePath;
    NSString *_protectedDatabaseName;
}

@property(retain, nonatomic) NSString *protectedDatabaseName; // @synthesize protectedDatabaseName=_protectedDatabaseName;
@property(retain, nonatomic) NSString *protectedDatabasePath; // @synthesize protectedDatabasePath=_protectedDatabasePath;
@property(readonly, nonatomic) _Bool protectedDatabaseAttached; // @synthesize protectedDatabaseAttached=_protectedDatabaseAttached;
- (void).cxx_destruct;
- (id)_vfsModuleName;
- (void)dettachProtectedDatabase;
- (void)attachProtectedDatabase;
- (id)initWithUnprotectedDatabaseFileName:(id)arg1 protectedDatabaseFileName:(id)arg2 inDirectory:(id)arg3 protectedDatabaseName:(id)arg4;

@end

