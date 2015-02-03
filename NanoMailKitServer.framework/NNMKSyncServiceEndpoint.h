//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class IDSService, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface NNMKSyncServiceEndpoint : NSObject <IDSServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_serviceQueue;
    IDSService *_idsService;
    NSString *_idsServiceName;
    NSMutableDictionary *_repeatPreventionRecords;
    NSObject<OS_dispatch_source> *_repeatPreventionCleanupTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *repeatPreventionCleanupTimer; // @synthesize repeatPreventionCleanupTimer=_repeatPreventionCleanupTimer;
@property(retain, nonatomic) NSMutableDictionary *repeatPreventionRecords; // @synthesize repeatPreventionRecords=_repeatPreventionRecords;
@property(retain, nonatomic) NSString *idsServiceName; // @synthesize idsServiceName=_idsServiceName;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
- (void).cxx_destruct;
- (void)_removeExpiredRepeatPreventionRecords;
- (void)_storeRepeatPreventionId:(id)arg1 priority:(unsigned long long)arg2;
- (_Bool)_willIdRepeat:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)_sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 shortTimeout:(_Bool)arg4;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 repeatPreventionId:(id)arg4 shortTimeout:(_Bool)arg5;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 shortTimeout:(_Bool)arg4;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)resetRepeatPreventionHistory;
- (void)dealloc;
- (id)initWithIDSServiceName:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

