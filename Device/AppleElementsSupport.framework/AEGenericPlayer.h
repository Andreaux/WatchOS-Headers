//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AEGenericPlayer : NSObject
{
    unsigned char _readBuffer[4096];
    unsigned long _readOffset;
    struct __IOHIDUserDevice *_platinumDeviceRef;
    BOOL _isPlaying;
    double _playbackSpeed;
    BOOL _timeArchiveNeeded;
    double _timestampOfArchive;
    double _secondsInArchive;
    unsigned int _platinumScanRate;
    unsigned int _platinumFrameCounter;
    unsigned short _platinumSyntheticFrameNumber;
    BOOL _isPlatinum;
    BOOL _synthesizeFrameNumbers;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_resultQueue;
    NSObject<OS_dispatch_source> *_playbackTimer;
    id <AEGenericPlayerDelegate> _delegate;
    NSMutableArray *_reports;
}

@property(retain) NSObject<OS_dispatch_queue> *resultQueue; // @synthesize resultQueue=_resultQueue;
- (void)playbackTimerHandler;
@property(retain) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain) NSMutableArray *reports; // @synthesize reports=_reports;
@property(retain) NSObject<OS_dispatch_source> *playbackTimer; // @synthesize playbackTimer=_playbackTimer;
@property(retain) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property BOOL synthesizeFrameNumbers; // @synthesize synthesizeFrameNumbers=_synthesizeFrameNumbers;
- (void)enqueueReport:(id)arg1 withTimestampInNanoseconds:(unsigned long long)arg2;
- (void)loadVirtualDeviceWithProperties:(id)arg1;
@property unsigned int platinumScanRate;
- (id)initWithFile:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)_performTimeArchive;
- (void)_parseBuffer;
- (void)_readIntoBuffer;
- (long)parseToken:(char *)arg1 ofLength:(unsigned long)arg2;
- (void)_reportFailureToDelegate;
- (void)pause;
- (void).cxx_destruct;
@property __weak id <AEGenericPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
@property double playbackSpeed;
- (void)play;

@end

