//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString, SPProtoCacheSyncData;

@interface SPProtoCacheMessage : PBCodable <NSCopying>
{
    NSData *_assetData;
    NSString *_assetKey;
    int _cacheType;
    NSString *_gizmoCacheIdentifier;
    int _messageType;
    SPProtoCacheSyncData *_syncData;
}

@property(retain, nonatomic) SPProtoCacheSyncData *syncData; // @synthesize syncData=_syncData;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSString *gizmoCacheIdentifier; // @synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier;
@property(nonatomic) int cacheType; // @synthesize cacheType=_cacheType;
@property(readonly, nonatomic) BOOL hasSyncData;
@property(readonly, nonatomic) BOOL hasAssetData;
@property(readonly, nonatomic) BOOL hasGizmoCacheIdentifier;
@property(readonly, nonatomic) BOOL hasAssetKey;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;

@end

