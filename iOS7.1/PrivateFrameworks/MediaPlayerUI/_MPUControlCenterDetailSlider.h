//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIControlCenterSlider.h"

#import "MPDetailedScrubbing.h"
#import "_MPUSliderScrubForwarding.h"

@class MPDetailScrubController;

@interface _MPUControlCenterDetailSlider : SBUIControlCenterSlider <MPDetailedScrubbing, _MPUSliderScrubForwarding>
{
    MPDetailScrubController *_scrubController;
}

@property(nonatomic) __weak MPDetailScrubController *scrubController; // @synthesize scrubController=_scrubController;
- (void).cxx_destruct;
- (struct CGRect)thumbViewRect;
- (struct CGRect)thumbHitRect;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

@end

