//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADBannerViewDelegate.h"
#import "ADInterstitialAdDelegate.h"
#import "_UIViewControllerContentViewEmbedding.h"

@class ADBannerView, ADInterstitialAd, NSString, NSURL, UIViewController;

@interface _ADUIViewControllerAdController : NSObject <_UIViewControllerContentViewEmbedding, ADBannerViewDelegate, ADInterstitialAdDelegate>
{
    UIViewController *_contentViewController;
    BOOL _canDisplayBannerAds;
    BOOL _canOwnSharedBanner;
    BOOL _presentingFullScreenAd;
    NSURL *_bannerServerURL;
    NSString *_bannerAdSection;
    NSString *_bannerAuthUserName;
    NSURL *_interstitialServerURL;
    NSString *_interstitialAdSection;
    NSString *_interstitialAuthUserName;
    int _interstitialPresentationPolicy;
    ADBannerView *_bannerView;
    ADInterstitialAd *_interstitialAd;
}

+ (id)_sharedBannerView;
+ (void)prepareInterstitialAds;
@property(retain, nonatomic) ADInterstitialAd *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
@property(retain, nonatomic) ADBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic, getter=isPresentingFullScreenAd) BOOL presentingFullScreenAd; // @synthesize presentingFullScreenAd=_presentingFullScreenAd;
@property(nonatomic) BOOL canOwnSharedBanner; // @synthesize canOwnSharedBanner=_canOwnSharedBanner;
@property(nonatomic) BOOL canDisplayBannerAds; // @synthesize canDisplayBannerAds=_canDisplayBannerAds;
@property(nonatomic) int interstitialPresentationPolicy; // @synthesize interstitialPresentationPolicy=_interstitialPresentationPolicy;
@property(copy, nonatomic) NSString *interstitialAuthUserName; // @synthesize interstitialAuthUserName=_interstitialAuthUserName;
@property(copy, nonatomic) NSString *interstitialAdSection; // @synthesize interstitialAdSection=_interstitialAdSection;
@property(copy, nonatomic) NSURL *interstitialServerURL; // @synthesize interstitialServerURL=_interstitialServerURL;
@property(copy, nonatomic) NSString *bannerAuthUserName; // @synthesize bannerAuthUserName=_bannerAuthUserName;
@property(copy, nonatomic) NSString *bannerAdSection; // @synthesize bannerAdSection=_bannerAdSection;
@property(copy, nonatomic) NSURL *bannerServerURL; // @synthesize bannerServerURL=_bannerServerURL;
- (void)bannerViewActionDidFinish:(id)arg1;
- (BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
@property(readonly, nonatomic, getter=isDisplayingBannerAd) BOOL displayingBannerAd;
- (void)_layoutContentAndBannerViewAnimated:(BOOL)arg1;
- (void)_hideBannerView;
- (void)_considerTakingBannerView;
- (void)interstitialAdActionDidFinish:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidUnload:(id)arg1;
- (BOOL)_presentInterstitialIfReady;
- (BOOL)requestInterstitialAdPresentation;
- (void)viewControllerViewDidLayoutSubviews:(id)arg1;
- (void)viewController:(id)arg1 viewDidDisappear:(BOOL)arg2;
- (void)viewController:(id)arg1 viewWillAppear:(BOOL)arg2;
- (void)viewController:(id)arg1 viewWillDisappear:(BOOL)arg2;
- (void)viewController:(id)arg1 viewDidAppear:(BOOL)arg2;
- (void)viewControllerViewWillLayoutSubviews:(id)arg1;
@property(readonly, nonatomic) UIViewController *contentViewController;
- (id)initWithContentViewController:(id)arg1;
- (void)dealloc;

@end

