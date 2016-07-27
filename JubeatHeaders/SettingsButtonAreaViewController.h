//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CADisplayLink, EAGLView, Texture2D, UISlider;

@interface SettingsButtonAreaViewController : UIViewController
{
    unsigned int buttonDown;
    unsigned int buttonUp;
    unsigned int buttonPress;
    unsigned int buttonPressOld;
    _Bool paused;
    UISlider *_slider;
    EAGLView *_glView;
    Texture2D *_texButtons;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) Texture2D *texButtons; // @synthesize texButtons=_texButtons;
@property(retain, nonatomic) EAGLView *glView; // @synthesize glView=_glView;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)appResumed:(id)arg1;
- (void)appSuspended:(id)arg1;
- (void)buttonWidthChanged:(id)arg1;
- (void)loadView;
- (void)loop:(id)arg1;
- (id)init;

@end
