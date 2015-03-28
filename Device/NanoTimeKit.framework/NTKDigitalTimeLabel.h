//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NTKColoringView.h"
#import "NTKLabel.h"
#import "NTKTimeFormatterDelegate.h"
#import "NTKTimeFormatterObserver.h"
#import "NTKTimeView.h"

@class NSAttributedString, NSString, NTKDigitalTimeLabelStyle, NTKTimeFormatter, PUICClientSideAnimation, UIColor, UIFont, UIView<_TimeLabel>;

@interface NTKDigitalTimeLabel : UIView <NTKTimeFormatterObserver, NTKTimeFormatterDelegate, NTKTimeView, NTKColoringView, NTKLabel>
{
    unsigned int _options;
    UIView<_TimeLabel> *_label;
    BOOL _styleTransitioning;
    float _styleTransitionFraction;
    NTKDigitalTimeLabelStyle *_fromStyle;
    UIView<_TimeLabel> *_fromLabel;
    float _fadeStart;
    float _fadeEnd;
    PUICClientSideAnimation *_animation;
    NSString *_timeText;
    BOOL _colorIsAnimatable;
    BOOL _paused;
    UIColor *_color;
    NTKTimeFormatter *_timeFormatter;
    float _maxWidth;
    CDUnknownBlockType _didResizeHandler;
    NTKDigitalTimeLabelStyle *_style;
}

+ (id)labelWithOptions:(unsigned int)arg1;
@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
@property(copy, nonatomic) CDUnknownBlockType didResizeHandler; // @synthesize didResizeHandler=_didResizeHandler;
- (struct CGSize)styleTransitionCurrentSize;
- (struct CGSize)styleTransitionEndSize;
- (void)prepareToTransitionToStyle:(id)arg1;
- (void)_fadeTransitionLabels;
- (void)_scaleTransitionLabels;
- (void)setStyleTransitionFraction:(float)arg1;
- (void)cleanupAfterStyleTransition;
- (void)setThreeDigitFont:(id)arg1 fourDigitFont:(id)arg2 designatorFont:(id)arg3;
- (id)_fontWithCenteredColons:(id)arg1;
- (void)_resizeIfNecessary;
- (void)_cancelAnimation;
- (id)_newLabel;
@property(nonatomic) BOOL colorIsAnimatable; // @synthesize colorIsAnimatable=_colorIsAnimatable;
- (id)identifyingInfoForTimeFormatter:(id)arg1;
- (void)timeFormatterTextDidChange:(id)arg1;
- (void)setTimeFont:(id)arg1 designatorFont:(id)arg2;
- (void)animateToStyle:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 additionalAnimation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setBlinkingPause:(BOOL)arg1;
- (void)setFrameUsingCurrentStyle;
- (id)initWithOptions:(unsigned int)arg1;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) UIColor *contentColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int options; // @synthesize options=_options;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) float _lastLineBaseline;
@property(nonatomic) int textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NTKDigitalTimeLabelStyle *style; // @synthesize style=_style;
- (void)setTimeOffset:(double)arg1;
- (void)sizeToFit;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) NTKTimeFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
