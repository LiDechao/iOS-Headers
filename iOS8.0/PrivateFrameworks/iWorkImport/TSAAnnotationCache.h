//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSAAnnotationCache : TSPObject
{
    NSArray *_annotations;
}

@property(retain) NSArray *annotations; // @synthesize annotations=_annotations;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct AnnotationCacheArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct AnnotationCacheArchive *)arg1 unarchiver:(id)arg2;
- (void)documentWillUnload;
- (void)documentDidLoad;
- (void)dealloc;
- (id)init;

@end

