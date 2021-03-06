//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSTStrokeRunArray : NSObject
{
    BOOL mHasCustomStrokes;
    float mMaxWidth;
    unsigned int mCount;
    unsigned int mAllocCount;
    unsigned int mLastLookup;
    struct TSTStrokeRun *mStrokes;
    struct _opaque_pthread_rwlock_t mRWLock;
}

@property(readonly, nonatomic) float maxWidth; // @synthesize maxWidth=mMaxWidth;
- (id).cxx_construct;
- (id)description;
- (void)dealloc;
- (id)initWithCount:(unsigned int)arg1;

@end

