#import <substrate.h>

// Old Func Pointers
static bool (*old_Available)(void *thisobject, unsigned int index);
static bool (*old_isOwnerShip)(void *thisobject, void *B);
static bool (*old_unlockState)(void *A, void *B);
static bool (*old_isCostOK)(void *A, bool B);
static bool (*old_isError)(void *A);
static int (*old_retry)(void *A, int B);

namespace sUserInfo {
    static const char *isAvailableTheme = "__ZN9sUserInfo16isAvailableThemeEj";
    static const char *isAvailableBgmSkin = "__ZN9sUserInfo18isAvailableBgmSkinEj";
    static const char *isAvailableMenuSkin = "__ZN9sUserInfo19isAvailableMenuSkinEj";
    static const char *isAvailableIngameSkin = "__ZN9sUserInfo21isAvailableIngameSkinEj";
    static const char *isAvailableSkin = "__ZN9sUserInfo15isAvailableSkinEjj";
    static const char *getIsOwnership = "__ZN9sUserInfo14getIsOwnershipEN10nMusicInfo6M_CODEE";
    static const char *getUnlockState = "__ZN9sUserInfo14getUnlockStateEN10nMusicInfo6M_CODEEj";
}

namespace sTicketUse {
    static const char *isCostOk_bool = "__ZN10sTicketUse8isCostOkEb";
    static const char *isCostOk_int = "__ZN10sTicketUse8isCostOkEi";
    static const char *isTicketError = "__ZN10sTicketUse7isErrorEv";
}

namespace sGame {
    static const char *calcTicketIngameRetry = "__ZN5sGame21calcTicketIngameRetryEi";
}

// Replaced Funcs
static bool new_Available(void *thisobject, unsigned int index) {
    return true;
}

static bool new_isOwnerShip(void *thisobject, void *B) {
    return true;
}

static bool new_unlockState(void *A, void *B) {
    return true;
}

static bool new_isCostOK(void *A, bool B) {
    return true;
}

static bool new_isError(void *A) {
    return false;
}

static int new_retry(void *A, int B) {
    return 0;
}

void init_CxB_hook() {
    // sTicketUse::startunlock(int)
    //   __ZN10sTicketUse11startunlockEi
    // sEventData::getEventMusicAddTicket(nMusicInfo::M_CODE const&, int)
    //   __ZN10sEventData22getEventMusicAddTicketERKN10nMusicInfo6M_CODEEi
    // MusicItemLayer::SetPurchasedMusic(bool)
    //   __ZN14MusicItemLayer17SetPurchasedMusicEb
    // MainScene::SetPurchased(bool)
    //   __ZN9MainScene12SetPurchasedEb

    NSLog(@"MUGKit--CrossBeats");
    MSHookFunction(((void *)MSFindSymbol(NULL, sUserInfo::isAvailableTheme)),
                   (void *)new_Available,
                   (void **)&old_Available);
    MSHookFunction(((void *)MSFindSymbol(NULL, sUserInfo::isAvailableBgmSkin)),
                   (void *)new_Available,
                   (void **)&old_Available);
    MSHookFunction(((void *)MSFindSymbol(NULL, sUserInfo::isAvailableMenuSkin)),
                   (void *)new_Available,
                   (void **)&old_Available);
    MSHookFunction(((void *)MSFindSymbol(NULL, sUserInfo::isAvailableIngameSkin)),
                   (void *)new_Available,
                   (void **)&old_Available);
    MSHookFunction(((void *)MSFindSymbol(NULL, sUserInfo::isAvailableSkin)),
                   (void *)new_Available,
                   (void **)&old_Available);
    MSHookFunction(((void *)MSFindSymbol(NULL, sUserInfo::getIsOwnership)),
                   (void *)new_isOwnerShip,
                   (void **)&old_isOwnerShip);
    MSHookFunction(((void *)MSFindSymbol(NULL, sUserInfo::getUnlockState)),
                   (void *)new_unlockState,
                   (void **)&old_unlockState);
    MSHookFunction(
        ((void *)MSFindSymbol(NULL, sTicketUse::isCostOk_bool)), (void *)new_isCostOK, (void **)&old_isCostOK);
    MSHookFunction(
        ((void *)MSFindSymbol(NULL, sTicketUse::isCostOk_int)), (void *)new_isCostOK, (void **)&old_isCostOK);
    MSHookFunction(
        ((void *)MSFindSymbol(NULL, sTicketUse::isTicketError)), (void *)new_isError, (void **)&old_isError);
    MSHookFunction(
        ((void *)MSFindSymbol(NULL, sGame::calcTicketIngameRetry)), (void *)new_retry, (void **)&old_retry);
}
