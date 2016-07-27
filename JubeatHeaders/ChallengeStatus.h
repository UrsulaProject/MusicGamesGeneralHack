//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface ChallengeStatus : NSObject
{
    double coinRestTime;
    NSMutableDictionary *lineupImage;
    _Bool scratchRefresh;
    _Bool _bInitialized;
    int _coinLim;
    int _coinNum;
    int _nailNum;
    int _jCubeNum;
    int _presentNum;
    int _consumePlayCoin;
    int _consumeScratchCube;
    int _consumeRestCube;
    float _phoneScreenRate;
    NSString *_myName;
    NSString *_mySearchID;
    NSNumber *_scratchID;
    NSDate *_serverDate;
    NSDate *_clientDate;
    NSDate *_coinRestDate;
    NSDate *_scratchResetDate;
    NSArray *_scratchLineUp;
    NSArray *_scratchInfoTable;
    NSString *_sessionSeed;
    NSString *_howtoURL;
    NSString *_informationURL;
    NSString *_personalInfoURL;
    double _serverTimeDelay;
}

+ (id)sharedStatus;
@property(nonatomic) double serverTimeDelay; // @synthesize serverTimeDelay=_serverTimeDelay;
@property(readonly, nonatomic) NSString *personalInfoURL; // @synthesize personalInfoURL=_personalInfoURL;
@property(retain, nonatomic) NSString *informationURL; // @synthesize informationURL=_informationURL;
@property(retain, nonatomic) NSString *howtoURL; // @synthesize howtoURL=_howtoURL;
@property(readonly, nonatomic) float phoneScreenRate; // @synthesize phoneScreenRate=_phoneScreenRate;
@property(nonatomic) int consumeRestCube; // @synthesize consumeRestCube=_consumeRestCube;
@property(nonatomic) int consumeScratchCube; // @synthesize consumeScratchCube=_consumeScratchCube;
@property(nonatomic) int consumePlayCoin; // @synthesize consumePlayCoin=_consumePlayCoin;
@property(nonatomic) int presentNum; // @synthesize presentNum=_presentNum;
@property(readonly, nonatomic) _Bool bInitialized; // @synthesize bInitialized=_bInitialized;
@property(nonatomic) int jCubeNum; // @synthesize jCubeNum=_jCubeNum;
@property(nonatomic) int nailNum; // @synthesize nailNum=_nailNum;
@property(nonatomic) int coinNum; // @synthesize coinNum=_coinNum;
@property(nonatomic) int coinLim; // @synthesize coinLim=_coinLim;
@property(retain, nonatomic) NSString *sessionSeed; // @synthesize sessionSeed=_sessionSeed;
@property(retain, nonatomic) NSArray *scratchInfoTable; // @synthesize scratchInfoTable=_scratchInfoTable;
@property(retain, nonatomic) NSArray *scratchLineUp; // @synthesize scratchLineUp=_scratchLineUp;
@property(retain, nonatomic) NSDate *scratchResetDate; // @synthesize scratchResetDate=_scratchResetDate;
@property(retain, nonatomic) NSDate *coinRestDate; // @synthesize coinRestDate=_coinRestDate;
@property(retain, nonatomic) NSDate *clientDate; // @synthesize clientDate=_clientDate;
@property(retain, nonatomic) NSDate *serverDate; // @synthesize serverDate=_serverDate;
@property(readonly, nonatomic) NSNumber *scratchID; // @synthesize scratchID=_scratchID;
@property(retain, nonatomic) NSString *mySearchID; // @synthesize mySearchID=_mySearchID;
@property(retain, nonatomic) NSString *myName; // @synthesize myName=_myName;
- (void).cxx_destruct;
- (void)createCoinNotification;
- (int)scratchablePanelNum;
- (void)clearLineupImage;
- (id)getLineupImage:(id)arg1;
- (void)setLineupImage:(id)arg1 musicID:(id)arg2;
- (id)getMusicEnableTimeString:(int)arg1;
- (double)getMusicEnableTime:(int)arg1;
- (double)getTimeLeft:(id)arg1;
- (id)timeStringFromInterval:(double)arg1;
- (id)timeStringFromInterval_Minute:(double)arg1;
- (void)updateMusicRanking:(int)arg1 diff:(int)arg2 rank:(int)arg3 index:(int)arg4;
- (void)receivePresent:(id)arg1;
- (void)playMusic:(id)arg1;
- (void)openMusicDetail:(id)arg1 index:(int)arg2;
- (void)cubePurchaseSuccess:(id)arg1;
- (void)changeScratchNail:(id)arg1;
- (void)restPlayCoin:(id)arg1;
- (void)openScratch:(id)arg1 index:(int)arg2;
- (void)exchangeNail:(id)arg1;
- (void)restCoinNum;
- (void)updateNailState:(id)arg1;
- (void)updateCoinState:(id)arg1;
- (void)updateCubeState:(id)arg1;
- (void)updateServerTime:(id)arg1;
- (void)updateScratchTimeState:(id)arg1;
- (void)updateUserInfo:(id)arg1;
- (void)updateScratchLineup:(id)arg1;
- (void)updateScratchTable:(id)arg1;
- (void)updateScratchItemDir;
- (void)savePersionalInformationURL;
- (void)updatePersonalInformationURL:(id)arg1;
- (void)saveInformationURL;
- (void)updateInformationURL:(id)arg1;
- (void)updateHowtoURL:(id)arg1;
- (void)updateScratchID:(id)arg1;
- (void)updatePresentNum:(id)arg1;
- (void)setScratchItem:(int)arg1 dict:(id)arg2;
- (void)updateName:(id)arg1;
- (void)updateConsume:(id)arg1;
- (void)updateState:(id)arg1;
- (void)initWithDictionary:(id)arg1;
- (id)init;

@end
