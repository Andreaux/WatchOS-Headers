//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PUICActivityIndicatorViewDelegate.h"

@class NSString, PUICActivityIndicatorView, PUICStatusImageView, UIImageView, UILabel;

@interface CUISActivatingView : UIView <PUICActivityIndicatorViewDelegate>
{
    UIImageView *_activateImageView;
    PUICActivityIndicatorView *_indicatorView;
    UILabel *_loadingView;
    UILabel *_appNameView;
    _Bool _activityIndicatorEnabled;
    _Bool _ignoreLayoutRequests;
    PUICStatusImageView *_statusImageView;
    NSString *_appName;
}

- (void)beginActivatingAnimationsWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool activityIndicatorEnabled; // @synthesize activityIndicatorEnabled=_activityIndicatorEnabled;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void)activityIndicatorViewDidAnimateIn:(id)arg1;
@property(readonly, nonatomic) PUICActivityIndicatorView *indicatorView;
@property(nonatomic) _Bool ignoreLayoutRequests; // @synthesize ignoreLayoutRequests=_ignoreLayoutRequests;
@property(retain, nonatomic) PUICStatusImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
- (float)indicatorBaselineFromTop;
@property(readonly, nonatomic) UILabel *appNameView;
- (void)_destroyAppNameView;
- (void)_createAppNameViewIfNecessary;
- (id)_indicatorView;
- (void)_setIndicatorView:(id)arg1;
@property(retain, nonatomic) UIImageView *activateImageView;
- (void)endActivatingAnimationsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withImageView:(id)arg2 withIndicatorView:(id)arg3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

