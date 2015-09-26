#define PLIST_PATH @"/var/mobile/Library/Preferences/naville.musicgeneralhack.plist"
float SCOREMULTIPLIER;
float CXBClearRate;
BOOL CXBFULLCOMBO;
int CXBGRADE;
BOOL CXBHACKGRADE;
BOOL CXBHACKCLEAR;
int CXBNoteJudge;
BOOL CXBHACKJUDGE;
BOOL UNLOCKCHALLESUCCESS;
BOOL CXBTENSION;
BOOL CXBLE;
%hook iapIOSHelper
-(BOOL)chkCrackIAPTran:(id)tran{
return false;
}
-(void)verificationControllerDidVerifyPurchase:(id)verificationController isValid:(BOOL)valid{
UIAlertView *theAlert = [[UIAlertView alloc] initWithTitle:@"Hack Activated" message:@"Hacked By Naville\n " delegate:self cancelButtonTitle:nil otherButtonTitles:@"了解", nil];
[theAlert show];
[theAlert release];
valid = true;
%orig(verificationController,valid);
}
%end
%hook RRTransactionVerifier
-(BOOL)validateTrust:(void*)trust error:(id*)error{
return true;
}
-(BOOL)doesTransactionInfoMatchReceipt:(id)receipt error:(id*)error{
return true;
}
-(BOOL)isTransactionIdUnique:(id)unique{
return true;
}
-(BOOL)doTransactionDetailsMatchPurchaseInfo:(id)info{
return true;
}
-(BOOL)isTransactionAndItsReceiptValidWithError:(id*)error{
return true;
}
%end
%hook iOSAppDelegate
-(void)applicationDidBecomeActive:(id)application{
UIAlertView *theAlert = [[UIAlertView alloc] initWithTitle:@"Hack Activated" message:@"Hacked By Naville\n " delegate:self cancelButtonTitle:nil otherButtonTitles:@"了解", nil];
[theAlert show];
[theAlert release];
SCOREMULTIPLIER = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kMulti"]floatValue];
CXBFULLCOMBO = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kCXBFULLCOMBO"]boolValue];
CXBGRADE = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kCXBGRADE"]intValue];
CXBHACKGRADE = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kCXBHACKGRADE"]boolValue];
CXBHACKCLEAR = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kCXBHACKCLEAR"]boolValue];
CXBClearRate = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kCXBClearRate"]floatValue];
CXBNoteJudge = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kCXBNote"]intValue];
CXBHACKJUDGE = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kCXBHACKJUDGE"]intValue];
UNLOCKCHALLESUCCESS = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kUCSUCCESS"]boolValue];
CXBTENSION = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kTENSION"]boolValue];
CXBLE = [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH]valueForKey:@"kCXBLE"]boolValue];
return %orig;
}
%end

int (*old_ingameretry)(void * self,int amount);
int (*old_useticket)(void * self,int amount);
int (*old_unlockgauge)(void * self,int amount);
int (*old_setunlockgauge)(void * self,int amount);
int (*old_normalticket)(void * self,int amount);
int (*old_score)(void * self,int amount);
int (*old_linkenergy)(void * self,int amount);

bool (*old_fullcombo)(void * self);
bool (*old_ucsuccess)(void * self,int A,int B);
float (*old_clearRate)(void * self);
int (*old_grade)(void * self);
int (*old_judge)(void * self,int A,int B,bool C,void * D,BOOL E);
float (*old_settension)(void * self,float A);
int (*old_uc2)(void * self,int A,void * B,bool C);
BOOL (*old_isclearmission)(void * self,int B);
BOOL (*old_isclearmission2)(void * self,int B);

int uc2(void * self,int A,void * B,bool C){
old_uc2(self,30000,B,true);
return 30000;
}
float settension(void * self,void * E,void *F,float A){
if(CXBTENSION==true){
old_settension(self,100);
return 100;
}
else{
return old_settension(self,A);
}
}


