#ifdef __cplusplus
extern "C" {
#endif
extern HSteamPipe cppISteamClient_SteamClient010_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient010_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient010_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient010_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient010_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient010_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient010_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient010_SetLocalIPBinding(void *, uint32, uint16);
extern void *cppISteamClient_SteamClient010_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient010_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient010_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient010_GetISteamMasterServerUpdater(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient010_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient010_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient010_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient010_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient010_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient010_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient010_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient010_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient010_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient010_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamClient_SteamClient010_BShutdownIfAllPipesClosed(void *);
extern void *cppISteamClient_SteamClient010_GetISteamHTTP(void *, HSteamUser, HSteamPipe, const char *);
#ifdef __cplusplus
}
#endif
