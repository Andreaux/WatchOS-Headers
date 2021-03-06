//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, PUICButton, UIColor;

@interface PUICSideBySideButtons : UIView
{
    PUICButton *_leftButton;
    PUICButton *_rightButton;
    _Bool _shouldCalculateFontSize;
    _Bool _primaryButtonEnabled;
    NSString *_leftTitle;
    NSString *_rightTitle;
    CDUnknownBlockType _leftActionBlock;
    CDUnknownBlockType _rightActionBlock;
    long long _style;
    UIColor *_primaryColor;
    double _primaryColorPlatterAlpha;
}

+ (void)_setupSideBySideButtonsSpec;
+ (id)sideBySideButtons;
@property(nonatomic, getter=isPrimaryButtonEnabled) _Bool primaryButtonEnabled; // @synthesize primaryButtonEnabled=_primaryButtonEnabled;
@property(nonatomic) double primaryColorPlatterAlpha; // @synthesize primaryColorPlatterAlpha=_primaryColorPlatterAlpha;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType rightActionBlock; // @synthesize rightActionBlock=_rightActionBlock;
@property(copy, nonatomic) CDUnknownBlockType leftActionBlock; // @synthesize leftActionBlock=_leftActionBlock;
@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
- (void).cxx_destruct;
- (double)_fontSizeFittingLeftLabel:(id)arg1 rightLabel:(id)arg2 inSize:(struct CGSize)arg3;
- (id)_primaryAppColor;
- (id)_defaultBackgroundColor;
- (id)_defaultTextColor;
- (void)_buttonAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

