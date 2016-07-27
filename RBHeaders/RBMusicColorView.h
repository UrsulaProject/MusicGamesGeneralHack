//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, RBMusicColorBar, RBMusicView, UIButton, UIImageView;

@interface RBMusicColorView : UIView
{
    int _color;
    float _rivalAlpha;
    float _layoutOffset;
    RBMusicView *_musicSelectedBase;
    NSMutableArray *_buttons;
    NSMutableArray *_buttonImages;
    NSMutableArray *_selectedImages;
    NSMutableArray *_youImages;
    NSMutableArray *_rivalImages;
    NSMutableArray *_alphaChangeImages;
    RBMusicColorBar *_colorBar;
    UIButton *_toAlphaButton;
    UIButton *_toColorButton;
    UIImageView *_firstInfo;
}

@property(nonatomic) float layoutOffset; // @synthesize layoutOffset=_layoutOffset;
@property(retain, nonatomic) UIImageView *firstInfo; // @synthesize firstInfo=_firstInfo;
@property(retain, nonatomic) UIButton *toColorButton; // @synthesize toColorButton=_toColorButton;
@property(retain, nonatomic) UIButton *toAlphaButton; // @synthesize toAlphaButton=_toAlphaButton;
@property(retain, nonatomic) RBMusicColorBar *colorBar; // @synthesize colorBar=_colorBar;
@property(retain, nonatomic) NSMutableArray *alphaChangeImages; // @synthesize alphaChangeImages=_alphaChangeImages;
@property(retain, nonatomic) NSMutableArray *rivalImages; // @synthesize rivalImages=_rivalImages;
@property(retain, nonatomic) NSMutableArray *youImages; // @synthesize youImages=_youImages;
@property(retain, nonatomic) NSMutableArray *selectedImages; // @synthesize selectedImages=_selectedImages;
@property(retain, nonatomic) NSMutableArray *buttonImages; // @synthesize buttonImages=_buttonImages;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) float rivalAlpha; // @synthesize rivalAlpha=_rivalAlpha;
@property(nonatomic) int color; // @synthesize color=_color;
@property(nonatomic) __weak RBMusicView *musicSelectedBase; // @synthesize musicSelectedBase=_musicSelectedBase;
- (void).cxx_destruct;
- (void)SelectButton:(id)arg1;
- (void)selectColorButton:(id)arg1;
- (void)selectAlphaButton:(id)arg1;
- (void)ShowSelect;
- (void)SetupView;
- (id)initWithFrame:(struct CGRect)arg1 MusicSelectedBase:(id)arg2;

@end
