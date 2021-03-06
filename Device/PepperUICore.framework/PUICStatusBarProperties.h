//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "PUICApplicationStatusBarProperties.h"

@class NSString, UIColor, UIFont, UIImage, UIView;

@interface PUICStatusBarProperties : NSObject <PUICApplicationStatusBarProperties, NSCopying>
{
    _Bool _titleInteractive;
    _Bool _showNavigationUI;
    _Bool _navUIBackButtonDisabled;
    NSString *_title;
    UIColor *_titleColor;
    UIFont *_titleFont;
    float _titleBaseLine;
    UIView *_titleAccessoryView;
    UIColor *_backgroundColor;
    UIImage *_navigationImage;
}

@property(retain, nonatomic) UIImage *navigationImage; // @synthesize navigationImage=_navigationImage;
@property(nonatomic) _Bool navUIBackButtonDisabled; // @synthesize navUIBackButtonDisabled=_navUIBackButtonDisabled;
@property(retain, nonatomic) UIView *titleAccessoryView; // @synthesize titleAccessoryView=_titleAccessoryView;
@property(nonatomic, getter=isTitleInteractive) _Bool titleInteractive; // @synthesize titleInteractive=_titleInteractive;
@property(nonatomic) float titleBaseLine; // @synthesize titleBaseLine=_titleBaseLine;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) _Bool showNavigationUI; // @synthesize showNavigationUI=_showNavigationUI;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

