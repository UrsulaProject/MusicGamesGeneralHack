//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, SKProduct;

@interface StorePackInfo : NSObject
{
    _Bool _isNew;
    int _packID;
    NSString *_artworkURL;
    NSString *_packName;
    NSString *_comment;
    NSString *_s_comment;
    NSString *_copyright;
    NSArray *_musicInfos;
    NSString *_artistURL;
    NSString *_bunnerURL;
    SKProduct *_product;
    NSString *_ErrorMessage;
}

@property(retain, nonatomic) NSString *ErrorMessage; // @synthesize ErrorMessage=_ErrorMessage;
@property(retain, nonatomic) SKProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) NSString *bunnerURL; // @synthesize bunnerURL=_bunnerURL;
@property(retain, nonatomic) NSString *artistURL; // @synthesize artistURL=_artistURL;
@property(retain, nonatomic) NSArray *musicInfos; // @synthesize musicInfos=_musicInfos;
@property(retain, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(retain, nonatomic) NSString *s_comment; // @synthesize s_comment=_s_comment;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *packName; // @synthesize packName=_packName;
@property(retain, nonatomic) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) int packID; // @synthesize packID=_packID;
- (void).cxx_destruct;
- (_Bool)allDownloaded;
- (_Bool)downloadDetailInfo;
- (_Bool)setMusicInfo:(id)arg1;
- (id)priceString;
- (_Bool)setDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPackID:(int)arg1;
- (id)initWithProduct:(id)arg1;

@end
