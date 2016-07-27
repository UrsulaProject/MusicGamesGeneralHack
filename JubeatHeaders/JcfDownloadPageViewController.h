//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class EditorIDManager, JcfDownloadView, NSString, NSURLRequest, UIActivityIndicatorView, UIAlertView, UIView, UIWebView, jubeatLabAccess;

@interface JcfDownloadPageViewController : UIViewController <UIWebViewDelegate>
{
    UIActivityIndicatorView *indicatorView;
    NSURLRequest *requestURL;
    unsigned int sequenceID;
    _Bool bSuccess;
    id delegate;
    UIWebView *downloadPage;
    JcfDownloadView *downloadView;
    UIView *topcover;
    _Bool bDownloading;
    NSURLRequest *nextUrlRequest;
    jubeatLabAccess *sessionDownloader;
    UIAlertView *sessionAlert;
    UIAlertView *webAlert;
    EditorIDManager *eidMan;
    _Bool bEnableSocialFrameWork;
    NSString *socialString;
    _Bool bOpenTwitter;
    _Bool bURLStart;
    _Bool _bFromNavigate;
    _Bool _bCloseStoreMove;
}

@property(nonatomic) _Bool bCloseStoreMove; // @synthesize bCloseStoreMove=_bCloseStoreMove;
@property(nonatomic) _Bool bFromNavigate; // @synthesize bFromNavigate=_bFromNavigate;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)appSuspended:(id)arg1;
- (void)sendFaceBook;
- (void)sendTwitter;
- (void)socialSend:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)errorIDDownload:(id)arg1 msgStr:(id)arg2;
- (void)successIDDownload:(id)arg1;
- (void)jubeatLabAccessFinished:(id)arg1;
- (void)jubeatLabAccessError:(id)arg1;
- (void)jubeatLabAccessProceed:(id)arg1;
- (void)sessionCreate;
- (void)openStartPage;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)jcfDownloadMoveStore:(id)arg1 packID:(id)arg2;
- (void)jcfDownloadEnd:(id)arg1;
- (void)removeDownloadView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)pushClose:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (id)initWithSequenceID:(id)arg1 delegate:(id)arg2;
- (id)initWithMusicID:(unsigned int)arg1 delegate:(id)arg2;
- (void)initPageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
