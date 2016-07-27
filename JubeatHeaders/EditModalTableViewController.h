//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UIPickerViewDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UISlider, UISwitch, UITextView;

@interface EditModalTableViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UIPickerViewDelegate, UIPopoverControllerDelegate, UITextViewDelegate>
{
    UILabel *levelCell;
    UITextView *selectField;
    NSString *editText[3];
    int difficulty;
    int copyFlg;
    UISwitch *copyFlagSwitch;
    UILabel *cntLabel[3];
    UISlider *levelSlider;
    _Bool bUpload;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)levelSliderChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)labelChange:(int)arg1 num:(int)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)isPictText:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)backUpFieldText;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)changeSwitch:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setEditorInfo;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getStringPointer:(int)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initEnableUpload:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
