//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PKPaymentOptionGroupItem;

@interface PKPaymentOptionGroupItemCell : UITableViewCell
{
    PKPaymentOptionGroupItem *_optionGroupItem;
}

@property(retain, nonatomic) PKPaymentOptionGroupItem *optionGroupItem; // @synthesize optionGroupItem=_optionGroupItem;
- (void)_updateCellContent;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

