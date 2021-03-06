//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMSObfuscatableDescriptionProviding.h"

@class NMSIncomingRequest, NSData, NSDictionary, NSString;

@interface NMSOutgoingResponse : NSObject <NMSObfuscatableDescriptionProviding>
{
    BOOL _sent;
    NMSIncomingRequest *_request;
    NSData *_data;
    unsigned int _priority;
    NSDictionary *_persistentUserInfo;
    NSDictionary *_extraIDSOptions;
    NSString *_idsIdentifier;
    id _pbResponse;
    double _sendTimeout;
}

@property(nonatomic) __weak NMSIncomingRequest *request; // @synthesize request=_request;
@property(getter=isSent) BOOL sent; // @synthesize sent=_sent;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(retain, nonatomic) NSDictionary *extraIDSOptions; // @synthesize extraIDSOptions=_extraIDSOptions;
@property(nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property(retain, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
- (id)CPObfuscatedDescriptionObject;
@property(retain, nonatomic) id pbResponse; // @synthesize pbResponse=_pbResponse;
- (void).cxx_destruct;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
- (void)send;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

