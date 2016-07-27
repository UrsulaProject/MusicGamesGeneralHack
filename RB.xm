#import <substrate.h>
#import <objc/runtime.h>
#import <CommonCrypto/CommonCrypto.h>
extern NSString * DocumentsDirectory ();
extern NSString * LibraryDirectory ();
@interface BFCodec : NSObject
{

}

- (void)dealloc;
- (BOOL)decipher:(id)arg1;
- (unsigned int)encipher:(id)arg1;
- (void)cipherInit:(id)arg1;
- (void)cipherInit:(const char *)arg1 keyLength:(int)arg2;
- (id)init;
@end
static void SaveMulist(NSString* OutFileName,NSString* InputFileName){
NSString* SavePath=[DocumentsDirectory() stringByAppendingString:OutFileName];
NSString* musicListKey=[objc_getClass("AppDelegate") performSelector:@selector(musicListKey)];
NSMutableData* data=[NSMutableData dataWithBytes:"\x41\x53\x48\x55" length:4];
    BFCodec* BFC=[[objc_getClass("BFCodec") alloc] init];
    InputFileName=[DocumentsDirectory() stringByAppendingString:InputFileName];
NSLog(@"InputFileName:%@",InputFileName);
NSData* YoSwag=[NSData dataWithContentsOfFile:InputFileName];
    [data appendData:YoSwag];
NSLog(@"Prefixed Data Size:%lu",(unsigned long)data.length);
    [YoSwag release];
const char* MK=[musicListKey UTF8String];
int r5 = strlen(MK);
    CC_MD5_CTX md5;
CC_MD5_Init(&md5);
CC_MD5_Update(&md5,MK,r5);
unsigned char digest[CC_MD5_DIGEST_LENGTH];
CC_MD5_Final(digest, &md5);
NSData* s=[NSData dataWithBytes:digest length:0x10];
NSLog(@"Actual BFCodec Key:%@",s);
    [BFC cipherInit:s];
    [BFC encipher:data];
    [data writeToFile:SavePath atomically:YES];
    [data release];
    [SavePath release];
    [s release];
    [BFC release];
}
static void DecryptMulist(NSString* InputFileName){
NSString* SavePath=[DocumentsDirectory() stringByAppendingString:InputFileName];
NSString* musicListKey=[objc_getClass("AppDelegate") performSelector:@selector(musicListKey)];
NSMutableData* olddata=[NSMutableData dataWithContentsOfFile:SavePath];
    BFCodec* BFC=[[objc_getClass("BFCodec") alloc] init];
const char* MK=[musicListKey UTF8String];
int r5 = strlen(MK);
    CC_MD5_CTX md5;
CC_MD5_Init(&md5);
CC_MD5_Update(&md5,MK,r5);
unsigned char digest[CC_MD5_DIGEST_LENGTH];
CC_MD5_Final(digest, &md5);
NSData* s=[NSData dataWithBytes:digest length:0x10];
    [BFC cipherInit:s];
    [BFC decipher:olddata];
NSMutableData* data=[NSMutableData dataWithData:[olddata subdataWithRange:NSMakeRange(4,olddata.length-4)]];
NSLog(@"Decrypted:\n%@",data);
    [data release];
    [s release];
    [olddata release];
    [BFC release];
}




%group RB
%hook AppDelegate
+ (id)musicListKey{

    return @"SaitoAsukaWatanabeMayuOkadaNanaIriyamaAnna";
}
%end
%hook  RBPurchaseManager
- (_Bool)isPurchased:(id)arg1{
    return YES;
}
%end
%hook SaitoAsukaWatanabeMayuOkadaNanaIriyamaAnna
- (_Bool)unlockWithType:(int)arg1 ID:(int)arg2{
    return YES;
}
- (_Bool)unlockWithThemaID:(int)arg1{
    return YES;
}
- (_Bool)unlockWithMusicID:(int)arg1{
    return YES;
}
- (_Bool)unlockWithBackgroundType:(int)arg1{
    return YES;
}
- (_Bool)unlockWithFrameType:(int)arg1{
    return YES;
}
- (_Bool)unlockWithExprosionType:(int)arg1{
    return YES;
}
- (_Bool)unlockWithShotType:(int)arg1{
    return YES;
}
- (_Bool)unlockWithBGMtype:(int)arg1{
    return YES;
}
- (float)getPoint{

    return 99999.0;
}
%end
%end

void init_RB_hook(){
NSLog(@"MUGKit--ReflecBeat");
%init(RB);
SaveMulist(@"MulistAsuka",@"Input.plist");
DecryptMulist(@"MulistAsuka");


}



