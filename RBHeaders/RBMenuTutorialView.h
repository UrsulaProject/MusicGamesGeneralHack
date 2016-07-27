//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, NSMutableArray, NSString, RBMenuView, RBTutorialPastelLayer, UIImage, UIImageView, UIView;

@interface RBMenuTutorialView : UIControl <UIGestureRecognizerDelegate>
{
    _Bool _animating;
    _Bool _clipTargetForTouch;
    unsigned int _tutorialStatus;
    float _contentViewWidth;
    float _contentViewHeight;
    RBMenuView *_musicMenuView;
    UIImageView *_baseView;
    UIView *_fullCoverView;
    UIView *_clipRootView;
    UIView *_clipTargetView;
    UIImageView *_cursorView;
    UIImageView *_touchView;
    CALayer *_grayTL;
    CALayer *_grayTR;
    CALayer *_grayBL;
    CALayer *_grayBR;
    CALayer *_grayCTL;
    CALayer *_grayCTR;
    CALayer *_grayCBL;
    CALayer *_grayCBR;
    UIView *_contentView;
    NSString *_showLayerTag;
    NSString *_deleteLayerTag;
    CALayer *_messageWindowLayer;
    CALayer *_messageLayer;
    RBTutorialPastelLayer *_pastelLayer;
    UIImage *_messageImage;
    NSMutableArray *_messageClipRect;
    struct CGRect _clipRect;
}

+ (id)createAnimWithKeyPath:(id)arg1 fromValue:(struct CGPoint)arg2 toValue:(struct CGPoint)arg3 delay:(double)arg4 duration:(double)arg5;
@property(nonatomic) float contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(nonatomic) float contentViewWidth; // @synthesize contentViewWidth=_contentViewWidth;
@property(nonatomic) unsigned int tutorialStatus; // @synthesize tutorialStatus=_tutorialStatus;
@property(retain, nonatomic) NSMutableArray *messageClipRect; // @synthesize messageClipRect=_messageClipRect;
@property(retain, nonatomic) UIImage *messageImage; // @synthesize messageImage=_messageImage;
@property(nonatomic) __weak RBTutorialPastelLayer *pastelLayer; // @synthesize pastelLayer=_pastelLayer;
@property(nonatomic) __weak CALayer *messageLayer; // @synthesize messageLayer=_messageLayer;
@property(nonatomic) __weak CALayer *messageWindowLayer; // @synthesize messageWindowLayer=_messageWindowLayer;
@property(retain, nonatomic) NSString *deleteLayerTag; // @synthesize deleteLayerTag=_deleteLayerTag;
@property(retain, nonatomic) NSString *showLayerTag; // @synthesize showLayerTag=_showLayerTag;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak CALayer *grayCBR; // @synthesize grayCBR=_grayCBR;
@property(nonatomic) __weak CALayer *grayCBL; // @synthesize grayCBL=_grayCBL;
@property(nonatomic) __weak CALayer *grayCTR; // @synthesize grayCTR=_grayCTR;
@property(nonatomic) __weak CALayer *grayCTL; // @synthesize grayCTL=_grayCTL;
@property(nonatomic) __weak CALayer *grayBR; // @synthesize grayBR=_grayBR;
@property(nonatomic) __weak CALayer *grayBL; // @synthesize grayBL=_grayBL;
@property(nonatomic) __weak CALayer *grayTR; // @synthesize grayTR=_grayTR;
@property(nonatomic) __weak CALayer *grayTL; // @synthesize grayTL=_grayTL;
@property(retain, nonatomic) UIImageView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) UIImageView *cursorView; // @synthesize cursorView=_cursorView;
@property(nonatomic) struct CGRect clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) _Bool clipTargetForTouch; // @synthesize clipTargetForTouch=_clipTargetForTouch;
@property(nonatomic) __weak UIView *clipTargetView; // @synthesize clipTargetView=_clipTargetView;
@property(nonatomic) __weak UIView *clipRootView; // @synthesize clipRootView=_clipRootView;
@property(retain, nonatomic) UIView *fullCoverView; // @synthesize fullCoverView=_fullCoverView;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIImageView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) __weak RBMenuView *musicMenuView; // @synthesize musicMenuView=_musicMenuView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (struct CGRect)getClipRect:(unsigned int)arg1;
- (unsigned int)getTextureType;
- (void)resetAnimation:(struct CGRect)arg1;
- (void)startAnimation:(struct CGRect)arg1;
- (void)animationDelete:(id)arg1;
- (void)stopTouchAnimation:(id)arg1;
- (void)startTouchAnimation:(id)arg1;
- (void)stopCursorAnimation:(id)arg1;
- (void)startCursorAnimation:(id)arg1;
- (void)contentViewSettingWithTouchAnim:(_Bool)arg1 cursorAnim:(_Bool)arg2 stay:(_Bool)arg3 useAnimation:(_Bool)arg4;
- (void)didRotate;
- (void)willRotate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutBackground:(id)arg1 withAnimation:(_Bool)arg2;
- (void)setClipRect;
- (void)startTutorialWithType:(unsigned int)arg1 withRootView:(id)arg2;
- (void)startTutorialWithType:(unsigned int)arg1 withAnimation:(_Bool)arg2;
- (void)tap:(id)arg1;
- (void)hideAnimation;
- (void)showAnimationWithTutorialType:(unsigned int)arg1 withRootView:(id)arg2;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
