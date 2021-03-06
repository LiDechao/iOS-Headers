//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class EKObjectID, NSArray, NSMutableDictionary;

@interface CADEntityWrapper : NSObject <NSSecureCoding>
{
    void *_entity;
    NSArray *_loadedKeys;
    NSArray *_loadedValues;
    EKObjectID *_objectID;
    NSMutableDictionary *_loadedProperties;
}

+ (BOOL)supportsSecureCoding;
- (id)objectID;
- (id)loadedProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCalEntity:(void *)arg1 propertiesToLoad:(id)arg2;
- (id)initWithCalEntity:(void *)arg1;

@end

