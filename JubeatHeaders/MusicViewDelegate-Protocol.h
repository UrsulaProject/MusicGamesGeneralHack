//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MusicView;

@protocol MusicViewDelegate <NSObject>
- (void)musicViewSelectBgmAction:(MusicView *)arg1;
- (void)musicViewPlaylistAction:(MusicView *)arg1;
- (void)musicViewPressed:(MusicView *)arg1;
- (void)musicViewTapped:(MusicView *)arg1;
- (unsigned long long)musicViewGetPlaylistActionType:(MusicView *)arg1;
@end
