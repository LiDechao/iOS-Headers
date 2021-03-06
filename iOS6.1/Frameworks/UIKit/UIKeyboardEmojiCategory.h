/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface UIKeyboardEmojiCategory : NSObject
{
    int _type;
    NSArray *_emoji;
    int _lastVisibleFirstEmojiIndex;
}

+ (id)localizedStringForKey:(id)arg1;
+ (id)categoryForType:(int)arg1;
+ (id)getGlyphForRecents:(id)arg1;
+ (id)emojiRecentsFromPreferences;
+ (id)categories;
+ (int)numberOfCategories;
@property(nonatomic) int lastVisibleFirstEmojiIndex; // @synthesize lastVisibleFirstEmojiIndex=_lastVisibleFirstEmojiIndex;
@property(retain) NSArray *emoji; // @synthesize emoji=_emoji;
@property int categoryType; // @synthesize categoryType=_type;
- (id)description;
@property(readonly) NSString *displayDescription;
@property(readonly) NSString *displaySymbol;
@property(readonly) NSString *displayName;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (void)releaseCategories;

@end

