#import <substrate.h>
//Old Func Pointers
static BOOL (*old_Available)(void* thisobject,unsigned int index);
static BOOL (*old_isOwnerShip)(void* thisobject,void*B);
static BOOL (*old_unlockState)(void* A,void*B);
static BOOL (*old_isCostOK)(void*A,BOOL B);
static BOOL (*old_isError)(void*A);
static int (*old_retry)(void* A,int B);

//Replaced Funcs
static BOOL new_Available(void* thisobject,unsigned int index){

	return YES;
}

static BOOL new_isOwnerShip(void* thisobject,void*B){
	return YES;
}
static BOOL new_unlockState(void* A,void*B){
	return YES;
}
static BOOL new_isCostOK(void* A,BOOL B){
	return YES;
}
static BOOL new_isError(void* A){

	return NO;
}
static int new_retry(void* A,int B){

	return 0;
}
void init_CxB_hook(){
	/*
__ZN10sTicketUse11startunlockEi
__ZN10sEventData22getEventMusicAddTicketERKN10nMusicInfo6M_CODEEi
__ZN14MusicItemLayer17SetPurchasedMusicEb
__ZN9MainScene12SetPurchasedEb

	*/
	NSLog(@"MUGKit--CrossBeats");
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN9sUserInfo16isAvailableThemeEj")),(void*)new_Available, (void**)&old_Available);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN9sUserInfo18isAvailableBgmSkinEj")),(void*)new_Available, (void**)&old_Available);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN9sUserInfo19isAvailableMenuSkinEj")),(void*)new_Available, (void**)&old_Available);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN9sUserInfo21isAvailableIngameSkinEj")),(void*)new_Available, (void**)&old_Available);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN9sUserInfo15isAvailableSkinEjj")),(void*)new_Available, (void**)&old_Available);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN9sUserInfo14getIsOwnershipEN10nMusicInfo6M_CODEE")),(void*)new_isOwnerShip, (void**)&old_isOwnerShip);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN9sUserInfo14getUnlockStateEN10nMusicInfo6M_CODEEj")),(void*)new_unlockState, (void**)&old_unlockState);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN10sTicketUse8isCostOkEb")),(void*)new_isCostOK, (void**)&old_isCostOK);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN10sTicketUse8isCostOkEi")),(void*)new_isCostOK, (void**)&old_isCostOK);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN10sTicketUse7isErrorEv")),(void*)new_isError, (void**)&old_isError);
MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN5sGame21calcTicketIngameRetryEi")),(void*)new_retry, (void**)&old_retry);
}














