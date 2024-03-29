//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YTCoreSchemePlayerView;

@interface YTCorePlayerView : UIView
{
    YTCoreSchemePlayerView *mSchemePlayerView;
    unsigned long long mVideoGravity;
    struct CGSize mSizeScaleOne;
    float mScale;
}

@property(nonatomic) float scale; // @synthesize scale=mScale;
@property(nonatomic) unsigned long long gravity; // @synthesize gravity=mVideoGravity;
- (void)resizeSchemePlayerViewWithRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)showAirplayLogo:(_Bool)arg1 device:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) YTCoreSchemePlayerView *schemePlayerView; // @dynamic schemePlayerView;
@property(readonly, nonatomic) struct CGRect playerViewRect;
- (void)enableRender;
- (void)disableRender;
- (void)doInit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

