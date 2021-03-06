//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSUReadChannel.h"

@class NSError, NSObject<OS_dispatch_data>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

__attribute__((visibility("hidden")))
@interface TSUBufferedReadChannel : NSObject <TSUReadChannel>
{
    NSObject<OS_dispatch_semaphore> *_readSemaphore;
    id <TSUReadChannel> _sourceReadChannel;
    unsigned long _sourceReadBufferSize;
    NSObject<OS_dispatch_queue> *_sourceReadQueue;
    long long _sourceOffset;
    NSError *_sourceReadChannelError;
    CDUnknownBlockType _streamReadChannelBlock;
    id <TSUStreamReadChannel> _streamReadChannel;
    NSObject<OS_dispatch_queue> *_streamReadChannelSourceQueue;
    CDUnknownBlockType _streamReadChannelSourceHandler;
    NSObject<OS_dispatch_queue> *_streamReadChannelOutputQueue;
    BOOL _isStreamOutputDone;
    long long _streamOutputOffset;
    unsigned long _streamOutputLength;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
}

- (void).cxx_destruct;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long)arg1;
- (id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long)arg2 isReadDone:(char *)arg3;
- (void)_readFromOffset:(long long)arg1 length:(unsigned long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)readFromOffset:(long long)arg1 length:(unsigned long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)setStreamReadChannelSourceQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_resetStreamReadChannel;
- (void)_closeStreamReadChannel;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long)arg2 streamReadChannelBlock:(CDUnknownBlockType)arg3;
- (id)initWithReadChannel:(id)arg1 streamReadChannelBlock:(CDUnknownBlockType)arg2;

@end

