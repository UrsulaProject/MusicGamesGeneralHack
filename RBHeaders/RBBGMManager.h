//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RBBGMManager : NSObject
{
    _Bool m_IsMusic;
    _Bool m_IsPushMusic;
}

+ (id)getInstance;
- (_Bool)isPushMusic;
- (_Bool)popMusic;
- (_Bool)pushMusic;
- (_Bool)LoadMusicWithPush:(id)arg1 Loop:(_Bool)arg2;
- (void)LoadMusic:(id)arg1 Loop:(_Bool)arg2;
- (void)LoadMusicResultWithLoop:(_Bool)arg1;
- (void)LoadMusicTitleWithLoop:(_Bool)arg1;
- (void)LoadMusicSelect;
- (void)LoadMusicType:(int)arg1 Loop:(_Bool)arg2;
- (void)SeekToTop;
- (void)StopMusic:(float)arg1;
- (void)PauseMusic:(float)arg1;
- (_Bool)PlayMusic:(float)arg1;
- (void)RelaseMusic;
- (id)init;

@end
