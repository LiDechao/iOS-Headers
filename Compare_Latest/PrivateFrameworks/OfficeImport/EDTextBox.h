//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDAlignmentInfo, EDProtection, EDString;

__attribute__((visibility("hidden")))
@interface EDTextBox : NSObject
{
    EDString *mText;
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
}

+ (id)textBox;
- (void)setProtection:(id)arg1;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (id)alignmentInfo;
- (void)setText:(id)arg1;
- (id)text;
- (void)dealloc;

@end