int judge(void * self,int A,int B,bool C,void * D,BOOL E){
if(CXBHACKJUDGE==true){
old_judge(self,CXBNoteJudge,CXBNoteJudge,C,D,E);
return CXBNoteJudge;
}
else{
old_judge(self,A,B,C,D,E);
return old_judge(self,A,B,C,D,E);
}
}

bool fullcombo(void * self){

if(CXBFULLCOMBO==true){
old_fullcombo(self);
return true;
}
else{
return old_fullcombo(self);
}
}

int grade(void * self){
if(CXBHACKGRADE==true){
old_grade(self);
return CXBGRADE;
}
else{
return old_grade(self);
}
}
float clearRate(void * self){
if(CXBHACKCLEAR==true){
old_clearRate(self);
return CXBClearRate;
}
else{
return old_clearRate(self);
}
}


int ingameretry(void * self,int amount){
old_ingameretry(self,amount);
return 0;
}

int useticket(void * self,int amount){
old_useticket(self,amount);
return -10;
}

int unlockgauge(void * self,int amount){
old_unlockgauge(self,9999);
return 9999;
}
int setunlockgauge(void * self,int amount){
old_setunlockgauge(self,9999);
return 9999;
}
int normalticket(void * self,int amount){
old_normalticket(self,99);
return 99;
}
int score(void * self,int amount){
old_score(self,amount * SCOREMULTIPLIER);
return amount * SCOREMULTIPLIER;
}

int linkenergy(void * self,int amount){
if(CXBLE==true){
old_linkenergy(self,0);
return 0;
}
else{
return old_linkenergy(self,amount);
}
}
bool ucsuccess(void * self,int A,int B){
if(UNLOCKCHALLESUCCESS==true){
old_ucsuccess(self,A,B);
return true;
}
else{
return old_ucsuccess(self,A,B);
}
}



BOOL isclearmission(void * self,int B){
old_isclearmission(self,B);
return true;
}
BOOL isclearmission2(void * self,int B){
old_isclearmission2(self,B);
return true;
}
__attribute__((constructor))
void Init()
{
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN5sGame21calcTicketIngameRetryEi")),(void*)ingameretry, (void**)&old_ingameretry);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZNK10sMusicInfo13getUseTicketsERKN10nMusicInfo6M_CODEEj")),(void*)useticket, (void**)&old_useticket);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN5sGame14addUnlockGaugeEi")),(void*)unlockgauge, (void**)&old_unlockgauge);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN5sGame14setUnlockGaugeEi")),(void*)setunlockgauge, (void**)&old_setunlockgauge);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN9sUserInfo9setTicketEi_AAAAAAA")),(void*)normalticket, (void**)&old_normalticket);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN6sScore8addScoreEi_AAAAAAAAA")),(void*)score, (void**)&old_score);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN10sMusicInfo16getUseLinkEnergyEi")),(void*)linkenergy, (void**)&old_linkenergy);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZNK6sScore11isFullComboEv")),(void*)fullcombo, (void**)&old_fullcombo);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZNK6sScore14getGradeResultEv")),(void*)grade, (void**)&old_grade);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZNK6sScore12getClearRateEv")),(void*)clearRate, (void**)&old_clearRate);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN6cJudge12judgeSuccessEjjbN5nNote9NOTE_TYPEEb")),(void*)judge, (void**)&old_judge);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN6sScore29checkUnlockChallengeSucceededEii_BBBBBBB")),(void*)ucsuccess, (void**)&old_ucsuccess);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN6sScore10setTensionEf")),(void*)settension, (void**)&old_settension);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN5sGame13addUnlockInfoEiPKcb")),(void*)uc2, (void**)&old_uc2);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN8sMission14isClearMissionEi")),(void*)isclearmission, (void**)&old_isclearmission);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN8sMission17checkClearMissionEi")),(void*)isclearmission2, (void**)&old_isclearmission2);

}

/*


*/