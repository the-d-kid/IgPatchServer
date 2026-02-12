#define _Game_Unknown0_Address -1

#define _Game_CSystem_IntializeEngineModule_Address 0x0434150 //100%
#define _Game_CryCreateClassInstance_Address 0x04333B0 //100%
#define _Game_CBinaryXmlNode_getAttr_Address 0x0496DD0 //95%
#define _Game_CreateSystemInterface_Address 0x042D2F0 //100%

#define _Game_ForceCryAISystemInitialization_Condition true

//IScriptSystem
#define _Game_IScriptSystem_BeginPreCachedBuffer_Vtable_Offset 232
#define _Game_IScriptSystem_PreCacheBuffer_Vtable_Offset 228
#define _Game_IScriptSystem_CompileBuffer_Vtable_Offset 224

//IEntitySystem
#define _Game_IEntitySystem_AddSink_Vtable_Offset 96
#define _Game_IEntitySystem_RemoveSink_Vtable_Offset 100
#define _Game_IEntitySystem_GetIEntityPoolManager_Vtable_Offset 144
#define _Game_IEntitySystem_GetEntityIterator_Vtable_Offset 72
#define _Game_IEntitySystem_GetEntityFromPhysics_Vtable_Offset 92

//ICryPak
#define _Game_ICryPak_FindFirst_Vtable_Offset 220
#define _Game_ICryPak_FindNext_Vtable_Offset 224
#define _Game_ICryPak_FindClose_Vtable_Offset 228
#define _Game_ICryPak_FClose_Vtable_Offset 188

//ITimeOfDay
#define _Game_ITimeOfDay_GetTime_Vtable_Offset 28

//IXmlNode
#define _Game_IXmlNode_getAttr_Vtable_Offset 104//Default

//SSystemGlobalEnvironment
#define _Game_SSystemGlobalEnvironment_p3DEngine_Offset_Offset 4
#define _Game_SSystemGlobalEnvironment_pScriptSystem_Offset_Offset 12
#define _Game_SSystemGlobalEnvironment_pPhysicalWorld_Offset_Offset 16
#define _Game_SSystemGlobalEnvironment_pCryPak_Offset_Offset 40
#define _Game_SSystemGlobalEnvironment_pTimer_Offset_Offset 60
#define _Game_SSystemGlobalEnvironment_pGame_Offset_Offset 68
#define _Game_SSystemGlobalEnvironment_pEntitySystem_Offset_Offset 76
#define _Game_SSystemGlobalEnvironment_pConsole_Offset_Offset 80
#define _Game_SSystemGlobalEnvironment_pSystem_Offset_Offset 88
#define _Game_SSystemGlobalEnvironment_pLog_Offset_Offset 100
#define _Game_SSystemGlobalEnvironment_pAISystem_Offset_Offset 96
#define _Game_gEnv 0x15B42C0

#define _Game_PathOther_EnableReadInDirectory_Address 0x15D2104 //100%

#define _Game_PatchDamage_Address 0x1005342 //95%
#define _Game_SGameHitInfo_SGameHitInfo_Address 0x0EF9C80
#define _Game_CGameRules_GetClientHitInfoDamage_Address 0x0EAA380
#define _Game_CGameRules_AddServerHit_Address 0x0EB2750

#define _Game_CGameRules_ProcessServerHit_Address 0x0EB1F60
#define _Game_CGameRules_GetActorByEntityId_Address 0x0DA3770
#define _Game_CActor_GetHealth_Vtable_Offset 96
#define _Game_CGameRules_m_scriptHitInfo_Vtable_Offset 292
#define _Game_CGameRules_CreateScriptHitInfo_Address 0x0DA8580
#define _Game_CGameRules_m_serverStateScript_Vtable_Offset 72
#define _Game_CGameRules_CGameRules_CallScript_Address 0x0EA9DB0

#define _Game_IConsole_AddCommand_Vtable_Offset 124
#define _Game_IConsoleCmdArgs_GetArg_Vtable_Offset 8
#define _Game_IGame_GetIGameFramework_Vtable_Offset 56
#define _Game_IGameFramework_GetIActorSystem_Vtable_Offset 100
#define _Game_IActorSystem_CreateActorIterator_Vtable_Offset 28
#define _Game_IActorIterator_Next_Vtable_Offset 8
#define _Game_IActor_GetChannelId0_Vtable_Offset 4
#define _Game_IActor_GetChannelId1_Vtable_Offset 52
#define _Game_IGameFramework_GetNetChannel_Vtable_Offset 308
#define _Game_INetChannel_GetProfileId_Vtable_Offset 164
#define _Game_INetChannel_Disconnect_Vtable_Offset 40
#define _Game_IActorIterator_Release_Vtable_Offset 16