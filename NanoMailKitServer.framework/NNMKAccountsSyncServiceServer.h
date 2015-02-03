//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint
{
    id <NNMKAccountsSyncServiceServerDelegate> _delegate;
}

@property(nonatomic) __weak id <NNMKAccountsSyncServiceServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)sendInitialAccountsSync:(id)arg1;
- (id)deleteAccount:(id)arg1;
- (id)addOrUpdateAccount:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

