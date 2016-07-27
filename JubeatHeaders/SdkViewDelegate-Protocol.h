//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ApplilinkParameters, NSError;

@protocol SdkViewDelegate <NSObject>

@optional
- (void)appStoreTransitionNoticeWithAppParam:(ApplilinkParameters *)arg1;
- (void)appStoreFailLoadNoticeWithError:(NSError *)arg1 appParam:(ApplilinkParameters *)arg2;
- (void)appStoreClosedNoticeWithAppParam:(ApplilinkParameters *)arg1;
- (void)appStoreCloseNoticeWithAppParam:(ApplilinkParameters *)arg1;
- (void)appStoreOpenedNoticeWithAppParam:(ApplilinkParameters *)arg1;
- (void)openCancelWithError:(NSError *)arg1;
- (void)failLinkNoticeWithError:(NSError *)arg1;
- (void)failOpenNoticeWithError:(NSError *)arg1;
- (void)closeNotice;
- (void)openedNotice;
- (void)startedNotice;
@end
