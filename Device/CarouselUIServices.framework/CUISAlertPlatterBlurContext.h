//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage, UIView;

@interface CUISAlertPlatterBlurContext : NSObject
{
    BOOL _wantsDynamicBlur;
    UIView *_sourceView;
    UIImage *_staticBlurImage;
    UIImage *_staticBlurSourceImage;
}

@property(retain, nonatomic) UIImage *staticBlurSourceImage; // @synthesize staticBlurSourceImage=_staticBlurSourceImage;
@property(retain, nonatomic) UIImage *staticBlurImage; // @synthesize staticBlurImage=_staticBlurImage;
@property(nonatomic) BOOL wantsDynamicBlur; // @synthesize wantsDynamicBlur=_wantsDynamicBlur;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;

@end
