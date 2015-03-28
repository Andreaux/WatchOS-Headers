//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CSLSConnectionStatusObserver.h"
#import "RadiosPreferencesDelegate.h"

@class NSString, RadiosPreferences, UIImageView;

@interface SPActivatingView : UIView <CSLSConnectionStatusObserver, RadiosPreferencesDelegate>
{
    BOOL _locked;
    BOOL _updating;
    BOOL _loading;
    BOOL _disconnected;
    id <SPActivatingViewDelegate> _delegate;
    RadiosPreferences *_radioPreferences;
    UIView *_lockedView;
    UIView *_loadingView;
    UIView *_disconnectedView;
    UIImageView *_snapshotView;
    UIView *_lastUpdatedView;
}

+ (id)getMessageForView:(id)arg1 below:(id)arg2;
+ (id)getLockedIconForView:(id)arg1;
+ (void)initialize;
- (void)updateDisconnectedStatus;
- (void)endMonitoringDisconnectedStatus;
- (void)startMonitoringDisconnectedStatus;
- (void)connectionStatusDidChange:(unsigned int)arg1 lastConnection:(id)arg2;
- (BOOL)_isSameDay:(id)arg1 otherDay:(id)arg2;
- (BOOL)_isYesterday:(id)arg1;
- (BOOL)_isToday:(id)arg1;
@property(retain, nonatomic) UIView *lastUpdatedView; // @synthesize lastUpdatedView=_lastUpdatedView;
- (id)_timeStampStringForDate:(id)arg1;
- (void)_setupLastUpdatedView;
- (void)_updateSnapshotView;
- (void)_setupSnapshotView;
- (void)_tearDownLoadingView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
- (void)_setupLoadingView;
- (void)_displayLoadingView;
- (void)_updateLastUpdatedView;
- (BOOL)_isAirplaneModeEnabled;
- (void)_setupDisconnectedView;
@property(retain, nonatomic) UIView *disconnectedView; // @synthesize disconnectedView=_disconnectedView;
- (void)_displayLastUpdatedView;
- (void)_displaySnapshotView;
@property(nonatomic, getter=isDisconnected) BOOL disconnected; // @synthesize disconnected=_disconnected;
- (void)_removeFromSuperviewIfNecessary;
@property(retain, nonatomic) UIView *lockedView; // @synthesize lockedView=_lockedView;
- (void)_sizeAndAddToParentView;
- (void)_updateVisibilityOfSubviews;
- (void)_setupLockedView;
- (void)_tearDownLockedView;
- (void)_displayLockedView;
- (void)_tearDownLastUpdatedView;
- (void)_teardownSnapshotView;
- (void)_tearDownDisconnectedView;
- (void)_displayDisconnectedView;
@property(retain, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic, getter=isUpdating) BOOL updating; // @synthesize updating=_updating;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
- (void)airplaneModeChanged;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property(nonatomic) __weak id <SPActivatingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
