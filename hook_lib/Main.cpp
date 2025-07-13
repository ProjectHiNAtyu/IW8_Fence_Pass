//><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><//
// [ IW8 ] Force offline mode Fence bypass - 1.57 Edition
//><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><//

//=================================================================//
// 
// [ Credits ]
// 
// Main coding                    : HiNAtyu Studio    ( https://github.com/ProjectHiNAtyu )
// Special support                : Sku-111           ( https://github.com/Sku-111 )
// Very helpful                   : h00dbyair         ( https://pastebin.com/uNWFy651 )
// Basic system and documentation : Project Donetsk   ( https://github.com/ProjectDonetsk/IW8-1.20 )
// arxan Bypass base project      : mallgrab / CWHook ( https://github.com/mallgrab/CWHook )
// arxan Integrity Checks Infos   : momo5502          ( https://momo5502.com/posts/2022-11-17-reverse-engineering-integrity-checks-in-black-ops-3/ )
// Some debugging reference       : iw8-mod           ( https://github.com/xifil/iw8-mod )
// 
//=================================================================//

//=================================================================//
// 
// [ Contact ]
// 
// Creator       : HiNAtyu Studio
// Update date   : 2024/07/06
// YouTube       : https://www.youtube.com/channel/UCmxJAnVPtkStQVKrvAVMZSw
// Twitter 1     : @KonataGIF ( https://x.com/KonataGIF )
// Twitter 2     : @H1NAtyu ( https://twitter.com/H1NAtyu )
// Discord       : hinatapoko ( https://discordapp.com/users/239453096026046464 )
// 
//=================================================================//

//=================================================================//
// 
// [ Promotion ]
// 
// I'd be very happy if you could follow, subscribe, like, or comment on my various SNS accounts.
// If you like my work, I'd be happy if you could sponsor or donate.
// This will help facilitate the development of new features and fixes.
// 
// Ko-fi : https://ko-fi.com/hinatyustudio
// BTC   : 32J66dfWi9dqqWHS2RYR9rFCUNBL88vgUR
// ETH   : 0xaE5D5b3e8E865B2bA676a24eF41d5f4CBD315978
// 
//=================================================================//

//=================================================================//
// 
// [ Project Info ]
// 
// Game title         : Call of Duty : Modern Warfare ( 2019 )
// Game code          : IW8 / CoD16 / MW19 / MW2019 / CoD2019 / CoD:MW
// Game released year : 2019
// Platform           : PC ( BattleNet )
// Build version      : 1.57 / 1.67
// Game mode          : CP / MP ( Co-op / Multiplayer )
// 
//=================================================================//

//=================================================================//
// 
// [ Caution! ]
// 
// * This project was created for research, development and educational purposes.
// * The project administrators are not responsible for any misuse of this project, use at your own risk.
// * There is no warranty or support for the use of this project
// * You must legally own the game in order to run this project, cracked/pirated versions of the game are not supported.
// * This project was created as part of technical verification and educational learning of C++ programming.
// * This project was not created for the purpose of increasing the number of cheaters (users who use cheats), hackers or trolls.
// * This project was created on the premise that it will only work in private spaces (private matches, offline builds, offline modes), not in environments with a large number of unspecified users such as public battles.
// * I, the developer, have only checked the operation of this project in the private space mentioned above, and I use it mainly for personal use, fun and play.
// * The functions performed by this project do not affect the current server (networks with general users).
// * We do not recommend using this project in public places other than the private spaces mentioned above, so please be sure to run it in a private space.
// * If you use this project in an environment other than the recommended environment or for other than the recommended purpose, I, the developer, will not be held responsible for any problems or risks that may occur, or serious measures such as account bans. Please use at your own risk.
// * I, the developer, take no responsibility for any serious actions, such as Call of Duty BAN (account ban), that may occur while using this project. All responsibility lies with the user himself.
// 
// * This project is designed to work with the game "Call of Duty Modern Warfare (IW8 / CoD16 / MW19 / MW2019 / CoD2019 / CoD:MW)".
// * This project is designed to work with the "PC BattleNet version 1.57 build" of the above game.
// * This project is not intended for use with game titles, environments, or platforms other than the above games.
// * If you use this project in an environment other than the recommended environment or for purposes other than the recommended purpose, I, the developer, will not be held responsible in any case, so please use at your own risk.
// 
//=================================================================//

//=================================================================//
// 
// [ Issue ]
// 
// This project does not yet include arxan Bypass.
// I need to port CWHook created by mallgrab to MW19...
// Please understand that this project is only meant to bypass FenceOnline and give you access to the Local Multiplayer frontend.
// For more information about arxan Bypass, please refer to the following:
// 
// mallgrab : CWHook                                              ( https://github.com/mallgrab/CWHook )
// momo5502 : Reverse Engineering Integrity Checks in Black Ops 3 ( https://momo5502.com/posts/2022-11-17-reverse-engineering-integrity-checks-in-black-ops-3/ )
// 
//=================================================================//





// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// en : Header include
// ja : ヘッダー組み込み
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



#include "Main.hpp"
#include <fstream>
#include "common/utils/concurrency.hpp"
#include <regex>
#include "common/utils/string.hpp"



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// en : enum / struct
// ja : 列挙型 / 構造体
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Game title
// ja : ゲームタイトル
//++++++++++++++++++++++++++++++
enum GameTitle
{
	UNKNOWN = 0,

	IW8_167,
	IW8_157,
	IW8_138,
};


//++++++++++++++++++++++++++++++
// en : Game title
// ja : アドレスポインター
//++++++++++++++++++++++++++++++
struct AdrOffsets
{
	uintptr_t DumpBase;

	uintptr_t Live_IsUserSignedInToDemonware;
	uintptr_t dwGetLogOnStatus;
	uintptr_t CL_GetLocalClientSignInState;
	uintptr_t unk_SignInState;
	uintptr_t Live_IsUserSignedInToBnet;
	uintptr_t LUI_CoD_LuaCall_IsUserSignedInToLive;
	uintptr_t LUI_CoD_LuaCall_IsUserSignedInToDemonware;
	uintptr_t Content_DoWeHaveContentPack;
	uintptr_t lua_pushboolean;
	uintptr_t Dvar_RegisterBool;
	uintptr_t Dvar_RegisterBool_call_1;
	uintptr_t Dvar_RegisterBool_call_2;
	uintptr_t GamerProfile_SetDataByName;
	uintptr_t R_EndFrame;
	uintptr_t unk_BNetClass;
	uintptr_t Sys_Microseconds;
	uintptr_t I_irand;
	uintptr_t holdrand;
	uintptr_t GetRandSeed;
	uintptr_t unk_XUIDCheck1;
	uintptr_t s_isContentEnumerationFinished;
	uintptr_t Dvar_FindVarByName;
	uintptr_t LUI_OpenMenu;
	uintptr_t GetUsername;
	uintptr_t LiveStorage_GetActiveStatsSource;
	uintptr_t LiveStorage_StatsInit;
	uintptr_t Live_IsUserSignedIn;
	uintptr_t GamerProfile_IsProfileLoggedIn;
	uintptr_t SEH_StringEd_GetString;
	uintptr_t DB_FindXAssetHeader;
	uintptr_t LuaShared_LuaCall_IsDemoBuild;
	uintptr_t LUI_COD_LuaCall_IsPremiumPlayer;
	uintptr_t LUI_CoD_LuaCall_IsGameModeAllowed;
	uintptr_t LUI_CoD_LuaCall_OfflineDataFetched;
	uintptr_t LUI_COD_LuaCall_IsBattleNetLanOnly;
	uintptr_t LUI_CoD_LuaCall_IsGameModeAvailable;
	uintptr_t LUI_COD_LuaCall_IsPremiumPlayerReady;
	uintptr_t LUI_CoD_LuaCall_IsBattleNetAuthReady;
	uintptr_t LUI_CoD_LuaCall_IsConnectedToGameServer;
	uintptr_t xpartydisband;
	uintptr_t GScr_EndLobby;
	uintptr_t Live_IsInSystemlinkLobby;
	uintptr_t Live_IsSignedIn;
	uintptr_t GamerProfile_LogInProfile;
	uintptr_t LUI_ReportError;
	uintptr_t lua_tolstring;
	uintptr_t dvar_r_hudOutlineVRScopeThermalDarkColorFriend;
	uintptr_t dvar_force_offline_enabled;
	uintptr_t dvar_force_offline_menus;
	uintptr_t Dvar_SetBool_Internal;
	uintptr_t CurrentRegion_IssueFix1;
	uintptr_t CurrentRegion_IssueFix2;
	uintptr_t LoadSavedAchievements;
	uintptr_t controllerStatData;
	uintptr_t Live_GetUserData;
	uintptr_t DB_LoadXFile;
	uintptr_t DDL_Lookup_MoveToNameHash;
	uintptr_t xenonUserData_m_guardedUserData_signinState;
	uintptr_t luaL_loadfile;
	uintptr_t Com_RegisterCommonDvars;
	uintptr_t CL_Mgr_IsControllerActive;
	uintptr_t CL_Mgr_GetClientFromController;
	uintptr_t Com_DDL_LoadAsset;
	uintptr_t LiveStorage_GetPlayerDataBufferForSource;
	uintptr_t LiveStorage_DoWeHaveStatsForSource;
	uintptr_t LiveStorage_BeginGame;
	uintptr_t LiveStorage_ReadStats;
	uintptr_t lua_pushinteger;
	uintptr_t luaL_openlib;
	uintptr_t LUI_LuaCall_LUIGlobalPackage_DebugPrint;
	uintptr_t LUIMethod_LUIGlobalPackage_list;
	uintptr_t unk_EncryptionKey;
	uintptr_t sys_printf;
	uintptr_t luaL_loadbuffer;
	uintptr_t file_fopen;
	uintptr_t file_fclose;
	uintptr_t LuaShared_LuaCall_IsConsoleGame;
	uintptr_t LUI_COD_LuaCall_HasActiveLocalClient;
	uintptr_t LUI_CoD_LuaCall_StatsResetGetState;
	uintptr_t LuaShared_LuaCall_IsDevelopmentBuild;
	uintptr_t Live_IsUserSignedInToLive;
	uintptr_t LUI_CoD_LuaCall_GetBattleNetConnectionState;
	uintptr_t lua_pushnumber;
	uintptr_t s_OnlineServicesFenceData_state;
	uintptr_t Live_OnlineServicesFence_GetState;
	uintptr_t Live_SyncOnlineDataFence_GetState;
	uintptr_t j_LUI_CoD_LuaCall_ShouldBeInOnlineArea;
	uintptr_t LUI_COD_LuaCall_IsBattleNet;
	uintptr_t LUI_CoD_LuaCall_IsLocalPlayAllowed;
	uintptr_t CurrentRegion_IssueFix2_flag;
	uintptr_t unk_PlatformPatch_flag1;
	uintptr_t dwLogOnHSM_base_HSM_IsInState;

	uintptr_t Live_UserSignIn;
	uintptr_t dvar_xblive_loggedin;
	uintptr_t OnlineErrorManager_GetFenceState;
	uintptr_t OnlineErrorManager_IsMpNotAllowed;
	uintptr_t Platform_BeginAuth;
	uintptr_t Live_FakeUserSignIn;
	uintptr_t platformId;
	uintptr_t accountLoggedIn;
	uintptr_t platformConnectionState;

	uintptr_t Load_ScriptFile;
	uintptr_t DB_PatchMem_PushAsset;
	uintptr_t Load_Stream;
	uintptr_t DB_PushStreamPos;
	uintptr_t Load_XString;
	uintptr_t DB_PopStreamPos;
	uintptr_t DB_PatchMem_PopAsset;
	uintptr_t DB_ReadXFile;
	uintptr_t Load_ConstCharArray;
	uintptr_t Load_byteArray;
	uintptr_t varScriptFile;
	uintptr_t varXString;
	uintptr_t varConstChar;
	uintptr_t varbyte;
	uintptr_t AllocLoad_ConstChar;
	uintptr_t AllocLoad_byte;
	uintptr_t g_streamPosGlob_pos;



};


//++++++++++++++++++++++++++++++
// en : detour for hook
// ja : フック用ディトール
//++++++++++++++++++++++++++++++
struct detours
{
	utils::hook::detour Live_IsSignedIn_h;
	utils::hook::detour Live_IsUserSignedInToDemonware_h;
	utils::hook::detour dwGetLogOnStatus_h;
	utils::hook::detour Live_IsUserSignedInToBnet_h;
	utils::hook::detour LUI_CoD_LuaCall_IsUserSignedInToLive_h;
	utils::hook::detour LUI_CoD_LuaCall_IsUserSignedInToDemonware_h;
	utils::hook::detour Content_DoWeHaveContentPack_h;
	utils::hook::detour CL_GetLocalClientSignInState_h;
	utils::hook::detour Dvar_RegisterBool_h;
	utils::hook::detour Dvar_RegisterBool_2_h;
	utils::hook::detour R_EndFrame_h;
	utils::hook::detour DB_FindXAssetHeader_h;
	utils::hook::detour LuaShared_LuaCall_IsDemoBuild_h;
	utils::hook::detour LUI_COD_LuaCall_IsPremiumPlayer_h;
	utils::hook::detour LUI_CoD_LuaCall_IsGameModeAllowed_h;
	utils::hook::detour LUI_CoD_LuaCall_OfflineDataFetched_h;
	utils::hook::detour LUI_COD_LuaCall_IsBattleNetLanOnly_h;
	utils::hook::detour LUI_CoD_LuaCall_IsGameModeAvailable_h;
	utils::hook::detour LUI_COD_LuaCall_IsPremiumPlayerReady_h;
	utils::hook::detour LUI_CoD_LuaCall_IsBattleNetAuthReady_h;
	utils::hook::detour LUI_CoD_LuaCall_IsConnectedToGameServer_h;

	utils::hook::detour LUI_LuaCall_LUIGlobalPackage_DebugPrint_h;
	utils::hook::detour DDL_Lookup_MoveToNameHash_h;
	utils::hook::detour LUI_ReportError_h;
	utils::hook::detour DB_LoadXFile_h;
	utils::hook::detour luaL_loadfile_h;
	utils::hook::detour Com_DDL_LoadAsset_h;
	utils::hook::detour LiveStorage_GetPlayerDataBufferForSource_h;
	utils::hook::detour LiveStorage_BeginGame_h;
	utils::hook::detour LiveStorage_ReadStats_h;
	utils::hook::detour Live_IsUserSignedIn_h;
	utils::hook::detour luaL_openlib_h;
	utils::hook::detour luaL_loadbuffer_h;
	utils::hook::detour LuaShared_LuaCall_IsConsoleGame_h;
	utils::hook::detour LUI_COD_LuaCall_HasActiveLocalClient_h;
	utils::hook::detour LUI_CoD_LuaCall_StatsResetGetState_h;
	utils::hook::detour LuaShared_LuaCall_IsDevelopmentBuild_h;
	utils::hook::detour Live_IsUserSignedInToLive_h;
	utils::hook::detour lua_pushnumber_h;
	utils::hook::detour Live_OnlineServicesFence_GetState_h;
	utils::hook::detour Live_SyncOnlineDataFence_GetState_h;
	utils::hook::detour j_LUI_CoD_LuaCall_ShouldBeInOnlineArea_h;
	utils::hook::detour LUI_COD_LuaCall_IsBattleNet_h;
	utils::hook::detour LiveStorage_GetActiveStatsSource_h;
	utils::hook::detour LUI_CoD_LuaCall_IsLocalPlayAllowed_h;
	utils::hook::detour GetUsername_h;
	utils::hook::detour GamerProfile_IsProfileLoggedIn_h;
	utils::hook::detour Live_IsInSystemlinkLobby_h;
	utils::hook::detour GetThreadContext_h;
	utils::hook::detour Load_ScriptFile_h;
};


//++++++++++++++++++++++++++++++
// en : Locali client number
// ja : ローカルクライアント番号
//++++++++++++++++++++++++++++++
enum LocalClientNum_t
{
	LOCAL_CLIENT_INVALID = 0xFFFFFFFF,
	LOCAL_CLIENT_0 = 0x0,
	LOCAL_CLIENT_1 = 0x1,
	LOCAL_CLIENT_LAST = 0x1,
	LOCAL_CLIENT_COUNT = 0x2,
};


//++++++++++++++++++++++++++++++
// en : Fence online services state code
// ja : フェンスオンラインサービス状態コード
//++++++++++++++++++++++++++++++
enum FenceOnlineServices_CODE_STATE
{
	inactive = 0,
	requested = 1,
	downloading = 2,
	success = 3,
	failure = 4,
	queued = 5,
	registering = 6,
	queued_retry = 7,
};


//++++++++++++++++++++++++++++++
// en : BattleNet authentication status
// ja : バトルネット認証状態
//++++++++++++++++++++++++++++++
enum BattleNetAuthState
{
	IDLE = 0,
	SIGNING_IN = 1,
	SIGNED_IN = 2,
	ERROR_OUT = 3,
};


//++++++++++++++++++++++++++++++
// en : Demonware Online Status
// ja : デーモンウェアオンライン状態
//++++++++++++++++++++++++++++++
enum DWOnlineStatus
{
	DW_LIVE_DISCONNECTED = 0x0,
	DW_LIVE_CONNECTING = 0x1,
	DW_LIVE_CONNECTED = 0x2
};


//++++++++++++++++++++++++++++++
// en : XUID ( CoD In-Game Unique Identifier )
// ja : XUID ( CoD インゲーム 固有識別子 )
//++++++++++++++++++++++++++++++
struct XUID
{
	unsigned __int64 m_id;

	XUID* RandomXUID();

	bool operator !=(const XUID* xuid);
	XUID* operator =(const XUID* xuid);
	bool operator ==(const XUID* xuid);

};


//++++++++++++++++++++++++++++++
// en : LUA Status
// ja : LUA状態
//++++++++++++++++++++++++++++++
struct lua_State
{

};


//++++++++++++++++++++++++++++++
// en : LUA Registration
// ja : LUA登録
//++++++++++++++++++++++++++++++
struct luaL_Reg
{
	const char* name_;					// 0x0000
	int(__fastcall* func_)(lua_State*);	// 0x0008
};


//++++++++++++++++++++++++++++++
// en : LUI method
// ja : LUIメソッド
//++++++++++++++++++++++++++++++
template <typename LUIGlobalPackage>
class LUIMethod
{
public:
	union
	{
		const char* name_;		// 0x0000
		std::uint64_t hash_;	// 0x0000
	};
	int (*func_)(lua_State* s);	// 0x0008
	LUIMethod<LUIGlobalPackage>* next_;		// 0x0010

	const char* get_name(std::uint64_t* ptr_to_encryption_key)
	{
		static utils::nt::library game{};

		if (game.is_address_in_range(this->hash_))
		{
			return this->name_;
		}

		if (ptr_to_encryption_key != nullptr)
		{
			std::uint64_t decrypted_ptr = *ptr_to_encryption_key ^ this->hash_;
			if (game.is_address_in_range(decrypted_ptr))
			{
				return reinterpret_cast<const char*>(decrypted_ptr);
			}
		}

		return nullptr;
	}
};


//++++++++++++++++++++++++++++++
// en : XZone Memory
// ja : XZoneメモリー
//++++++++++++++++++++++++++++++
struct XZoneMemory
{

};


//++++++++++++++++++++++++++++++
// en : Authentication Signature Database
// ja : 認証署名データベース
//++++++++++++++++++++++++++++++
struct DB_AuthSignature
{
	char bytes[256];
};


//++++++++++++++++++++++++++++++
// en : Fast file failure mode database
// ja : 高速ファイル失敗モードデータベース
//++++++++++++++++++++++++++++++
enum DB_FastFileFailureMode : int
{
	REQUIRED = 0x0,
	ALLOW_MISSING = 0x1
};


//++++++++++++++++++++++++++++++
// en : Voice Communication Setting
// ja : ボイスコミュニケーション設定
//++++++++++++++++++++++++++++++
enum voiceCommunicationSetting : __int8
{
	TALK_TO_EVERYONE = 0x0,
	TALK_TO_FRIENDS_ONLY = 0x1,
	TALK_TO_NOBODY_I_HATE_EVERYONE = 0x2,
	NUM_VOICECOMMUNICATIONSETTINGS = 0x3,
};


//++++++++++++++++++++++++++++++
// en : Voice Communication Setting
// ja : ボイスコミュニケーション設定
//++++++++++++++++++++++++++++++
struct MicrosoftReputationValues
{
	bool overallReputationIsBad;
	bool fairplayReputationIsBad;
	bool commsReputationIsBad;
	bool userContentReputationIsBad;
};


//++++++++++++++++++++++++++++++
// en : Xenon User Data
// ja : Xenonユーザーデータ
//++++++++++++++++++++++++++++++
struct XenonUserData
{
	int signinState;                    // 4バイト
	char gamertag[36];                  // 36バイト
	unsigned int gamertagSuffix;        // 4バイト
	unsigned int hashOfGamertag;        // 4バイト
	char platformGamertag[36];          // 36バイト
	char fullGamertag[64];              // 64バイト
	uint64_t xuid;                      // 8バイト
	char xuidString[21];                // 21バイト
	unsigned __int64 platformId;        // 8バイト
	char platformIdString[21];           // 21バイト
	voiceCommunicationSetting voiceCommunicationSetting;
	bool isGuest;
	int lastOnlinePlayPrivilegeCheckTime;
	char userPrivileges;
	char privilegeCheckStates;
	uintptr_t xboxLiveContext;
	uintptr_t cachedUser;
	MicrosoftReputationValues reputationValues;
	bool isReputationSet;
};


//++++++++++++++++++++++++++++++
// en : Database Stream Start
// ja : データベースストリーム開始
//++++++++++++++++++++++++++++++
enum DBStreamStart : __int32
{
	AtStart = 0x0,
	NotAtStart = 0x1,
};


//++++++++++++++++++++++++++++++
// en : Demonware Invite Status
// ja : デーモンウェア招待ステータス
//++++++++++++++++++++++++++++++
enum InvitationHSM_base_eHSMStates
{
	__HSM_EVENT_NOT_HANDLED__ = 0xFFFFFFFE,
	__HSM_NO_STATE__ = 0xFFFFFFFF,
	__HSM_ROOT_STATE__ = 0x0,
	InvitationHSM = 0x0,
	st_invite_none = 0x1,
	st_handle_error = 0x2,
	st_invite_error_no_msg = 0x3,
	st_generic_com_error_next_frame_with_msg = 0x4,
	st_invitee_permissions_timeout = 0x5,
	st_tu_required_error_with_msg = 0x6,
	st_mp_permission_error_with_msg = 0x7,
	st_cant_join_existing_session_with_msg = 0x8,
	st_session_search_timeout = 0x9,
	st_atomic_join_fence_timeout = 0xA,
	st_invite_processing_timeout = 0xB,
	st_invalid_controller_pairing = 0xC,
	st_eula_declined = 0xD,
	st_account_registration_cancelled = 0xE,
	st_platform_subscription_required = 0xF,
	st_invalid_platform_session_info = 0x10,
	st_already_in_the_game_server_session_that_is_being_joined_on = 0x11,
	st_already_in_the_party_session_that_is_being_joined_on = 0x12,
	st_invite_cancelled_by_user = 0x13,
	st_matchmaker_session_search_failed_due_to_backoff = 0x14,
	st_resolve_inviter_universal_id_timeout = 0x15,
	st_resolve_inviter_universal_id_failed = 0x16,
	st_preparing_users_for_processing_invite = 0x17,
	st_invitee_permissions_check = 0x18,
	st_wait_for_permissions_check_retry = 0x19,
	wait_for_ui_ready = 0x1A,
	verify_eula_accepted = 0x1B,
	waiting_for_eula = 0x1C,
	verify_account_registered = 0x1D,
	waiting_for_account_registeration = 0x1E,
	st_processing_invite = 0x1F,
	st_online_requirements_fence = 0x20,
	st_wait_for_demonware_auth_complete = 0x21,
	st_data_fence_for_joining = 0x22,
	st_resolve_joiner_universal_id = 0x23,
	st_get_sender_xuid = 0x24,
	st_resolve_inviter_universal_id = 0x25,
	st_perform_joinability_checks = 0x26,
	st_start_gathering_join_info_from_user = 0x27,
	st_invitable_privilege_check = 0x28,
	verify_invitable_privilege = 0x29,
	waiting_for_user_decision_on_invitable_privilege = 0x2A,
	backoff_before_reattempting_to_accept_invite_after_invitable_privilege_missing = 0x2B,
	st_perform_application_specific_joinability_checks = 0x2C,
	st_check_next_application_specific_joinability_checks_pending = 0x2D,
	st_perform_current_application_specific_joinability_checks = 0x2E,
	st_wait_for_exe_to_be_ready_to_start_joining = 0x2F,
	st_invite_accept_fence = 0x30,
	st_performing_join = 0x31, st_confirm_accept_invitation = 0x32, 
	st_start_invite_join = 0x33,
	st_start_friend_join = 0x34, 
	st_start_join_accept = 0x35, 
	st_waiting_for_warning_dialog = 0x36, 
	st_handle_dialog_display_again = 0x37,
	st_invite_join_pre_requisites_check = 0x38,
	st_wait_for_matchmaker_retry_wait_period = 0x39, 
	st_match_maker_lobby_search = 0x3A, 
	st_wait_for_host_info_from_matchmaker = 0x3B, 
	st_waiting_on_final_fences_for_party_join = 0x3C, 
	st_start_atomic_join = 0x3D, 
	st_waiting_for_join_approved = 0x3E, 
	st_remote_host_requires_session_search = 0x3F, 
	__HSM_NUM_TOTAL_STATES__ = 0x40,
};



//++++++++++++++++++++++++++++++
// en : Demonware Invite Status
// ja : デーモンウェア招待ステータス
//++++++++++++++++++++++++++++++
typedef InvitationHSM_base_eHSMStates dwLogOnHSM_base_eHSMStates;



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// en : Member Variables
// ja : メンバー変数
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



// en : Text section start address reference
// ja : テキストセクション開始長アドレス参照
const uintptr_t _TEXT_SEC_LEN = 0x1000;


// en : Image Base Address Reference
// ja : イメージベースアドレス参照
const auto _ImageBase = (uintptr_t)GetModuleHandle(nullptr);


// en : Current Game title
// ja : 現在のゲームタイトル
GameTitle _gameTitle = GameTitle::UNKNOWN;


// en : Address Pointer
// ja : アドレスポインター
AdrOffsets _adr;


// en : detour for hook
// ja : フック用ディトール
detours _hooks;


// en : Profile initialization file path
// ja : プロフィール初期化ファイルパス
std::string _profileIniPath;


// en : Player name
// ja : プレイヤー名
std::string _playerName;


// en : Document path
// ja : ドキュメントパス
std::string _documentPath;


// en : Splash image loading function (to hold the IAT hook)
// ja : スプラッシュ画像読み込み関数（IATフックの保持用）
std::optional<std::pair<void*, void*>> LoadImageA_h;


// en : Splash image loading function (For holding the original function pointer)
// ja : スプラッシュ画像読み込み関数（元関数ポインター保持用）
HANDLE(WINAPI* LoadImageA_b)(HINSTANCE, LPCSTR, UINT, int, int, UINT) = nullptr;


// en : A flag to detect whether the splash image loading function has been executed.
// ja : スプラッシュ画像読み込み関数が実行されたかどうかを検知するフラグ
bool _splashed = false;


// en : The number of frames counted by the R_EndFrame function
// ja : R_EndFrame関数でカウントされたフレーム回数
int _elapsedFrameCount = 0;


// en : Whether the frame count in the R_EndFrame function is complete
// ja : R_EndFrame関数でのフレームカウントが完了したかどうか
bool _frameCountEnd;


// en : Whether to dump GSC
// ja : GSCをダンプするかどうか
bool _dumpGSC = false;


// en : Exception Error Filter Settings function (to hold the IAT hook)
// ja : 例外エラーフィルター設定関数（IATフックの保持用）
std::optional<std::pair<void*, void*>> SetUnhandledExceptionFilter_h;


// en : Unused variables (just to be safe)
// ja : 未使用の変数（念のため保存用）
bool signed_in = false;
bool force_sign_in_state_now = false;
inline int* unk_SignInState{};
bool _loadMainMenu = false;



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// en : Basic generic function
// ja : 基本汎用関数
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : In-game address calculation
// ja : ゲーム内アドレス算出
//++++++++++++++++++++++++++++++
size_t CalcAdr(const size_t val)
{
	return _ImageBase + (val - _adr.DumpBase);
}



//++++++++++++++++++++++++++++++
// en : In-game address calculation
// ja : ゲーム内アドレス算出
//++++++++++++++++++++++++++++++
size_t CalcPtr(const size_t val)
{
	return _ImageBase + val;
}



//++++++++++++++++++++++++++++++
// en : Address Modifiers
// ja : アドレス修飾子
//++++++++++++++++++++++++++++++
size_t operator"" _b(const size_t val)
{
	return _ImageBase + val;
}



//++++++++++++++++++++++++++++++
// en : Address Modifiers
// ja : アドレス修飾子
//++++++++++++++++++++++++++++++
size_t reverse_b(const size_t val)
{
	return val - _ImageBase;
}



//++++++++++++++++++++++++++++++
// en : Address Modifiers
// ja : アドレス修飾子
//++++++++++++++++++++++++++++++
size_t operator"" _g(const size_t val)
{
	return _ImageBase + (val - 0x140000000);
}



//++++++++++++++++++++++++++++++
// en : Address Modifiers
// ja : アドレス修飾子
//++++++++++++++++++++++++++++++
size_t reverse_g(const size_t val)
{
	return (val - _ImageBase) + 0x140000000;
}



//++++++++++++++++++++++++++++++
// en : Address Modifiers
// ja : アドレス修飾子
//++++++++++++++++++++++++++++++
size_t reverse_g(const void* val)
{
	return reverse_g(reinterpret_cast<size_t>(val));
}



//++++++++++++++++++++++++++++++
// en : Replaces all occurrences of a specified string within a string
// ja : 文字列内に含まれている、指定された文字列を全て置き換える
//++++++++++++++++++++++++++++++
void ReplaceAll(std::string& stringreplace, const std::string& origin, const std::string& dest)
{
	size_t pos = 0;
	size_t offset = 0;
	size_t len = origin.length();
	while ((pos = stringreplace.find(origin, offset)) != std::string::npos)
	{
		stringreplace.replace(pos, len, dest);
		offset = pos + dest.length();
	}
}



//++++++++++++++++++++++++++++++
// en : Evaluates whether a string contains a specified character string
// ja : 指定の文字列が含まれているか評価する
//++++++++++++++++++++++++++++++
bool isSubStr(std::string str, std::string subStr)
{
	size_t pos = str.find(subStr);
	if (pos != std::string::npos)
	{
		return true;
	}
	return false;
}



//++++++++++++++++++++++++++++++
// en : Converting a string to a floating point number
// ja : 文字列を浮動小数点に変換する
//++++++++++++++++++++++++++++++
float strToFloat(const std::string& str)
{
	float num = 0.0f;
	float fraction = 0.1f;
	bool isNegative = false;

	size_t i = 0;
	if (str[i] == '-')
	{
		isNegative = true;
		i++;
	}

	for (; i < str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10.0f + static_cast<float>(str[i] - '0');
		}
		else if (str[i] == '.')
		{
			i++;
			break;
		}
		else
		{
			break;
		}
	}

	for (; i < str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num += (str[i] - '0') * fraction;
			fraction *= 0.1f;
		}
		else
		{
			break;
		}
	}

	if (isNegative)
	{
		num = -num;
	}

	return num;
}



//++++++++++++++++++++++++++++++
// en : Returns a string based on the format
// ja : フォーマットに基づいた文字列を返す
//++++++++++++++++++++++++++++++
const char* StrVa(const char* fmt, ...)
{
	// 静的バッファ（スレッドローカルで安全）
	static thread_local char buffer[1024]; // 十分なサイズのバッファを確保

	va_list ap;
	va_start(ap, fmt);

	// 書式指定された文字列をバッファに書き込む
	vsnprintf(buffer, sizeof(buffer), fmt, ap);

	va_end(ap);

	return buffer;
}



//++++++++++++++++++++++++++++++
// en : Copies a buffer of the specified size to the memory at the specified location.
// ja : 指定位置のメモリに対して、指定サイズのバッファーをコピーする
//++++++++++++++++++++++++++++++
void RtmCopyMemory(void* place, const void* data, const size_t length)
{
	DWORD old_protect{};
	VirtualProtect(place, length, PAGE_EXECUTE_READWRITE, &old_protect);

	std::memmove(place, data, length);

	VirtualProtect(place, length, old_protect, &old_protect);
	FlushInstructionCache(GetCurrentProcess(), place, length);
}



//++++++++++++++++++++++++++++++
// en : Set a buffer of the specified size to the memory at the specified location.
// ja : 指定位置のメモリに対して、指定サイズのバッファーを設定する
//++++++++++++++++++++++++++++++
template <typename T>
void RtmSetMemory(void* place, T value = false)
{
	RtmCopyMemory(place, &value, sizeof(value));
}



//++++++++++++++++++++++++++++++
// en : Set a buffer of the specified size to the memory at the specified location.
// ja : 指定位置のメモリに対して、指定サイズのバッファーを設定する
//++++++++++++++++++++++++++++++
template <typename T>
void RtmSetMemory(const size_t place, T value = false)
{
	return RtmSetMemory<T>(reinterpret_cast<void*>(place), value);
}



//++++++++++++++++++++++++++++++
// en : Fills the specified size of memory at the specified location with No Operation (0x90).
// ja : 指定位置のメモリに対して、指定サイズ分メモリをNo Operation (0x90) で埋める
//++++++++++++++++++++++++++++++
void RtmNop(void* place, const size_t length)
{
	DWORD old_protect{};
	VirtualProtect(place, length, PAGE_EXECUTE_READWRITE, &old_protect);

	std::memset(place, 0x90, length);

	VirtualProtect(place, length, old_protect, &old_protect);
	FlushInstructionCache(GetCurrentProcess(), place, length);
}



//++++++++++++++++++++++++++++++
// en : Fills the specified size of memory at the specified location with No Operation (0x90).
// ja : 指定位置のメモリに対して、指定サイズ分メモリをNo Operation (0x90) で埋める
//++++++++++++++++++++++++++++++
void RtmNop(const size_t place, const size_t length)
{
	RtmNop(reinterpret_cast<void*>(place), length);
}



//++++++++++++++++++++++++++++++
// en : patch import
// ja : パッチインポート
//++++++++++++++++++++++++++++++
std::pair<void**, void*> patch_import(const std::string& lib, const std::string& func, void* function)
{
	static const utils::nt::library game{};

	const auto game_entry = game.get_iat_entry(lib, func);
	if (!game_entry)
	{
		throw std::runtime_error("Import '" + func + "' not found!");
	}

	const auto original_import = game_entry;
	utils::hook::set(game_entry, function);
	return { game_entry, original_import };
}



//++++++++++++++++++++++++++++++
// en : Pattern Search
// ja : パターン検索
//++++++++++++++++++++++++++++++
uintptr_t find_pattern(const char* module_name, const char* pattern)
{
	const auto get_module_size = [=](uintptr_t module_base)
		{
			return reinterpret_cast<PIMAGE_NT_HEADERS>(module_base + reinterpret_cast<PIMAGE_DOS_HEADER>(module_base)->e_lfanew)->OptionalHeader.SizeOfImage;
		};
	const auto module_start = (uintptr_t)GetModuleHandle(module_name);
	if (module_start != 0ULL)
	{
		const auto module_end = module_start + get_module_size(module_start);

		const char* pattern_current = pattern;
		uintptr_t current_match = NULL;

		MEMORY_BASIC_INFORMATION64 page_information = {};
		for (auto current_page = reinterpret_cast<unsigned char*>(module_start); current_page < reinterpret_cast<unsigned char*>(module_end); current_page = reinterpret_cast<unsigned char*>(page_information.BaseAddress + page_information.RegionSize))
		{
			VirtualQuery(reinterpret_cast<LPCVOID>(current_page), reinterpret_cast<PMEMORY_BASIC_INFORMATION>(&page_information), sizeof(MEMORY_BASIC_INFORMATION));
			if (page_information.Protect == PAGE_NOACCESS)
				continue;

			if (page_information.State != MEM_COMMIT)
				continue;

			if (page_information.Protect & PAGE_GUARD)
				continue;

			for (auto current_address = reinterpret_cast<unsigned char*>(page_information.BaseAddress); current_address < reinterpret_cast<unsigned char*>(page_information.BaseAddress + page_information.RegionSize - 0x8); current_address++)
			{
				if (*current_address != GET_BYTE(pattern_current) && *pattern_current != '\?')
				{
					current_match = 0ULL;
					pattern_current = pattern;
					continue;
				}

				if (!current_match)
					current_match = reinterpret_cast<uintptr_t>(current_address);

				pattern_current += 3;
				if (pattern_current[-1] == NULL)
					return current_match;
			}
		}
	}

	return 0ULL;
}



//++++++++++++++++++++++++++++++
// en : Pattern Search
// ja : パターン検索
//++++++++++++++++++++++++++++++
uintptr_t find_pattern(uintptr_t start, const char* module_name, const char* pattern)
{
	const auto get_module_size = [=](uintptr_t module_base)
		{
			return reinterpret_cast<PIMAGE_NT_HEADERS>(module_base + reinterpret_cast<PIMAGE_DOS_HEADER>(module_base)->e_lfanew)->OptionalHeader.SizeOfImage;
		};
	const auto module_start = start;
	if (module_start != 0ULL)
	{
		const auto module_end = module_start + get_module_size(module_start);

		const char* pattern_current = pattern;
		uintptr_t current_match = NULL;

		MEMORY_BASIC_INFORMATION64 page_information = {};
		for (auto current_page = reinterpret_cast<unsigned char*>(module_start); current_page < reinterpret_cast<unsigned char*>(module_end); current_page = reinterpret_cast<unsigned char*>(page_information.BaseAddress + page_information.RegionSize))
		{
			VirtualQuery(reinterpret_cast<LPCVOID>(current_page), reinterpret_cast<PMEMORY_BASIC_INFORMATION>(&page_information), sizeof(MEMORY_BASIC_INFORMATION));
			if (page_information.Protect == PAGE_NOACCESS)
				continue;

			if (page_information.State != MEM_COMMIT)
				continue;

			if (page_information.Protect & PAGE_GUARD)
				continue;

			for (auto current_address = reinterpret_cast<unsigned char*>(page_information.BaseAddress); current_address < reinterpret_cast<unsigned char*>(page_information.BaseAddress + page_information.RegionSize - 0x8); current_address++)
			{
				if (*current_address != GET_BYTE(pattern_current) && *pattern_current != '\?')
				{
					current_match = 0ULL;
					pattern_current = pattern;
					continue;
				}

				if (!current_match)
					current_match = reinterpret_cast<uintptr_t>(current_address);

				pattern_current += 3;
				if (pattern_current[-1] == NULL)
					return current_match;
			}
		}
	}

	return 0ULL;
}



//++++++++++++++++++++++++++++++
// en : signature display
// ja : 署名表示
//++++++++++++++++++++++++++++++
void printSig(std::string name, void* address, size_t len)
{
	std::cout << name << " '";
	unsigned char* ptr = static_cast<unsigned char*>(address);
	for (size_t i = 0; i < len; ++i)
	{
		std::cout << std::setw(2) << std::setfill('0') << std::hex << static_cast<int>(ptr[i]);
		if (i < len - 1)
			std::cout << ' ';
	}
	std::cout << "'" << std::dec << std::endl;
}



//++++++++++++++++++++++++++++++
// en : Check if a specified file exists
// ja : 指定したファイルが存在するかチェックする
//++++++++++++++++++++++++++++++
inline bool file_exists(const char* name)
{
	struct stat buffer;
	return (stat(name, &buffer) == 0);
}



//	//++++++++++++++++++++++++++++++
//	// en : Simplified MinHook settings
//	// ja : MinHook設定簡略化
//	//++++++++++++++++++++++++++++++
//	bool SetupMinHook(const char* callName, const char* funcName, size_t address, LPVOID detourFunc, LPVOID backupFunc)
//	{
//		LPVOID baseFunc = (LPVOID)((uintptr_t)address);
//	
//		if (MH_CreateHook(baseFunc, detourFunc, reinterpret_cast<LPVOID*>(backupFunc)) != MH_OK)
//		{
//			printf("[Failed] <%s> Create hook failed : %s\n", callName, funcName);
//			return false;
//		}
//	
//		if (MH_EnableHook(baseFunc) != MH_OK)
//		{
//			printf("[Failed] <%s> Enable hook failed : %s\n", callName, funcName);
//			return false;
//		}
//	
//		printf("[Success] <%s> Hooked successfully! : %s\n", callName, funcName);
//	}



//++++++++++++++++++++++++++++++
// en : Record console output and file logs
// ja : コンソール出力とファイルログを記録
//++++++++++++++++++++++++++++++
void NotifyMsg(const char* format, ...)
{
	// 可変引数リストの処理
	va_list args;
	va_start(args, format);

	// コンソールに出力し、即座にフラッシュ
	vprintf(format, args);
	//printf("\n"); // 改行を確実に追加
	fflush(stdout); // 即座にフラッシュ

	// ログファイルに書き込む
	// 現在のDLLのファイルパスを取得
	char dllPath[MAX_PATH];
	GetModuleFileNameA(NULL, dllPath, MAX_PATH);

	// ディレクトリ部分を抽出
	std::string path(dllPath);
	std::string logFilePath = path.substr(0, path.find_last_of("\\/")) + "\\debuglog.txt";

	// ファイルに追記し、即座にフラッシュ
	FILE* fp = fopen(logFilePath.c_str(), "a");
	if (fp)
	{
		vfprintf(fp, format, args);
		//fprintf(fp, "\n"); // 改行を確実に追加
		fflush(fp); // 即座にディスクに書き込み
		fclose(fp);
	}

	va_end(args);
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// en : Address Construction
// ja : アドレス構築
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Address Construction
// ja : アドレス構築
//++++++++++++++++++++++++++++++
void GetAddressOffset(GameTitle title)
{
	switch (title)
	{
		case GameTitle::IW8_138:
		{
			_adr.DumpBase										= 0x7FF654E30000;
			
			_adr.LUI_CoD_LuaCall_OfflineDataFetched				= 0x7FF65A234F20;	// LUI_CoD_LuaCall_OfflineDataFetched
			_adr.LUI_COD_LuaCall_IsPremiumPlayer				= 0x7FF65A0B8040;	// 
			_adr.LUI_CoD_LuaCall_IsLocalPlayAllowed				= 0x7FF65A0ACD60;	// LUI_CoD_LuaCall_IsLocalPlayAllowed
			
			_adr.LUI_ReportError								= 0x7FF65A044770;	// 48 89 5C 24 ?? 48 89 74 24 ?? 57 48 83 EC ?? 48 8B FA 45 33 C0
			_adr.lua_pushboolean								= 0x7FF65A9870B0;	// LUI_CoD_LuaCall_IsUserSignedInToLive
			_adr.lua_tolstring									= 0x7FF65A987B80;	// 48 89 5C 24 ?? 48 89 74 24 ?? 57 48 83 EC ?? 49 8B F8 8B DA 48 8B F1
			
			_adr.LUI_LuaCall_LUIGlobalPackage_DebugPrint		= 0x7FF65A041390;	// LUIElement -> under 1 func -> DebugPrint
			
			_adr.I_irand										= 0x7FF657B7E5D0;	// 69 05 ?? ?? ?? ?? ?? ?? ?? ?? 2B D1 48 63 D2
			_adr.GetRandSeed									= 0x7FF657B7E350;	// I_irand -> holdrand -> top ref
			_adr.Sys_Microseconds								= 0x7FF657C97190;	// 83 3D ?? ?? ?? ?? ?? 49 B8 ?? ?? ?? ?? ?? ?? ?? ?? F2 0F 10 15
			
			_adr.Live_IsSignedIn								= 0x7FF6585E9AD0;	// XBOXLIVE/MPNOTALLOWED
			_adr.Live_IsInSystemlinkLobby						= 0x7FF657EA2FB0;	// LUI_CoD_LuaCall_InLobby

			_adr.R_EndFrame										= 0x7FF659EC8750;	// 48 83 EC ?? E8 ?? ?? ?? ?? 48 8B 15 ?? ?? ?? ?? 45 33 D2
			_adr.Dvar_RegisterBool								= 0x7FF657B8F460;	// E8 ?? ?? ?? ?? 48 8B F0 F6 46
			_adr.DDL_Lookup_MoveToNameHash						= 0x7FF65A954A70;	// UI_LuaCall_Game_GetCPNumScoreboardPlayer -> DDL_MoveToNameByHash -> DDL_Lookup_MoveToNameHash
			
			_adr.Live_GetUserData								= 0x7FF66B8E3334;	// LUI_CoD_LuaCall_IsUserAGuest -> Live_UserIsGuest -> Live_GetUserData_p
			_adr.GamerProfile_LogInProfile						= 0x7FF6582680B0;	// gamer_profile_input_type_updated
			_adr.LoadSavedAchievements							= 0x7FF656853510;	// achievements.%X.chv & achievements_1.chv

			_adr.LiveStorage_DoWeHaveStatsForSource				= 0x7FF6578429C0;	// LUI_CoD_LuaCall_DoWeHaveOnlineStats
			_adr.xenonUserData_m_guardedUserData_signinState	= 0x7FF65D99F480;	// LUI_CoD_LuaCall_IsConnectedToFirstParty -> Live_IsSignedIn -> xenonUserData.m_guardedUserData[v1].signinState
			_adr.CurrentRegion_IssueFix1						= 0x7FF6585E07DE;	// LUI_CoD_LuaCall_GetCurrentRegion -> g_currentRegion -> ref+9
			_adr.CurrentRegion_IssueFix2						= 0x7FF6585E02BE;	// LUI_CoD_LuaCall_GetCurrentRegion -> g_currentRegion -> ref+4D (or :loc_7FF6B1A13536)
			_adr.controllerStatData								= 0x7FF66A09B764;	// LUI_CoD_LuaCall_StatsResetGetState -> LiveStorage_AreStatsFetched -> controllerStatData
			_adr.LiveStorage_StatsInit							= 0x7FF657845620;	// ddl/mp/playerdata.ddl
			_adr.Content_DoWeHaveContentPack					= 0x7FF657B857D0;	// 8B D1 83 F9 02 ?? ?? B0 01 C3 44 8B 05 ?? ?? ?? ?? 33 C0 45 85 C0 ?? ?? 48 8D 0D ?? ?? ?? ?? 90
			_adr.unk_PlatformPatch_flag1						= 0x7FF65D99F750;	// %08x %08x %08x %08x -> under OBYTE(v594) = *(_BYTE *)(v174 + 756) ^ ((v175 ^ (v174 - 12)) * ((v175 ^ (v174 - 12)) + 2)) ^ ((unsigned __int16)((v175 ^ (v174 + 756)) * ((v175 ^ (v174 + 756)) + 2)) >> 8); -> xuid_patch_after_1_call_call -> xuid_patch_after_1_call or 80 3D ?? ?? ?? ?? 00 75 09 C7 01 00 00 00 00 33 C0 C3 8B 05 ?? ?? ?? ?? 89 01 48 8D 05 ?? ?? ??
			_adr.unk_XUIDCheck1									= 0x7FF66F801E78;	// 48 8D 15 ? ? ? ? 48 FF C6 81 FF
			_adr.CurrentRegion_IssueFix2_flag					= 0x7FF66BCEA682;	// LUI_CoD_LuaCall_GetCurrentRegion -> g_currentRegion -> ref+4D (or :loc_7FF6B1A13536) or {\n\"account_country\": \"%s\",\n\"ratings_board_min_age
			
			_adr.s_isContentEnumerationFinished					= 0x7FF66B56F600;	// 80 3D ? ? ? ? ? 74 ? 48 89 7C 24
			_adr.dvar_r_hudOutlineVRScopeThermalDarkColorFriend	= 0x7FF66D0BE9C0;	// OMROPMNPTT
			_adr.LiveStorage_ReadStats							= 0x7FF657842F60;	// playerdata_available
			
		}
		break;

		case GameTitle::IW8_157:
		{
			_adr.DumpBase										= 0x7FF6AD390000;

			_adr.CL_GetLocalClientSignInState					= 0x7FF6B10C5090;	// E8 ? ? ? ? 85 C0 7F ? 8B CB
			_adr.unk_SignInState								= 0x7FF6C7B29570;	// E8 ? ? ? ? 85 C0 7F ? 8B CB
			_adr.Dvar_RegisterBool_call_1						= 0x7FF6B079828F;	// MPSSOTQQPM
			_adr.Dvar_RegisterBool_call_2						= 0x7FF6B07982AA;	// LSTQOKLTRN
			_adr.GamerProfile_SetDataByName						= 0x7FF6B16681A0;	// 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 8B F1 0F 29 74 24
			_adr.holdrand										= 0x7FF6B71641E8;	// I_irand
			_adr.Dvar_FindVarByName								= 0x7FF6B0D5A9E0;	// E8 ? ? ? ? 48 8B CB 48 63 50
			_adr.LUI_OpenMenu									= 0x7FF6B3B04040;	// 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 41 8B F1 41 8B D8
			
			_adr.LUI_CoD_LuaCall_IsConnectedToGameServer		= 0x7FF6B36DF870;	// 
			_adr.LUI_CoD_LuaCall_IsGameModeAllowed				= 0x7FF6B36E0720;	// 
			_adr.LUI_CoD_LuaCall_IsGameModeAvailable			= 0x7FF6B36E0820;	// 
			_adr.LUI_COD_LuaCall_IsPremiumPlayerReady			= 0x7FF6B36E8E80;	// 
			_adr.LuaShared_LuaCall_IsDemoBuild					= 0x7FF6B36276B0;	// 
			_adr.xpartydisband									= 0x7FF6B4367288;	// 
			_adr.GScr_EndLobby									= 0x7FF6B0662370;	// 
			_adr.dvar_force_offline_enabled						= 0x7FF6C90E88C8;	// MPSSOTQQPM
			_adr.dvar_force_offline_menus						= 0x7FF6C90E88D0;	// LSTQOKLTRN
			
			_adr.Com_RegisterCommonDvars						= 0x7FF6B0797480;	// Com_RegisterCommonDvars
			










			//[*Notice] _ImageBase = 7FF6952B0000
			//	[LUIMethod] DebugPrint = 7FF69B55D8E0 
			
			_adr.SEH_StringEd_GetString							= 0x7FF6B0D17BA0;	// NSSSRLRTOO -> SEH_StringEd_GetString_flag -> ref+6

			_adr.Live_UserSignIn								= 0x7FF6B0D9E770;	// %s?timestamp=%llu&requestor=%s&account= -> Live_UserSignIn_exec_exec -> Live_UserSignIn_exec ref+12 or +13 -> ref+43 or +36
			_adr.OnlineErrorManager_GetFenceState				= 0x7FF6B1A2CC40;	// LUI_CoD_LuaCall_GetBattleNetFenceState -> 
			_adr.OnlineErrorManager_IsMpNotAllowed				= 0x7FF6B1A12C70;	// OnlineErrorManager_GetFenceState ref+29 or 28 -> 
			_adr.Platform_BeginAuth								= 0x7FF6B1A15DA0;	// OnlineErrorManager_IsMpNotAllowed ref+4A -> Platform_BeginAuth_exec -> bottom 1 up ref+4 ->
			_adr.Live_FakeUserSignIn							= 0x7FF6ADA9A6F0;	// Platform_BeginAuth -> Platform_BeginAuth_exec -> Platform_BeginAuth_exec_flag -> top ref -> return func(*(_QWORD *)(a1 + 8)); -> up func -> func(*(_DWORD *)(a1 + 8), v31, v32, a3, v34);
			_adr.platformConnectionState						= 0x7FF6CB13CC80;	// Platform_BeginAuth -> Platform_BeginAuth_exec ->
			_adr.platformId										= 0x7FF6CB13C920;	// Platform_BeginAuth -> under 1 func -> ref arg -> -8byte
			_adr.accountLoggedIn								= 0x7FF6CB13C382;	// CurrentRegion_IssueFix2 -> ref call -> if ( !flag && *(_DWORD *)(func() + 16) == 1 )
			_adr.dvar_xblive_loggedin							= 0x7FF6CAD32458;	// dlog_event_server_playagain_start -> ref call -> upper v5 = func((unsigned int)flag); -> +8byte

			_adr.unk_PlatformPatch_flag1						= 0x7FF6CB13CB30;	// %08x %08x %08x %08x -> under OBYTE(v594) = *(_BYTE *)(v174 + 756) ^ ((v175 ^ (v174 - 12)) * ((v175 ^ (v174 - 12)) + 2)) ^ ((unsigned __int16)((v175 ^ (v174 + 756)) * ((v175 ^ (v174 + 756)) + 2)) >> 8); -> xuid_patch_after_1_call_call -> xuid_patch_after_1_call or 80 3D ?? ?? ?? ?? 00 75 09 C7 01 00 00 00 00 33 C0 C3 8B 05 ?? ?? ?? ?? 89 01 48 8D 05 ?? ?? ??
			_adr.dvar_r_hudOutlineVRScopeThermalDarkColorFriend	= 0x7FF6CC5AE808;	// OMROPMNPTT
			_adr.CurrentRegion_IssueFix1						= 0x7FF6B1A13ADE;	// LUI_CoD_LuaCall_GetCurrentRegion -> g_currentRegion -> ref+9
			_adr.CurrentRegion_IssueFix2						= 0x7FF6B1A1355E;	// LUI_CoD_LuaCall_GetCurrentRegion -> g_currentRegion -> ref+4D (or :loc_7FF6B1A13536) or {\n\"account_country\": \"%s\",\n\"ratings_board_min_age
			_adr.CurrentRegion_IssueFix2_flag					= 0x7FF6CB13C382;	// LUI_CoD_LuaCall_GetCurrentRegion -> g_currentRegion -> ref+4D (or :loc_7FF6B1A13536) or {\n\"account_country\": \"%s\",\n\"ratings_board_min_age
			_adr.unk_BNetClass									= 0x7FF6CB13C860;	// 83 3D ? ? ? ? ? 74 ? B8 ? ? ? ? C3
			_adr.s_isContentEnumerationFinished					= 0x7FF6CA997400;	// 80 3D ? ? ? ? ? 74 ? 48 89 7C 24
			_adr.unk_XUIDCheck1									= 0x7FF6CEDD0DE8;	// 48 8D 1D ? ? ? ? 40 88 35
			_adr.GamerProfile_IsProfileLoggedIn					= 0x7FF6B1654460;	// hit_marker_3d
			_adr.Content_DoWeHaveContentPack					= 0x7FF6B0D54FC0;	// 8B D1 83 F9 02 ?? ?? B0 01 C3 44 8B 05 ?? ?? ?? ?? 33 C0 45 85 C0 ?? ?? 48 8D 0D ?? ?? ?? ?? 90
			_adr.GetUsername									= 0x7FF6B0D9DB70;	// UnnamedPlayer
			_adr.s_OnlineServicesFenceData_state				= 0x7FF6C87D3E18;	// LUI_CoD_LuaCall_OnlineServicesGetState -> Live_OnlineServicesFence_GetState
			_adr.dwGetLogOnStatus								= 0x7FF6B3194330;	// 40 53 48 83 EC ? 48 63 C1 BA ? ? ? ? 48 69 D8 or login_event -> 
			_adr.dwLogOnHSM_base_HSM_IsInState					= 0x7FF6AFC4B3C0;	// 40 53 48 83 EC ? 48 63 C1 BA ? ? ? ? 48 69 D8 or login_event -> 
			_adr.Live_IsSignedIn								= 0x7FF6B1A166D0;	// XBOXLIVE/MPNOTALLOWED
			_adr.Live_IsUserSignedIn							= 0x7FF6B0D9E0C0;	// 48 83 EC 28 E8 ?? ?? ?? ?? 85 C0 0F 9F C0 48 83 C4 28 C3 = x2
			_adr.Live_IsUserSignedInToDemonware					= 0x7FF6B1107CA0;	// E8 ? ? ? ? 83 4F ? ? 48 8D 0D
			_adr.Live_IsUserSignedInToBnet						= 0x7FF6B01A9E30;	// 48 89 5C 24 08 57 48 83 EC 20 48 63 F9 48 8B DA 8B CF E8 ?? ?? ?? ?? 84 C0
			_adr.Live_IsUserSignedInToLive						= 0x7FF6B0D9E0E0;	// LUI_CoD_LuaCall_IsUserSignedInToDemonware
			_adr.Live_OnlineServicesFence_GetState				= 0x7FF6B0077B30;	// LUI_CoD_LuaCall_OnlineServicesGetState
			_adr.Live_SyncOnlineDataFence_GetState				= 0x7FF6B0078C40;	// LUI_CoD_LuaCall_ShouldBeInOnlineArea -> j_LUI_CoD_LuaCall_ShouldBeInOnlineArea

			_adr.j_LUI_CoD_LuaCall_ShouldBeInOnlineArea			= 0x7FF6B3736780;	// LUI_CoD_LuaCall_ShouldBeInOnlineArea
			_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware		= 0x7FF6B36E0760;	// LUI_CoD_LuaCall_IsUserSignedInToDemonware
			_adr.LUI_CoD_LuaCall_IsBattleNetAuthReady			= 0x7FF6B36F8620;	// LUI_CoD_LuaCall_IsBattleNetAuthReady
			_adr.LUI_COD_LuaCall_IsBattleNetLanOnly				= 0x7FF6B36E8B40;	// LUI_COD_LuaCall_IsBattleNetLanOnly
			_adr.LUI_COD_LuaCall_IsBattleNet					= 0x7FF6B36E8820;	// LUI_COD_LuaCall_IsBattleNet
			_adr.LUI_CoD_LuaCall_StatsResetGetState				= 0x7FF6B38A6260;	// LUI_CoD_LuaCall_StatsResetGetState
			_adr.LUI_COD_LuaCall_IsPremiumPlayer				= 0x7FF6B36E8C60;	// LUI_COD_LuaCall_IsPremiumPlayer
			_adr.LUI_CoD_LuaCall_OfflineDataFetched				= 0x7FF6B38A6150;	// LUI_CoD_LuaCall_OfflineDataFetched
			_adr.LUI_CoD_LuaCall_IsLocalPlayAllowed				= 0x7FF6B36F2880;	// LUI_CoD_LuaCall_IsLocalPlayAllowed
			_adr.LUI_CoD_LuaCall_IsUserSignedInToLive			= 0x7FF6B36E0660;	// 
			_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware		= 0x7FF6B36E0760;	// 
			
			_adr.LUI_ReportError								= 0x7FF6B3640DF0;	// 48 89 5C 24 ?? 48 89 74 24 ?? 57 48 83 EC ?? 48 8B FA 45 33 C0
			_adr.lua_pushboolean								= 0x7FF6B3FBF980;	// LUI_CoD_LuaCall_IsUserSignedInToLive
			_adr.lua_tolstring									= 0x7FF6B3FC0450;	// 48 89 5C 24 ?? 48 89 74 24 ?? 57 48 83 EC ?? 49 8B F8 8B DA 48 8B F1
			
			_adr.LUI_LuaCall_LUIGlobalPackage_DebugPrint		= 0x7FF6B363D8E0;	// DebugPrint
			
			_adr.Sys_Microseconds								= 0x7FF6B0E953D0;	// E8 ?? ?? ?? ?? 48 2B C3 48 8B C8
			_adr.I_irand										= 0x7FF6B0D4DF30;	// 69 05 ?? ?? ?? ?? ?? ?? ?? ?? 2B D1 48 63 D2
			_adr.GetRandSeed									= 0x7FF6B0D4DCB0;	// holdrand
			
			_adr.Dvar_SetBool_Internal							= 0x7FF6B0D626E0;	// LUA_MENU/PATCH_UPDATE_SUCCESS

			_adr.R_EndFrame										= 0x7FF6B34B5DC0;	// 48 83 EC ?? E8 ?? ?? ?? ?? 48 8B 15 ?? ?? ?? ?? 45 33 D2
			_adr.Dvar_RegisterBool								= 0x7FF6B0D603C0;	// E8 ?? ?? ?? ?? 48 8B F0 F6 46
			_adr.DDL_Lookup_MoveToNameHash						= 0x7FF6B3F8A8F0;	// 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 45 8B D1 49 8B F0 48 8B DA 4C 8B D9 48 85 C9 0F 84
			
			_adr.LUIMethod_LUIGlobalPackage_list				= 0x7FF6CD96A330;	// 48 8B 1D ?? ?? ?? ?? 48 8B 3D ?? ?? ?? ?? 89 05
			_adr.LUI_COD_LuaCall_HasActiveLocalClient			= 0x7FF6B36EA470;	// LUI_COD_LuaCall_HasActiveLocalClient
			_adr.LUI_CoD_LuaCall_GetBattleNetConnectionState	= 0x7FF6B36F5150;	// LUI_CoD_LuaCall_GetBattleNetConnectionState
			_adr.LuaShared_LuaCall_IsDevelopmentBuild			= 0x7FF6B3627670;	// LuaShared_LuaCall_IsDevelopmentBuild
			_adr.LuaShared_LuaCall_IsConsoleGame				= 0x7FF6B36276F0;	// LuaShared_LuaCall_IsConsoleGame
			_adr.lua_pushnumber									= 0x7FF6B3FBFC00;	// LUI_CoD_LuaCall_GetBattleNetConnectionState
			_adr.lua_pushinteger								= 0x7FF6B3FBFAE0;	// LUI_CoD_LuaCall_OnlineServicesGetState
			_adr.file_fopen										= 0x7FF6B41995BC;	// luaL_loadfile
			_adr.file_fclose									= 0x7FF6B41999FC;	// luaL_loadfile
			_adr.luaL_loadbuffer								= 0x7FF6B3FC5890;	// 4C 8B DC 53 57 48 81 EC ?? ?? ?? ?? 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 84 24 ?? ?? ?? ?? 4D 85 C9
			_adr.unk_EncryptionKey								= 0x7FF6CD96A370;	// 48 33 15 ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 8B 57
			_adr.luaL_openlib									= 0x7FF6B3FC3A10;	// 48 89 5C 24 ?? 55 56 41 56 48 83 EC ?? 48 8B 41
			_adr.LiveStorage_GetActiveStatsSource				= 0x7FF6B0721390;	// ddl/mp/cpdata.ddl
			_adr.DB_FindXAssetHeader							= 0x7FF6B057B8C0;	// E8 ?? ?? ?? ?? 44 8B C5 8D 4D
			_adr.xenonUserData_m_guardedUserData_signinState	= 0x7FF6CB13C860;	// LUI_CoD_LuaCall_IsConnectedToFirstParty -> Live_IsSignedIn -> xenonUserData.m_guardedUserData[v1].signinState
			_adr.DB_LoadXFile									= 0x7FF6B05788B0;	// E8 ?? ?? ?? ?? 8B F8 33 ED 40 38 B3
			_adr.Live_IsInSystemlinkLobby						= 0x7FF6B1107130;	// LUI_CoD_LuaCall_InLobby
			_adr.GamerProfile_LogInProfile						= 0x7FF6B16546C0;	// gamer_profile_input_type_updated
			_adr.LoadSavedAchievements							= 0x7FF6AF4948A0;	// achievements.%X.chv & achievements_1.chv
			_adr.controllerStatData								= 0x7FF6C903DC64;	// LUI_CoD_LuaCall_StatsResetGetState -> LiveStorage_AreStatsFetched -> controllerStatData
			_adr.LiveStorage_StatsInit							= 0x7FF6B0723620;	// ddl/mp/playerdata.ddl
			_adr.Live_GetUserData								= 0x7FF6AFED05C0;	// LUI_CoD_LuaCall_IsUserAGuest -> Live_UserIsGuest -> Live_GetUserData_p
			_adr.luaL_loadfile									= 0x7FF6B3FC5A20;	// 40 53 57 48 81 EC ?? ?? ?? ?? 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 84 24 ?? ?? ?? ?? 48 8B 41
			_adr.CL_Mgr_IsControllerActive						= 0x7FF6AFB23D20;	// LUI_CoD_LuaCall_SetDesiredLobbyTeamSelection
			_adr.CL_Mgr_GetClientFromController					= 0x7FF6AFB23B90;	// LUI_CoD_LuaCall_SetDesiredLobbyTeamSelection
			_adr.Com_DDL_LoadAsset								= 0x7FF6B3F88080;	// ddl/mp/playerdata.ddl
			_adr.LiveStorage_GetPlayerDataBufferForSource		= 0x7FF6B0723550;	// ddl/mp/playerdata.ddl
			_adr.LiveStorage_DoWeHaveStatsForSource				= 0x7FF6B0720BF0;	// LUI_CoD_LuaCall_DoWeHaveOnlineStats
			_adr.LiveStorage_BeginGame							= 0x7FF6B0727D40;	// playerdata_available
			_adr.LiveStorage_ReadStats							= 0x7FF6B0721150;	// playerdata_available
			
			_adr.Load_ScriptFile								= 0x7FF6AFCC80B0;
			_adr.DB_PatchMem_PushAsset							= 0x7FF6AFC467D0;
			_adr.Load_Stream									= 0x7FF6B0584200;
			_adr.DB_PushStreamPos								= 0x7FF6B0583DF0;
			_adr.Load_XString									= 0x7FF6AFC997C0;
			_adr.DB_PopStreamPos								= 0x7FF6B0583D40;
			_adr.DB_PatchMem_PopAsset							= 0x7FF6AFC465A0;
			_adr.DB_ReadXFile									= 0x7FF6B05796F0;
			_adr.Load_ConstCharArray							= 0x7FF6AFC97650;
			_adr.Load_byteArray									= 0x7FF6AFC99C00;
			_adr.varScriptFile									= 0x7FF6B8997A40;
			_adr.varXString										= 0x7FF6B8996240;
			_adr.varConstChar									= 0x7FF6B8996230;
			_adr.varbyte										= 0x7FF6B8996060;
			_adr.AllocLoad_ConstChar							= 0x7FF6AFC956E0;
			_adr.AllocLoad_byte									= 0x7FF6AFC959E0;
			_adr.g_streamPosGlob_pos							= 0x7FF6C8EA1F20;
		}
		break;

		case GameTitle::IW8_167:
		{
			_adr.DumpBase										= 0x7FF683520000;				// 0x7FF683521000

			//	XUID
			_adr.Sys_Microseconds								= _TEXT_SEC_LEN + 0x409B9D0;	// 0x7FF6875BC9D0	E8 ?? ?? ?? ?? 48 2B C3 48 8B C8
			_adr.I_irand										= _TEXT_SEC_LEN + 0x3F3B0E0;	// 0x7FF68745C0E0	69 05 ?? ?? ?? ?? ?? ?? ?? ?? 2B D1 48 63 D2
			_adr.GetRandSeed									= _TEXT_SEC_LEN + 0x3F3AE60;	// 0x7FF68745BE60	holdrand
			
			//	LUA	util
			_adr.lua_pushboolean								= _TEXT_SEC_LEN + 0x7278EF0;	// 0x7FF68A799EF0	LUI_CoD_LuaCall_IsUserSignedInToLive
			
			//	First hooks / set
			_adr.Content_DoWeHaveContentPack					= _TEXT_SEC_LEN + 0x3F422B0;	// 0x7FF6874632B0	LUI_CoD_LuaCall_IsMapPackOwned
			_adr.LUI_COD_LuaCall_IsPremiumPlayer				= _TEXT_SEC_LEN + 0x69A6C80;	// 0x7FF689EC7C80	LUI_COD_LuaCall_IsPremiumPlayer
			_adr.LUI_CoD_LuaCall_OfflineDataFetched				= _TEXT_SEC_LEN + 0x6B523C0;	// 0x7FF68A0733C0	LUI_CoD_LuaCall_OfflineDataFetched
			_adr.LUI_CoD_LuaCall_IsLocalPlayAllowed				= _TEXT_SEC_LEN + 0x6996A30;	// 0x7FF689EB7A30	LUI_CoD_LuaCall_IsLocalPlayAllowed
			_adr.Dvar_RegisterBool								= _TEXT_SEC_LEN + 0x3F4DF40;	// 0x7FF68746EF40	E8 ?? ?? ?? ?? 48 8B F0 F6 46
			_adr.R_EndFrame										= _TEXT_SEC_LEN + 0x674C330;	// 0x7FF689C6D330	48 83 EC ?? E8 ?? ?? ?? ?? 48 8B 15 ?? ?? ?? ?? 45 33 D2
			_adr.Live_IsInSystemlinkLobby						= _TEXT_SEC_LEN + 0x431AF70;	// 0x7FF68783BF70	LUI_CoD_LuaCall_InLobby

			//	Sku style Patch
			_adr.unk_PlatformPatch_flag1						= _TEXT_SEC_LEN + 0x15D09290;	// 0x7FF69922A290	%08x %08x %08x %08x -> under OBYTE(v594) = *(_BYTE *)(v174 + 756) ^ ((v175 ^ (v174 - 12)) * ((v175 ^ (v174 - 12)) + 2)) ^ ((unsigned __int16)((v175 ^ (v174 + 756)) * ((v175 ^ (v174 + 756)) + 2)) >> 8); -> xuid_patch_after_1_call_call -> xuid_patch_after_1_call or 80 3D ?? ?? ?? ?? 00 75 09 C7 01 00 00 00 00 33 C0 C3 8B 05 ?? ?? ?? ?? 89 01 48 8D 05 ?? ?? ??
			_adr.unk_XUIDCheck1									= _TEXT_SEC_LEN + 0x199B98E0;	// 0x7FF69CEDA8E0	48 8D 1D ? ? ? ? 40 88 35
			_adr.accountLoggedIn								= _TEXT_SEC_LEN + 0x15D08AE2;	// 0x7FF699229AE2	CurrentRegion_IssueFix2 -> ref call -> if ( !flag && *(_DWORD *)(func() + 16) == 1 )
			_adr.CurrentRegion_IssueFix2_flag					= _adr.accountLoggedIn;			// 0x7FF699229AE2	LUI_CoD_LuaCall_GetCurrentRegion -> g_currentRegion -> ref+4D (or :loc_7FF6B1A13536) or {\n\"account_country\": \"%s\",\n\"ratings_board_min_age
			_adr.s_isContentEnumerationFinished					= _TEXT_SEC_LEN + 0x15519580;	// 0x7FF698A3A580	80 3D ? ? ? ? ? 74 ? 48 89 7C 24
			_adr.dvar_r_hudOutlineVRScopeThermalDarkColorFriend	= _TEXT_SEC_LEN + 0x1718F808;	// 0x7FF69A6B0808	OMROPMNPTT
			_adr.xenonUserData_m_guardedUserData_signinState	= _TEXT_SEC_LEN + 0x15D08FC0;	// 0x7FF699229FC0	LUI_CoD_LuaCall_IsConnectedToFirstParty -> Live_IsSignedIn -> xenonUserData.m_guardedUserData[v1].signinState
			
			//	ProfilePatches_Arg
			_adr.Live_GetUserData								= _TEXT_SEC_LEN + 0x3082740;	// 0x7FF6865A3740	LUI_CoD_LuaCall_IsUserAGuest -> Live_UserIsGuest -> Live_GetUserData_p
			_adr.GamerProfile_LogInProfile						= _TEXT_SEC_LEN + 0x48E26A0;	// 0x7FF687E036A0	gamer_profile_input_type_updated
			_adr.LoadSavedAchievements							= _TEXT_SEC_LEN + 0x2644DE0;	// 0x7FF685B65DE0	achievements.%X.chv & achievements_1.chv
			
			//	h00dair mix style Patch
			_adr.Live_IsSignedIn								= _TEXT_SEC_LEN + 0x4CB51F0;	// 0x7FF6881D61F0	XBOXLIVE/MPNOTALLOWED or LUI_CoD_LuaCall_IsConnectedToFirstParty
			_adr.LiveStorage_DoWeHaveStatsForSource				= _TEXT_SEC_LEN + 0x2D1FFBF0;	// 0x7FF6B0720BF0	LUI_CoD_LuaCall_DoWeHaveOnlineStats
			_adr.controllerStatData								= _TEXT_SEC_LEN + 0x137A1F64;	// 0x7FF696CC2F64	LUI_CoD_LuaCall_StatsResetGetState -> LiveStorage_GetStatsResetState -> controllerResetStatData -> under arg controllerStatData
			_adr.LiveStorage_StatsInit							= _TEXT_SEC_LEN + 0x3905EB0;	// 0x7FF686E26EB0	ddl/mp/playerdata.ddl
			_adr.LiveStorage_ReadStats							= _TEXT_SEC_LEN + 0x39039B0;	// 0x7FF686E249B0	playerdata_available
			
			

			



			


			_adr.CurrentRegion_IssueFix2						= _TEXT_SEC_LEN + 0x4CB31F0;	// 0x7FF6881D41F0	LUI_CoD_LuaCall_GetCurrentRegion -> g_currentRegion -> ref+4D (or :loc_7FF6B1A13536) or {\n\"account_country\": \"%s\",\n\"ratings_board_min_age
			



			

			_adr.CL_GetLocalClientSignInState					= 0x7FF6B10C5090;	// E8 ? ? ? ? 85 C0 7F ? 8B CB
			_adr.unk_SignInState								= 0x7FF6C7B29570;	// E8 ? ? ? ? 85 C0 7F ? 8B CB
			_adr.Dvar_RegisterBool_call_1						= 0x7FF6B079828F;	// MPSSOTQQPM
			_adr.Dvar_RegisterBool_call_2						= 0x7FF6B07982AA;	// LSTQOKLTRN
			_adr.GamerProfile_SetDataByName						= 0x7FF6B16681A0;	// 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 8B F1 0F 29 74 24
			_adr.holdrand										= 0x7FF6B71641E8;	// I_irand
			_adr.Dvar_FindVarByName								= 0x7FF6B0D5A9E0;	// E8 ? ? ? ? 48 8B CB 48 63 50
			_adr.LUI_OpenMenu									= 0x7FF6B3B04040;	// 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 41 8B F1 41 8B D8
			
			_adr.LUI_CoD_LuaCall_IsConnectedToGameServer		= 0x7FF6B36DF870;	// 
			_adr.LUI_CoD_LuaCall_IsGameModeAllowed				= 0x7FF6B36E0720;	// 
			_adr.LUI_CoD_LuaCall_IsGameModeAvailable			= 0x7FF6B36E0820;	// 
			_adr.LUI_COD_LuaCall_IsPremiumPlayerReady			= 0x7FF6B36E8E80;	// 
			_adr.LuaShared_LuaCall_IsDemoBuild					= 0x7FF6B36276B0;	// 
			_adr.xpartydisband									= 0x7FF6B4367288;	// 
			_adr.GScr_EndLobby									= 0x7FF6B0662370;	// 
			_adr.dvar_force_offline_enabled						= 0x7FF6C90E88C8;	// MPSSOTQQPM
			_adr.dvar_force_offline_menus						= 0x7FF6C90E88D0;	// LSTQOKLTRN
			
			_adr.Com_RegisterCommonDvars						= 0x7FF6B0797480;	// Com_RegisterCommonDvars
			










			//[*Notice] _ImageBase = 7FF6952B0000
			//	[LUIMethod] DebugPrint = 7FF69B55D8E0 
			
			_adr.SEH_StringEd_GetString							= 0x7FF6B0D17BA0;	// NSSSRLRTOO -> SEH_StringEd_GetString_flag -> ref+6

			_adr.Live_FakeUserSignIn							= _TEXT_SEC_LEN + 0x728560;		// 0x7FF683C49560	Platform_BeginAuth -> Platform_BeginAuth_exec -> platformConnectionState -> top ref -> return func(*(_QWORD *)(a1 + 8)); -> up func -> func(*(_DWORD *)(a1 + 8), v31, v32, a3, v34);
			_adr.OnlineErrorManager_GetFenceState				= _TEXT_SEC_LEN + 0x4CCBA90;	// 0x7FF6881ECA90	LUI_CoD_LuaCall_GetBattleNetFenceState -> 
			_adr.OnlineErrorManager_IsMpNotAllowed				= _TEXT_SEC_LEN + 0x4CB1790;	// 0x7FF6881D2790	OnlineErrorManager_GetFenceState ref+29 or 28 -> 
			_adr.Platform_BeginAuth								= _TEXT_SEC_LEN + 0x4CB48C0;	// 0x7FF6881D58C0	OnlineErrorManager_IsMpNotAllowed ref+4A -> Platform_BeginAuth_exec -> bottom 1 up ref+4 ->
			_adr.Live_UserSignIn								= _TEXT_SEC_LEN + 0x3F8D2E0;	// 0x7FF6874AE2E0	%s?timestamp=%llu&requestor=%s&account= -> Live_UserSignIn_exec_exec -> Live_UserSignIn_exec ref+12 or +13 -> ref+43 or +36 or XBOXLIVE/MPNOTALLOWED ref+15 -> up func last call ->
			_adr.platformConnectionState						= _TEXT_SEC_LEN + 0x15D093E0;	// 0x7FF69922A3E0	Platform_BeginAuth -> Platform_BeginAuth_exec ->
			_adr.platformId										= _TEXT_SEC_LEN + 0x15D09080;	// 0x7FF69922A080	Platform_BeginAuth -> under 1 func -> ref arg -> -8byte
			_adr.dvar_xblive_loggedin							= _TEXT_SEC_LEN + 0x158C85A8;	// 0x7FF698DE95A8	dlog_event_server_playagain_start -> ref call -> upper v5 = func((unsigned int)flag); -> +8byte
			
			_adr.CurrentRegion_IssueFix1						= 0x7FF6B1A13ADE;	// LUI_CoD_LuaCall_GetCurrentRegion -> g_currentRegion -> ref+9
			_adr.unk_BNetClass									= 0x7FF6CB13C860;	// 83 3D ? ? ? ? ? 74 ? B8 ? ? ? ? C3
			_adr.GamerProfile_IsProfileLoggedIn					= 0x7FF6B1654460;	// hit_marker_3d
			_adr.GetUsername									= 0x7FF6B0D9DB70;	// UnnamedPlayer
			_adr.s_OnlineServicesFenceData_state				= 0x7FF6C87D3E18;	// LUI_CoD_LuaCall_OnlineServicesGetState -> Live_OnlineServicesFence_GetState
			_adr.dwGetLogOnStatus								= 0x7FF6B3194330;	// 40 53 48 83 EC ? 48 63 C1 BA ? ? ? ? 48 69 D8 or login_event -> 
			_adr.dwLogOnHSM_base_HSM_IsInState					= 0x7FF6AFC4B3C0;	// 40 53 48 83 EC ? 48 63 C1 BA ? ? ? ? 48 69 D8 or login_event -> 
			_adr.Live_IsUserSignedIn							= 0x7FF6B0D9E0C0;	// 48 83 EC 28 E8 ?? ?? ?? ?? 85 C0 0F 9F C0 48 83 C4 28 C3 = x2
			_adr.Live_IsUserSignedInToDemonware					= 0x7FF6B1107CA0;	// E8 ? ? ? ? 83 4F ? ? 48 8D 0D
			_adr.Live_IsUserSignedInToBnet						= 0x7FF6B01A9E30;	// 48 89 5C 24 08 57 48 83 EC 20 48 63 F9 48 8B DA 8B CF E8 ?? ?? ?? ?? 84 C0
			_adr.Live_IsUserSignedInToLive						= 0x7FF6B0D9E0E0;	// LUI_CoD_LuaCall_IsUserSignedInToDemonware
			_adr.Live_OnlineServicesFence_GetState				= 0x7FF6B0077B30;	// LUI_CoD_LuaCall_OnlineServicesGetState
			_adr.Live_SyncOnlineDataFence_GetState				= 0x7FF6B0078C40;	// LUI_CoD_LuaCall_ShouldBeInOnlineArea -> j_LUI_CoD_LuaCall_ShouldBeInOnlineArea

			_adr.j_LUI_CoD_LuaCall_ShouldBeInOnlineArea			= 0x7FF6B3736780;	// LUI_CoD_LuaCall_ShouldBeInOnlineArea
			_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware		= 0x7FF6B36E0760;	// LUI_CoD_LuaCall_IsUserSignedInToDemonware
			_adr.LUI_CoD_LuaCall_IsBattleNetAuthReady			= 0x7FF6B36F8620;	// LUI_CoD_LuaCall_IsBattleNetAuthReady
			_adr.LUI_COD_LuaCall_IsBattleNetLanOnly				= 0x7FF6B36E8B40;	// LUI_COD_LuaCall_IsBattleNetLanOnly
			_adr.LUI_COD_LuaCall_IsBattleNet					= 0x7FF6B36E8820;	// LUI_COD_LuaCall_IsBattleNet
			_adr.LUI_CoD_LuaCall_StatsResetGetState				= 0x7FF6B38A6260;	// LUI_CoD_LuaCall_StatsResetGetState
			_adr.LUI_CoD_LuaCall_IsUserSignedInToLive			= 0x7FF6B36E0660;	// 
			_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware		= 0x7FF6B36E0760;	// 
			
			_adr.LUI_ReportError								= 0x7FF6B3640DF0;	// 48 89 5C 24 ?? 48 89 74 24 ?? 57 48 83 EC ?? 48 8B FA 45 33 C0
			_adr.lua_tolstring									= 0x7FF6B3FC0450;	// 48 89 5C 24 ?? 48 89 74 24 ?? 57 48 83 EC ?? 49 8B F8 8B DA 48 8B F1
			
			_adr.LUI_LuaCall_LUIGlobalPackage_DebugPrint		= 0x7FF6B363D8E0;	// DebugPrint
			
			_adr.Dvar_SetBool_Internal							= 0x7FF6B0D626E0;	// LUA_MENU/PATCH_UPDATE_SUCCESS

			_adr.DDL_Lookup_MoveToNameHash						= 0x7FF6B3F8A8F0;	// 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 45 8B D1 49 8B F0 48 8B DA 4C 8B D9 48 85 C9 0F 84
			
			_adr.LUIMethod_LUIGlobalPackage_list				= 0x7FF6CD96A330;	// 48 8B 1D ?? ?? ?? ?? 48 8B 3D ?? ?? ?? ?? 89 05
			_adr.LUI_COD_LuaCall_HasActiveLocalClient			= 0x7FF6B36EA470;	// LUI_COD_LuaCall_HasActiveLocalClient
			_adr.LUI_CoD_LuaCall_GetBattleNetConnectionState	= 0x7FF6B36F5150;	// LUI_CoD_LuaCall_GetBattleNetConnectionState
			_adr.LuaShared_LuaCall_IsDevelopmentBuild			= 0x7FF6B3627670;	// LuaShared_LuaCall_IsDevelopmentBuild
			_adr.LuaShared_LuaCall_IsConsoleGame				= 0x7FF6B36276F0;	// LuaShared_LuaCall_IsConsoleGame
			_adr.lua_pushnumber									= 0x7FF6B3FBFC00;	// LUI_CoD_LuaCall_GetBattleNetConnectionState
			_adr.lua_pushinteger								= 0x7FF6B3FBFAE0;	// LUI_CoD_LuaCall_OnlineServicesGetState
			_adr.file_fopen										= 0x7FF6B41995BC;	// luaL_loadfile
			_adr.file_fclose									= 0x7FF6B41999FC;	// luaL_loadfile
			_adr.luaL_loadbuffer								= 0x7FF6B3FC5890;	// 4C 8B DC 53 57 48 81 EC ?? ?? ?? ?? 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 84 24 ?? ?? ?? ?? 4D 85 C9
			_adr.unk_EncryptionKey								= 0x7FF6CD96A370;	// 48 33 15 ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 8B 57
			_adr.luaL_openlib									= 0x7FF6B3FC3A10;	// 48 89 5C 24 ?? 55 56 41 56 48 83 EC ?? 48 8B 41
			_adr.LiveStorage_GetActiveStatsSource				= 0x7FF6B0721390;	// ddl/mp/cpdata.ddl
			_adr.DB_FindXAssetHeader							= 0x7FF6B057B8C0;	// E8 ?? ?? ?? ?? 44 8B C5 8D 4D
			_adr.DB_LoadXFile									= 0x7FF6B05788B0;	// E8 ?? ?? ?? ?? 8B F8 33 ED 40 38 B3
			_adr.luaL_loadfile									= 0x7FF6B3FC5A20;	// 40 53 57 48 81 EC ?? ?? ?? ?? 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 84 24 ?? ?? ?? ?? 48 8B 41
			_adr.CL_Mgr_IsControllerActive						= 0x7FF6AFB23D20;	// LUI_CoD_LuaCall_SetDesiredLobbyTeamSelection
			_adr.CL_Mgr_GetClientFromController					= 0x7FF6AFB23B90;	// LUI_CoD_LuaCall_SetDesiredLobbyTeamSelection
			_adr.Com_DDL_LoadAsset								= 0x7FF6B3F88080;	// ddl/mp/playerdata.ddl
			_adr.LiveStorage_GetPlayerDataBufferForSource		= 0x7FF6B0723550;	// ddl/mp/playerdata.ddl
			_adr.LiveStorage_BeginGame							= 0x7FF6B0727D40;	// playerdata_available
			
			
			_adr.Load_ScriptFile								= 0x7FF6AFCC80B0;
			_adr.DB_PatchMem_PushAsset							= 0x7FF6AFC467D0;
			_adr.Load_Stream									= 0x7FF6B0584200;
			_adr.DB_PushStreamPos								= 0x7FF6B0583DF0;
			_adr.Load_XString									= 0x7FF6AFC997C0;
			_adr.DB_PopStreamPos								= 0x7FF6B0583D40;
			_adr.DB_PatchMem_PopAsset							= 0x7FF6AFC465A0;
			_adr.DB_ReadXFile									= 0x7FF6B05796F0;
			_adr.Load_ConstCharArray							= 0x7FF6AFC97650;
			_adr.Load_byteArray									= 0x7FF6AFC99C00;
			_adr.varScriptFile									= 0x7FF6B8997A40;
			_adr.varXString										= 0x7FF6B8996240;
			_adr.varConstChar									= 0x7FF6B8996230;
			_adr.varbyte										= 0x7FF6B8996060;
			_adr.AllocLoad_ConstChar							= 0x7FF6AFC956E0;
			_adr.AllocLoad_byte									= 0x7FF6AFC959E0;
			_adr.g_streamPosGlob_pos							= 0x7FF6C8EA1F20;
		}
		break;
	}
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// XAsset
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Find the XAsset header in the database (execute the function)
// ja : データベースからXAssetのヘッダーを探す ( 関数を実行する )
//++++++++++++++++++++++++++++++
XAssetHeader DB_FindXAssetHeader_f(XAssetType type, const char* given_name, int allow_create_default)
{
	auto func = reinterpret_cast<XAssetHeader(*)(XAssetType type, const char* given_name, int allow_create_default)>(CalcPtr(_adr.DB_FindXAssetHeader));
	return func(type, given_name, allow_create_default);
}



//++++++++++++++++++++++++++++++
// en : Find the XAsset header in the database ( for detour )
// ja : データベースからXAssetのヘッダーを探す ( ディトール用 )
//++++++++++++++++++++++++++++++
XAssetHeader DB_FindXAssetHeader_d(XAssetType type, const char* given_name, int allow_create_default)
{
	auto res = _hooks.DB_FindXAssetHeader_h.stub<XAssetHeader>(type, given_name, allow_create_default);

	if (res.data != nullptr)
	{
		//NotifyMsg("[Notice] <DB_FindXAssetHeader> Find asset : %d' - %s'\n", type, given_name);
	}

	if (type == XAssetType::ASSET_TYPE_LOCALIZE && res.data != nullptr)
	{
		//NotifyMsg("[Notice] <DB_FindXAssetHeader> Find asset : %d' - %s'\n", type, given_name);
		//res.localize->value = localize_string(given_name, res.localize->value);
		if (!_loadMainMenu)
		{
			if (strcmp(given_name, "MENU/STATUS") == 0)
			{
				NotifyMsg("[Notice] <DB_FindXAssetHeader> Find asset : %d' - %s'\n", type, given_name);
				//GeneralPatches();
				//NotifyMsg("** Success ** <DB_FindXAssetHeader> Stats loaded!\n");
				_loadMainMenu = true;
			}
		}
	}

	return res;
}



//++++++++++++++++++++++++++++++
// en : Loading XAsset files from a database ( for detour )
// ja : データベースからXAssetファイルをロードする ( ディトール用 )
//++++++++++++++++++++++++++++++
int DB_LoadXFile_d(const char* zone_name, XZoneMemory* zone_mem, XAssetList* asset_list, unsigned int zone_flags, bool was_paused, DB_FastFileFailureMode failure_mode, DB_AuthSignature* out_signature)
{
	NotifyMsg("[Notice] <DB_LoadXFile> Loading FastFile '%s'\n", zone_name == nullptr ? "<null>" : zone_name);

	int res = _hooks.DB_LoadXFile_h.stub<int>(zone_name, zone_mem, asset_list, zone_flags, was_paused, failure_mode, out_signature);
	if (res != 0)
	{
		NotifyMsg("** Failed ** <DB_LoadXFile> FastFile '%s' with non-zero code '%d'\n", zone_name == nullptr ? "<null>" : zone_name, res);
	}
	return res;
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// LUI
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Sends numerical information to the LUA state
// ja : LUA状態に対して数値情報を送信する
//++++++++++++++++++++++++++++++
void lua_pushinteger(lua_State* L, int n)
{
	auto func = reinterpret_cast<void(*)(lua_State * L, int n)>(CalcPtr(_adr.lua_pushinteger));
	func(L, n);
}



//++++++++++++++++++++++++++++++
// en : Sends bool information to the LUA state
// ja : LUA状態に対してbool情報を送信する
//++++++++++++++++++++++++++++++
void lua_pushboolean(lua_State* luaVM, int boolean)
{
	auto func = reinterpret_cast<void(*)(lua_State * luaVM, int boolean)>(CalcPtr(_adr.lua_pushboolean));
	func(luaVM, boolean);
}



//++++++++++++++++++++++++++++++
// en : Get a string from a LUA state
// ja : LUA状態から文字列を取得する
//++++++++++++++++++++++++++++++
const char* lua_tolstring(lua_State* lua_vm, int idx, std::size_t* len)
{
	auto func = reinterpret_cast<const char* (*)(lua_State * lua_vm, int idx, std::size_t * len)>(CalcPtr(_adr.lua_tolstring));
	return func(lua_vm, idx, len);
}



//++++++++++++++++++++++++++++++
// en : Displays the LUI debug log in the console log when LUI_LuaCall_LUIGlobalPackage_DebugPrint is called (for detour)
// ja : LUI_LuaCall_LUIGlobalPackage_DebugPrint が呼ばれた時のLUI側のデバッグログをコンソールログに表示する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_LuaCall_LUIGlobalPackage_DebugPrint_d(lua_State* lua_vm)
{
	std::size_t str_sz = 0;
	const char* str = lua_tolstring(lua_vm, 1, &str_sz);

	NotifyMsg("[Debug] <LUI_LuaCall_LUIGlobalPackage_DebugPrint> %s\n", str && str_sz ? std::string(str, str_sz).c_str() : "<null>");
	return _hooks.LUI_LuaCall_LUIGlobalPackage_DebugPrint_h.stub<int>(lua_vm);
}



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_CoD_LuaCall_OfflineDataFetched to send bool true information (for detour)
// ja : LUI_CoD_LuaCall_OfflineDataFetched のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_CoD_LuaCall_OfflineDataFetched_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_COD_LuaCall_IsPremiumPlayer to send bool true information (for detour)
// ja : LUI_COD_LuaCall_IsPremiumPlayer のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_COD_LuaCall_IsPremiumPlayer_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_CoD_LuaCall_IsLocalPlayAllowed to send bool true information (for detour)
// ja : LUI_CoD_LuaCall_IsLocalPlayAllowed のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_CoD_LuaCall_IsLocalPlayAllowed_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Displays stack trace errors that occur on the LUI in the console log (for detour)
// ja : LUI上で発生したスタックトレースエラーをコンソールログに表示する ( ディトール用 )
//++++++++++++++++++++++++++++++
void LUI_ReportError_d(const char* error, lua_State* lua_vm)
{
	std::size_t str_sz = 0;
	const char* str = lua_tolstring(lua_vm, 1, &str_sz);

	NotifyMsg("[Error!!] <LUI_ReportError> %s -> %s\n", (error ? error : "<null>"), ((str && str_sz) ? std::string(str, str_sz).c_str() : "<null>"));
	_hooks.LUI_ReportError_h.stub<void>(error, lua_vm);
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// LUI ( Currently unused )
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Forces the LUA state to send bool true information (for jump hooks)
// ja : LUA状態に対して強制的に bool true 情報を送信する ( ジャンプフック用 )
//++++++++++++++++++++++++++++++
int lua_pushboolean_return_true_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Opening the LUA Library (execute the function)
// ja : LUI一般パッケージリストを読み取る ( 関数を実行する )
//++++++++++++++++++++++++++++++
void LUIMethod_LUIGlobalPackage_list_f()
{
	LUIMethod<void>* cmd = (LUIMethod<void>*)CalcPtr(_adr.LUIMethod_LUIGlobalPackage_list);
	while (cmd)
	{
		auto func_name = cmd->get_name((std::uint64_t*)CalcPtr(_adr.unk_EncryptionKey));
		if (func_name)
		{
			NotifyMsg("[Notice] <LUIMethod_LUIGlobalPackage_list> Get LUI Function %s.\n", func_name);

			//if (strcmp("DebugPrint", func_name) == 0)
			//{
			//	uintptr_t func_addr = reinterpret_cast<uintptr_t>((cmd->func_));
			//	_hooks.LUI_LuaCall_LUIGlobalPackage_DebugPrint_h.create(func_addr, LUI_LuaCall_LUIGlobalPackage_DebugPrint_d);
			//	NotifyMsg("[Success] <LUIMethod_LUIGlobalPackage_list> Success hooked %s.\n", func_name);
			//	//_hookedLuiFunc = true;
			//}
		}
		cmd = cmd->next_;
	}
}



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_COD_LuaCall_HasActiveLocalClient to send bool true information (for detour)
// ja : LUI_COD_LuaCall_HasActiveLocalClient のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_COD_LuaCall_HasActiveLocalClient_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_CoD_LuaCall_StatsResetGetState to send bool true information (for detour)
// ja : LUI_CoD_LuaCall_StatsResetGetState のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_CoD_LuaCall_StatsResetGetState_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LuaShared_LuaCall_IsDevelopmentBuild to send bool true information (for detour)
// ja : LuaShared_LuaCall_IsDevelopmentBuild のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LuaShared_LuaCall_IsDevelopmentBuild_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_CoD_LuaCall_IsUserSignedInToLive to send bool true information (for detour)
// ja : LUI_CoD_LuaCall_IsUserSignedInToLive のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_CoD_LuaCall_IsUserSignedInToLive_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LuaShared_LuaCall_IsConsoleGame to send bool true information (for detour)
// ja : LuaShared_LuaCall_IsConsoleGame のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LuaShared_LuaCall_IsConsoleGame_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_COD_LuaCall_IsBattleNetLanOnly to send bool true information (for detour)
// ja : LUI_COD_LuaCall_IsBattleNetLanOnly のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_COD_LuaCall_IsBattleNetLanOnly_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_CoD_LuaCall_IsBattleNetAuthReady to send bool true information (for detour)
// ja : LUI_CoD_LuaCall_IsBattleNetAuthReady のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_CoD_LuaCall_IsBattleNetAuthReady_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_CoD_LuaCall_IsGameModeAllowed to send bool true information (for detour)
// ja : LUI_CoD_LuaCall_IsGameModeAllowed のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_CoD_LuaCall_IsGameModeAllowed_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_CoD_LuaCall_IsGameModeAvailable to send bool true information (for detour)
// ja : LUI_CoD_LuaCall_IsGameModeAvailable のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_CoD_LuaCall_IsGameModeAvailable_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_CoD_LuaCall_IsConnectedToGameServer to send bool true information (for detour)
// ja : LUI_CoD_LuaCall_IsConnectedToGameServer のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_CoD_LuaCall_IsConnectedToGameServer_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_COD_LuaCall_IsBattleNet to send bool true information (for detour)
// ja : LUI_COD_LuaCall_IsBattleNet のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_COD_LuaCall_IsBattleNet_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_CoD_LuaCall_IsUserSignedInToDemonware to send bool true information (for detour)
// ja : LUI_CoD_LuaCall_IsUserSignedInToDemonware のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LUI_CoD_LuaCall_IsUserSignedInToDemonware_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LuaShared_LuaCall_IsDemoBuild to send bool true information (for detour)
// ja : LuaShared_LuaCall_IsDemoBuild のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LuaShared_LuaCall_IsDemoBuild_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Forces the LUA state of LUI_CoD_LuaCall_ShouldBeInOnlineArea to send bool true information (for detour)
// ja : LUI_CoD_LuaCall_ShouldBeInOnlineArea のLUA状態に対して強制的に bool true 情報を送信する ( ディトール用 )
//++++++++++++++++++++++++++++++
int j_LUI_CoD_LuaCall_ShouldBeInOnlineArea_d(lua_State* luaVM) { lua_pushboolean(luaVM, 1); return 1; }



//++++++++++++++++++++++++++++++
// en : Loads the buffer data of a LUA file (for detour)
// ja : LUAファイルのバッファーデータをロードする ( ディトール用 )
//++++++++++++++++++++++++++++++
int luaL_loadbuffer_d(lua_State* s, const char* buf, size_t size, const char* name)
{
	std::string luapath = name;
	ReplaceAll(luapath, "/", "\\");
	std::string lua_path = _documentPath + "\\dumpdata\\lua\\" + luapath.c_str();

	size_t lastSlash = lua_path.find_last_of("\\");
	if (lastSlash != std::string::npos && isSubStr(lua_path, "\\"))
	{
		std::string directory = lua_path.substr(0, lastSlash);
		std::filesystem::create_directories(directory);
	}

	NotifyMsg("[Debug] <luaL_loadbuffer> name = %s\n", name);

	return _hooks.luaL_loadbuffer_h.stub<int>(s, buf, size, name);
}



//++++++++++++++++++++++++++++++
// en : Loads the buffer data of a LUA file (execute the function)
// ja : LUAファイルのバッファーデータをロードする ( 関数を実行する )
//++++++++++++++++++++++++++++++
int luaL_loadbuffer_f(lua_State* s, const char* buf, size_t size, const char* name)
{
	auto func = reinterpret_cast<int(*)(lua_State * s, const char* buf, size_t size, const char* name)>(CalcPtr(_adr.luaL_loadbuffer));
	return func(s, buf, size, name);
}



//++++++++++++++++++++++++++++++
// en : Dumping LUA files onto your PC disk
// ja : LUAファイルをPCディスク上にダンプする
//++++++++++++++++++++++++++++++
void ExtractLuaScript(const char* file)
{
	LuaFile* temp = DB_FindXAssetHeader_f(XAssetType::ASSET_TYPE_LUAFILE, file, 0).luaFile;
	
	if (temp == nullptr)
	{
		NotifyMsg("[Failed] <ExtractLuaScript> Failed to find luafile from db_header : %s\n", file);
	}
	else
	{
		std::string luapath = file;
		ReplaceAll(luapath, "/", "\\");
		std::string lua_path = _documentPath + "\\dumpdata\\lua\\" + luapath.c_str();

		size_t lastSlash = lua_path.find_last_of("\\");
		if (lastSlash != std::string::npos && isSubStr(lua_path, "\\"))
		{
			std::string directory = lua_path.substr(0, lastSlash);
			std::filesystem::create_directories(directory);
		}

		std::ofstream luafiledump(lua_path, std::ios::out | std::ios::binary);
		if (!luafiledump.is_open())
		{
			NotifyMsg("[Failed] <ExtractLuaScript> Failed to open output file: %s\n", lua_path.c_str());
			return;
		}


		// ZLib定義
		z_stream stream = {};
		stream.zalloc = Z_NULL;
		stream.zfree = Z_NULL;
		stream.opaque = Z_NULL;
		
		// 初期化
		if (inflateInit(&stream) != Z_OK)
		{
			NotifyMsg("[Failed] <ExtractLuaScript> inflateInit failed for %s\n", file);
			luafiledump.close();
			return;
		}
		
		// 入力データ
		stream.avail_in = temp->len;
		stream.next_in = (Bytef*)temp->buffer;
		
		// 出力バッファ（十分なサイズを確保するために適当な初期サイズ、必要に応じて調整）
		const size_t outBufferSize = temp->len * 4;
		std::vector<char> outBuffer(outBufferSize);
		stream.avail_out = outBufferSize;
		stream.next_out = (Bytef*)outBuffer.data();
		
		// 解凍
		int ret = inflate(&stream, Z_FINISH);
		if (ret != Z_STREAM_END)
		{
			NotifyMsg("[Failed] <ExtractLuaScript> ZLib decompression failed for %s: %s\n", file, stream.msg ? stream.msg : "Unknown error");
			inflateEnd(&stream);
			luafiledump.close();
			return;
		}
		
		
		// 解凍データをファイルに書き込み
		luafiledump.write(outBuffer.data(), outBufferSize - stream.avail_out);
		
		// 後処理
		inflateEnd(&stream);


		luafiledump.close();
		
		NotifyMsg("[Success] <ExtractLuaScript> Lua file dumped successfully: %s\n", lua_path.c_str());
	}
}



//++++++++++++++++++++++++++++++
// en : Loading a custom LUA file
// ja : カスタムLUAファイルをロードする
//++++++++++++++++++++++++++++++
void LoadCustomLua(lua_State* s, const char* file)
{
	std::string custom_code = "";

	std::string luapath = file;
	ReplaceAll(luapath, "/", "\\");
	std::string lua_path = _documentPath + "\\customassets\\lua\\" + luapath.c_str();

	std::ifstream lua_file(lua_path);
	if (lua_file.is_open())
	{
		std::string line;
		while (std::getline(lua_file, line))
		{
			custom_code += line + "\n";
		}
		lua_file.close();
	}
	else
	{
		// NotifyMsg("[Notice] <luaL_loadfile> Loaded official Lua script : %s\n", file);
	}

	if (0 < custom_code.size())
	{
		luaL_loadbuffer_f(s, custom_code.c_str(), custom_code.size(), file);
		NotifyMsg("[Success] <luaL_loadfile> Injecting custom Lua code from file : %s\n", lua_path.c_str());
	}

	return;
	ExtractLuaScript(file);
}



//++++++++++++++++++++++++++++++
// en : Loading a custom LUA file (for detour)
// ja : LUAファイルをロードする ( ディトール用 )
//++++++++++++++++++++++++++++++
int luaL_loadfile_d(lua_State* s, const char* file_name)
{
	auto res = _hooks.luaL_loadfile_h.stub<int>(s, file_name);
	//NotifyMsg("[Notice] <luaL_loadfile> Loading LuaFile '%s'\n", (file_name != nullptr) ? file_name : "<null>");
	if (file_name != nullptr)
	{
		LoadCustomLua(s, file_name);
	}
	return res;
}



//++++++++++++++++++++++++++++++
// en : Opening the LUA Library (for detour)
// ja : LUAライブラリを開く ( ディトール用 )
//++++++++++++++++++++++++++++++
void luaL_openlib_d(lua_State* s, const char* lib_name, const luaL_Reg* l, unsigned int n_up)
{
	if (lib_name != nullptr)
	{
		for (luaL_Reg* f = const_cast<luaL_Reg*>(l); f; ++f)
		{
			if (f->name_ == nullptr)
			{
				break;
			}

			std::string full_name = std::format("{}.{}", lib_name, f->name_);
			uintptr_t func_addr = reinterpret_cast<uintptr_t>(f->func_);
			//NotifyMsg("[Notice] <luaL_openlib> Get LUI Function %s.\n", full_name.c_str());

			/*
			if (strcmp("Engine.HDGDBCJFG", full_name.c_str()) == 0)
			{
				LuaShared_LuaCall_IsConsoleGame_h.create(func_addr, LuaShared_LuaCall_IsConsoleGame_d);
				NotifyMsg("[Success] <luaL_openlib> Success hooked %s.\n", full_name.c_str());
				_hookedLuiFunc = true;
			}
			else if (strcmp("Engine.BBHAECABBD", full_name.c_str()) == 0)
			{
				LUI_COD_LuaCall_HasActiveLocalClient_h.create(func_addr, LUI_COD_LuaCall_HasActiveLocalClient_d);
				NotifyMsg("[Success] <luaL_openlib> Success hooked %s.\n", full_name.c_str());
				_hookedLuiFunc = true;
			}
			else if (strcmp("Engine.CEEDFDDICC", full_name.c_str()) == 0)
			{
				LUI_CoD_LuaCall_StatsResetGetState_h.create(func_addr, LUI_CoD_LuaCall_StatsResetGetState_d);
				NotifyMsg("[Success] <luaL_openlib> Success hooked %s.\n", full_name.c_str());
				_hookedLuiFunc = true;
			}
			else if (strcmp("Engine.BHICADFIHA", full_name.c_str()) == 0)
			{
				LuaShared_LuaCall_IsDevelopmentBuild_h.create(func_addr, LuaShared_LuaCall_IsDevelopmentBuild_d);
				NotifyMsg("[Success] <luaL_openlib> Success hooked %s.\n", full_name.c_str());
				_hookedLuiFunc = true;
			}*/
		}
	}

	return _hooks.luaL_openlib_h.stub<void>(s, lib_name, l, n_up);
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// XUID
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Returns a random number within a specified range.
// ja : 指定した範囲内からランダムで数値を返す
//++++++++++++++++++++++++++++++
int I_irand(int min, int max)
{
	auto func = reinterpret_cast<int(*)(int min, int max)>(CalcPtr(_adr.I_irand));
	return func(min, max);
}



//++++++++++++++++++++++++++++++
// en : Gets the current system microseconds
// ja : 現在のシステムのマイクロ秒を取得する
//++++++++++++++++++++++++++++++
unsigned __int64 Sys_Microseconds()
{
	auto func = reinterpret_cast<unsigned __int64(*)(void)>(CalcPtr(_adr.Sys_Microseconds));
	return func();
}



//++++++++++++++++++++++++++++++
// en : Get a random seed value
// ja : シード値をランダムで取得する
//++++++++++++++++++++++++++++++
unsigned int* GetRandSeed()
{
	auto func = reinterpret_cast<unsigned int* (*)(void)>(CalcPtr(_adr.GetRandSeed));
	return func();
}



//++++++++++++++++++++++++++++++
// en : Generate a random XUID
// ja : XUIDをランダムに生成する
//++++++++++++++++++++++++++++++
XUID* XUID::RandomXUID()
{
	unsigned int* RandSeed;
	unsigned int BackupRandSeed;
	this->m_id = 0;
	RandSeed = GetRandSeed();
	BackupRandSeed = *RandSeed;
	*RandSeed = Sys_Microseconds();
	this->m_id = I_irand(1, 0x7FFFFFFF);
	*RandSeed = BackupRandSeed;
	return this;
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// Dvar
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Register a Boolean Dvar (for detour)
// ja : Bool型Dvarを登録する ( ディトール用 )
//++++++++++++++++++++++++++++++
dvar_t* Dvar_RegisterBool_d(const char* dvar_name, bool value, unsigned int flags, const char* description)
{
	static std::map<std::pair<std::string, std::string>, bool> dvars_to_patch =
	{
		//{ { "force_offline_menus", "LSTQOKLTRN" }, true },
		//{ { "force_offline_enabled", "MPSSOTQQPM" }, true },
		//{ { "fastfileAltLaunch", "MPNRKLKOKR" }, true }, // When enabled, we load the 'alt' set of fastfiles. Intended for the launch chunks
		//{ { "lui_enable_stats_reset", "MPTMQQNLNT" }, true }, // Enables stats reset on bad file version

		//{ { "onlinegame", "LTSNLQNRKO" }, true },
		//{ { "cg_drawBuildName", "LSSSQMQPNL" }, true },
		//{ { "cg_drawFastfileDebugInfo", "MOSSSSTTNL" }, true },
		//{ { "cg_drawFPS", "OLNTNRTPPL" }, true },
		//{ { "cg_drawFrontendSceneDebugInfo", "OMPMKKTORN" }, true },
		//{ { "cg_viewedSplashScreen", "MLNMPQOON" }, true },
		//{ { "cl_waterMarkEnabled", "LRKNROSQPM" }, true },
		//{ { "con_bindableGrave", "OKLQKPPKPQ" }, false },
		//{ { "con_minicon", "LMSLLSMONN" }, true },
		{ { "lui_dev_features_enabled"									, "LSSRRSMNMR"	}, true },
		{ { "force_offline_menus"										, "LSTQOKLTRN"	}, true },
		//{ { "force_offline_enabled"										, "MPSSOTQQPM"	}, true },
		
		{ { "xblive_loggedin"											, "LLOKQOSPPP"	}, true },
		
		//	{ { "systemlink_host"											, "LLPNKKORPT"	}, true }, // Local client is hosting system link game
		//	{ { "systemlink"												, "LPSPMQSNPQ"	}, true },
		//	{ { "com_lan_lobby_enabled"										, "LPNMMPKRL"	}, true },
		//	{ { "com_force_premium"											, "MROLPRPTPO"	}, true },
		//	{ { "onlinegame"												, "LTSNLQNRKO"	}, true },
		//	{ { "online_lan_cross_play"										, "LTOQRQMMLQ"	}, true },
		//	{ { "con_minicon"												, "LMSLLSMONN"	}, true },
		//	{ { "lui_enable_stats_reset"									, "MPTMQQNLNT"	}, true }, // Enables stats reset on bad file version
		//	{ { "cg_drawBuildName"											, "LSSSQMQPNL"	}, true },
		//	{ { "cg_drawFastfileDebugInfo"									, "MOSSSSTTNL"	}, true },
		//	{ { "cg_drawFPS"												, "OLNTNRTPPL"	}, true },
		//	{ { "cg_drawFrontendSceneDebugInfo"								, "OMPMKKTORN"	}, true },
		//	{ { "cl_waterMarkEnabled"										, "LRKNROSQPM"	}, true },
		//	{ { "lui_wz_tutorial_optional"									, "LSPSKLPNQT"	}, true },
		//	{ { "com_checkIfGameModeInstalled"								, "RLSPOOTTT"	}, false },
		//	{ { "online_challenge_fence_enabled"							, "LKQRNQSSQS"	}, false }, // Enable challenge fence
		//	{ { "online_anticheat_should_com_error_if_mp_or_cp_banned"		, "OLMKQPQOM"	}, false }, // Control if the frame should run that checks MP or CP feature bans.
		//	{ { "online_anticheat_should_main_menu_fence_fail_if_mp_banned"	, "LNSPMQMSS"	}, false }, // Local client is hosting system link game
		//	{ { "fastfileAltLaunch"											, "MPNRKLKOKR"	}, false }, // When enabled, we load the 'alt' set of fastfiles. Intended for the launch chunks
		//	{ { "ui_onlineRequired"											, "MTSTMKPMRM"	}, false },
		//	{ { "lui_force_online_menus"									, "LMMRONPQMO"	}, false },
		//	{ { "lui_cod_points_enabled"									, "LNTOKPTKS"	}, false },
		
		//{ { "lui_enable_magma_blade_layout", "LRKPTLNQTT" }, false },
		//{ { "lui_force_online_menus", "LMMRONPQMO" }, false },
		//{ { "online_lan_cross_play", "LTOQRQMMLQ" }, true },
		//{ { "ui_onlineRequired", "MTSTMKPMRM" }, false }
	};


	//NotifyMsg("[Notice] <Dvar_RegisterBool> Registering Dvar '%s'\n", dvar_name);

	bool value_patched = value;
	std::uint32_t flags_patched = flags;
	for (const auto& [names, val] : dvars_to_patch)
	{
		if (names.second == dvar_name)
		{
			const char* disclaimer = "";
			if (value_patched == val)
			{
				disclaimer = " - unnecessary";
			}
			NotifyMsg("[Success] <Dvar_RegisterBool> Patched '%s' -> %s %s\n", names.first.c_str(), val ? "true" : "false", disclaimer);
			value_patched = val;
		}
	}

	if (strcmp(dvar_name, "LPSPMQSNPQ") == 0)
	{
		//NotifyMsg("[Success] <Dvar_RegisterBool> Patched 'systemlink'\n");
		//value_patched = true;
		//flags_patched = 0x80;
	}

	return _hooks.Dvar_RegisterBool_h.stub<dvar_t*>(dvar_name, value_patched, flags_patched, description);
}



//++++++++++++++++++++++++++++++
// en : Sets the Boolean Dvar to the specified state internally.
// ja : Bool型Dvarを指定の状態に内部的に設定する
//++++++++++++++++++++++++++++++
bool Dvar_SetBool_Internal_f(dvar_t** dvar, bool setFlag, int setValue, const char* fmt)
{
	if (!dvar || !*dvar)
	{
		NotifyMsg("<Error> Invalid dev data '%s' pointer\n", fmt);
		return false;
	}

	uintptr_t Adr_Dvar_SetBool_Internal = CalcPtr(_adr.Dvar_SetBool_Internal);

	auto Dvar_SetBool_Internal = reinterpret_cast<void(*)(dvar_t * dvar, bool value, int setSource)>(Adr_Dvar_SetBool_Internal);

	if (!Dvar_SetBool_Internal)
	{
		NotifyMsg("<Error> Invalid 'write dev data' function pointer\n");
		return false;
	}

	try
	{
		Dvar_SetBool_Internal(*dvar, setFlag, setValue);
		if (setFlag)
		{
			NotifyMsg("<OK> Successfully set dev data '%s' to true\n", fmt);
		}
		else
		{
			NotifyMsg("<OK> Successfully set dev data '%s' to false\n", fmt);
		}
	}
	catch (...)
	{
		NotifyMsg("<Error> Exception occurred while setting dev data '%s'\n", fmt);
		return false;
	}

	return true;
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// DDL ( Currently unused )
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Look up a hash from a DDL name (for detour)
// ja : DDL名からハッシュを参照する
//++++++++++++++++++++++++++++++
void DDL_Lookup_MoveToNameHash_d(const DDLState* fromState, DDLState* toState, const char* name, unsigned int nameHash, bool suppressErrors)
{
	NotifyMsg("[Notice] <DDL_Lookup_MoveToNameHash> DDL name %s | hash %u | supErr %s\n", name, nameHash, (suppressErrors ? "true" : "false"));
	_hooks.DDL_Lookup_MoveToNameHash_h.stub<void>(fromState, toState, name, nameHash, suppressErrors);
}



//++++++++++++++++++++++++++++++
// en : Loading DDL Assets (for detour)
// ja : DDLアセットをロードする（ディトール用）
//++++++++++++++++++++++++++++++
DDLFile* Com_DDL_LoadAsset_d(const char* fileName)
{
	DDLFile* result = _hooks.Com_DDL_LoadAsset_h.stub<DDLFile*>(fileName);
	NotifyMsg("[Notice] <Com_DDL_LoadAsset> %s = %s\n", fileName, ((result != 0) ? "exist" : "null"));
	return result;
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// GSC Injection
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Dump the script file onto the PC disk
// ja : スクリプトファイルをPCディスク上にダンプする
//++++++++++++++++++++++++++++++
void dump_gsc_script(std::ofstream& stream, ScriptFile* scriptfile)
{
	std::string buffer;
	buffer.append(scriptfile->name, strlen(scriptfile->name) + 1);

	buffer.append(reinterpret_cast<char*>(&scriptfile->compressedLen), 4);
	buffer.append(reinterpret_cast<char*>(&scriptfile->len), 4);
	buffer.append(reinterpret_cast<char*>(&scriptfile->bytecodeLen), 4);
	buffer.append(scriptfile->buffer, scriptfile->compressedLen);
	buffer.append((char*)scriptfile->bytecode, scriptfile->bytecodeLen);

	stream << buffer;
}



//++++++++++++++++++++++++++++++
// en : Loading a script file (for detour)
// ja : スクリプトファイルをロードする ( ディトール用 )
//++++++++++++++++++++++++++++++
void Load_ScriptFile_d(DBStreamStart streamStart)
{
	//NotifyMsg("[Notice] <Load_ScriptFile> ");

    // ========================================================================================== //
    // for Dump
    // ========================================================================================== //

    if (_dumpGSC)
    {
		_hooks.Load_ScriptFile_h.stub<void>(streamStart);

        ScriptFile** varScriptFile = reinterpret_cast<ScriptFile**>(CalcPtr(_adr.varScriptFile));

        ScriptFile* scriptfile = *varScriptFile;

        std::string directory;

        std::string scriptFileStr = "";
        if (isSubStr(scriptfile->name, ".gsc"))
        {
            scriptFileStr = _documentPath + "\\dumpdata\\gsc\\" + std::string(scriptfile->name) + "bin";
        }
        else
        {
            scriptFileStr = _documentPath + "\\dumpdata\\gsc\\" + std::string(scriptfile->name) + ".gscbin";
        }

        ReplaceAll(scriptFileStr, "/", "\\");
		//NotifyMsg("path '%s' -> ", scriptFileStr.c_str());

        size_t lastSlash = scriptFileStr.find_last_of("\\");
        if (lastSlash != std::string::npos && isSubStr(scriptFileStr, "\\"))
        {
            directory = scriptFileStr.substr(0, lastSlash);

            std::filesystem::create_directories(directory);
        }

        std::ofstream gscbin_file(scriptFileStr, std::ios::out | std::ios::binary);
        if (gscbin_file.is_open())
        {
			//NotifyMsg("gsc dumped!");
			NotifyMsg("[Sucess] <Load_ScriptFile> GSCBIN dumped : %s\n", scriptFileStr.c_str());
            dump_gsc_script(gscbin_file, scriptfile);
            gscbin_file.close();
        }
		else
		{
			NotifyMsg("[Failed] <Load_ScriptFile> Failed GSCBIN dump ... : %s\n", scriptFileStr.c_str());
		}
		//NotifyMsg("\n");
    }
    
    // ========================================================================================== //
    // for Inject
    // ========================================================================================== //

    else
    {

	    auto DB_PatchMem_PushAsset	= reinterpret_cast<void(*)(size_t len, ScriptFile *script)>(            CalcPtr( _adr.DB_PatchMem_PushAsset ) );
	    auto Load_Stream			= reinterpret_cast<void(*)(int streamStart, void *ptr, size_t size)>(   CalcPtr( _adr.Load_Stream           ) );
	    auto DB_PushStreamPos		= reinterpret_cast<void(*)(int param_1)>(                               CalcPtr( _adr.DB_PushStreamPos      ) );
	    auto Load_XString			= reinterpret_cast<void(*)(int param_1)>(                               CalcPtr( _adr.Load_XString          ) );
	    auto DB_PopStreamPos		= reinterpret_cast<void(*)(void)>(                                      CalcPtr( _adr.DB_PopStreamPos       ) );
	    auto DB_PatchMem_PopAsset	= reinterpret_cast<void(*)(void)>(                                      CalcPtr( _adr.DB_PatchMem_PopAsset  ) );
	    auto DB_ReadXFile			= reinterpret_cast<void(*)(void *ptr, size_t size)>(                    CalcPtr( _adr.DB_ReadXFile          ) );
	    auto Load_ConstCharArray	= reinterpret_cast<void(*)(void* ptr, size_t size)>(					CalcPtr( _adr.Load_ConstCharArray   ) );
	    auto Load_byteArray			= reinterpret_cast<void(*)(void* ptr, size_t size)>(					CalcPtr( _adr.Load_byteArray        ) );
	    ScriptFile **varScriptFile	= reinterpret_cast<ScriptFile **>(                                      CalcPtr( _adr.varScriptFile         ) );
	    char **varXString			= reinterpret_cast<char **>(                                            CalcPtr( _adr.varXString            ) );
	    char **varConstChar			= reinterpret_cast<char **>(                                            CalcPtr( _adr.varConstChar          ) );
	    char **varbyte				= reinterpret_cast<char **>(                                            CalcPtr( _adr.varbyte               ) );
	    char** AllocLoad_ConstChar	= reinterpret_cast<char **>(										    CalcPtr( _adr.AllocLoad_ConstChar   ) );
	    char** AllocLoad_byte		= reinterpret_cast<char **>(											CalcPtr( _adr.AllocLoad_byte        ) );
        char** g_streamPosGlob_pos = reinterpret_cast<char**>(                                              CalcPtr( _adr.g_streamPosGlob_pos   ) );


        char* backup;
        ScriptFile* scriptfile;


        DB_PatchMem_PushAsset(52, *varScriptFile);
        Load_Stream(streamStart, *varScriptFile, sizeof(ScriptFile));
        DB_PushStreamPos(5);

        char* xStringBackup = *varXString;
        *varXString = reinterpret_cast<char*>(*varScriptFile);
        Load_XString(1);
        *varXString = xStringBackup;
        DB_PushStreamPos(6);


        scriptfile = *varScriptFile;

        backup = *varConstChar;

        std::string filepath = _documentPath + "\\customassets\\gsc\\" + "script.gscbin";
        std::string scriptname = "";
        std::string fixpath = "";
        std::string directory;
        std::string filepathtmp = "";
        bool scriptgscbin = false;
        bool lastScript = false;


        if (scriptfile)
        {
            scriptname = std::string(scriptfile->name);
			//NotifyMsg("GSC '%s' -> ", scriptfile->name);

            if (isSubStr(scriptfile->name, ".gsc"))
            {
                filepath = _documentPath + "\\customassets\\gsc\\" + scriptname + "bin";
            }
            else // numbered scriptfiles like "1892"
            {
                filepath = _documentPath + "\\customassets\\gsc\\" + scriptname + ".gscbin";
            }

            ReplaceAll(filepath, "/", "\\");

            if (file_exists(filepath.c_str()))
            {
				//NotifyMsg("Custom GSC found!");
                scriptgscbin = true;
            }

			//NotifyMsg("\n");

            if (!strcmp(scriptfile->name, "scripts/mp/killstreaks/supply_sweep.gsc"))
            {
                lastScript = true;
            }
            if (!strcmp(scriptfile->name, "scripts/cp/maps/cp_pierro/cp_fake_stealth.gsc"))
            {
                lastScript = true;
            }

            //if (!strcmp(scriptfile->name, "scripts/mp/vehicles/vehicle_damage_mp.gsc") && (currentGame == GameTitle::MW2019_Donetsk))
            //{
            //    lastScript = true;
            //}
            //if (!strcmp(scriptfile->name, "scripts/mp/gametypes/war.gsc") && ( (currentGame == GameTitle::MW2019_138) || (currentGame == GameTitle::MW2019_144) ) )
            //{
            //    lastScript = true;
            //}

        }

        if (scriptgscbin)
        {
            std::ifstream script;
            script.open(filepath, std::ios::binary | std::ios::ate);
            int size = (int)script.tellg();
            script.seekg(0, std::ios::beg);

            char* customScript = new char[size];
            script.read(customScript, size);
            script.seekg(0, std::ios::beg);
        
            while (script.get() != '\0'); // read past the name
            int vars[3] = { 0 };
            script.read((char*)vars, sizeof(int) * 3); //read header info
        

            if (scriptfile->buffer != NULL)
            {
                *varConstChar = *g_streamPosGlob_pos;
                scriptfile->buffer = *varConstChar;

                char* dummyMem = new char[scriptfile->compressedLen];
                DB_ReadXFile(dummyMem, scriptfile->compressedLen);
                delete[scriptfile->compressedLen] dummyMem;

                memmove(*g_streamPosGlob_pos, customScript + (int)script.tellg(), vars[0]);

                *g_streamPosGlob_pos = *g_streamPosGlob_pos + vars[0];
                scriptfile->compressedLen = vars[0];
            }
            *varConstChar = backup;
            scriptfile->len = vars[1];

            DB_PopStreamPos();
            DB_PushStreamPos(6);

            scriptfile = *varScriptFile;
            backup = *varbyte;

            if (scriptfile->bytecode != NULL)
            {
                *varbyte = *g_streamPosGlob_pos;
                scriptfile->bytecode = (unsigned char*)*varbyte;

                char* dummyMem = new char[scriptfile->bytecodeLen];
                DB_ReadXFile(dummyMem, scriptfile->bytecodeLen);
                delete[scriptfile->bytecodeLen] dummyMem;

                memmove(*g_streamPosGlob_pos, customScript + vars[0] + (int)script.tellg(), vars[2]);

                *g_streamPosGlob_pos = *g_streamPosGlob_pos + vars[2];
                scriptfile->bytecodeLen = vars[2];
            }
            *varbyte = backup;

            delete[] customScript;
            script.close();

			NotifyMsg("[Success] <Load_ScriptFile> Custom GSC Injected!! : %s\n", filepath.c_str());
        }
        else
        {
            if (scriptfile->buffer != NULL)
            {
                *varConstChar = *g_streamPosGlob_pos;
                scriptfile->buffer = *varConstChar;
                Load_Stream(0, *varConstChar, scriptfile->compressedLen);
            }
            *varConstChar = backup;

            DB_PopStreamPos();
            DB_PushStreamPos(6);

            scriptfile = *varScriptFile;
            backup = *varbyte;
            if (scriptfile->bytecode != NULL)
            {
                *varbyte = *g_streamPosGlob_pos;
                scriptfile->bytecode = (unsigned char*)*varbyte;
                Load_Stream(0, *varbyte, scriptfile->bytecodeLen);
            }
            *varbyte = backup;

			NotifyMsg("[Notice] <Load_ScriptFile> Official GSC Loaded : %s\n", scriptfile->name);
        }

        DB_PopStreamPos();
        DB_PopStreamPos();
        DB_PatchMem_PopAsset();


        //	if (lastScript)
        //	{
        //	    _isHookLoadScriptFile = false;
        //	    CreateDumpText(gscPath, "gscinjected");
        //	    MW19_MP_Load_ScriptFile.clear();
        //	    DisableHookThread(nullptr, nullptr);
        //	}

    }
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// Authentication
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Get the username (for detour)
// ja : ユーザー名を取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
const char* GetUsername_d() { return _playerName.c_str(); }



//++++++++++++++++++++++++++++++
// en : Get whether you have a content pack (for detour)
// ja : コンテンツパックを持っているかどうかを取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
bool Content_DoWeHaveContentPack_d(int controllerIndex) { return true; }



//++++++++++++++++++++++++++++++
// en : Logs in to the gamer profile with the specified controller index. (execute the function)
// ja : 指定したコントローラーインデックスのゲーマープロフィールに対してログインする ( 関数を実行する )
//++++++++++++++++++++++++++++++
void GamerProfile_LogInProfile(int controller) { reinterpret_cast<void(*)(int)>(CalcPtr(_adr.GamerProfile_LogInProfile))(controller); }



//++++++++++++++++++++++++++++++
// en : Load a saved achievement (execute the function)
// ja : セーブ済み実績をロードする ( 関数を実行する )
//++++++++++++++++++++++++++++++
void LoadSavedAchievements() { reinterpret_cast<void(*)()>(CalcPtr(_adr.LoadSavedAchievements))(); }



//++++++++++++++++++++++++++++++
// en : Get the userdata
// ja : ユーザーデータを取得する
//++++++++++++++++++++++++++++++
XenonUserData* Live_GetUserData(int controllerIndex)
{
	if (_gameTitle == GameTitle::IW8_157)
		return reinterpret_cast<XenonUserData * (*)(int)>(CalcPtr(_adr.Live_GetUserData))(controllerIndex);
	else
		return (XenonUserData*)CalcPtr(_adr.Live_GetUserData);
}



//++++++++++++++++++++++++++++++
// en : Initializes the statistics source for the specified controller index. (execute the function)
// ja : 指定したコントローラーインデックスの統計ソースを初期化する ( 関数を実行する )
//++++++++++++++++++++++++++++++
void LiveStorage_StatsInit(const int controllerIndex, bool clear, bool freshStart, StatsSource statsSource) { reinterpret_cast<void(*)(const int, bool, bool, StatsSource)>(CalcPtr(_adr.LiveStorage_StatsInit))(controllerIndex, clear, freshStart, statsSource); }



//++++++++++++++++++++++++++++++
// en : Reads the statistics source for the specified controller index. (execute the function)
// ja : 指定したコントローラーインデックスの統計ソースを読み取る ( 関数を実行する )
//++++++++++++++++++++++++++++++
void LiveStorage_ReadStats_f(int controllerIndex , StatsSource stats)
{
	NotifyMsg("[Notice] <LiveStorage_ReadStats> called func , idx %d , src %d\n", controllerIndex, stats);
	auto func = reinterpret_cast<void(*)(int controllerIndex, StatsSource stats)>(CalcPtr(_adr.LiveStorage_ReadStats));
	func(controllerIndex, stats);
}



//++++++++++++++++++++++++++++++
// en : Checks if a statistics source exists for the specified controller index. (execute the function)
// ja : 指定したコントローラーインデックスの統計ソースが存在するか確認する ( 関数を実行する )
//++++++++++++++++++++++++++++++
bool LiveStorage_DoWeHaveStatsForSource_f(const int controllerIndex, StatsSource statsSource)
{
	auto func = reinterpret_cast<bool(*)(const int controllerIndex, StatsSource statsSource)>(CalcPtr(_adr.LiveStorage_DoWeHaveStatsForSource));
	bool result = func(controllerIndex, statsSource);
	NotifyMsg("[Notice] <LiveStorage_DoWeHaveStatsForSource> : idx %d , src %s = %s\n", controllerIndex, (statsSource == StatsSource::STATS_ONLINE ? "Online" : "Offline"), (result ? "Exist!" : "None..."));
	return result;
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// Authentication ( Currently unused )
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Get the daemonware logon status (for detour)
// ja : デーモンウェアのログオン状態を取得する（ディトール用）
//++++++++++++++++++++++++++++++
DWOnlineStatus dwGetLogOnStatus_d(int controller_index) { return DWOnlineStatus::DW_LIVE_CONNECTED; }



//++++++++++++++++++++++++++++++
// en : Get the daemonware logon status (for detour)
// ja : デーモンウェアのログオン状態を取得する（ディトール用）
//++++++++++++++++++++++++++++++
char dwLogOnHSM_base_HSM_IsInState_d(uintptr_t component , dwLogOnHSM_base_eHSMStates state) { return 1; }



//++++++++++++++++++++++++++++++
// en : Get whether the user is signed in to the daemonware (for detour)
// ja : ユーザーがデーモンウェアにサインインしているかどうかを取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
bool Live_IsUserSignedInToDemonware_d(int controllerIndex) { return true; }



//++++++++++++++++++++++++++++++
// en : Get whether the user is signed in to the BattleNet (for detour)
// ja : ユーザーがバトルネットにサインインしているかどうかを取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
bool Live_IsUserSignedInToBnet_d(int controllerIndex, int* onlinePlayFailReason) { *onlinePlayFailReason = 0; return true; }



//++++++++++++++++++++++++++++++
// en : Gets whether the game profile is logged in (for detour)
// ja : ゲームプロフィールがログイン済みかどうかを取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
bool GamerProfile_IsProfileLoggedIn_d(int controllerIndex) { return true; }



//++++++++++++++++++++++++++++++
// en : Check if user is signed in (for detour)
// ja : ユーザーがサインインしているかどうかをチェックする（ディトール用）
//++++++++++++++++++++++++++++++
bool Live_IsUserSignedIn_d() { return true; }



//++++++++++++++++++++++++++++++
// en : Get the status of a synchronized online data fence (for detour)
// ja : 同期済みオンラインデータフェンスの状態を取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
int Live_SyncOnlineDataFence_GetState_d(int controllerIndex, int gameMode) { return FenceOnlineServices_CODE_STATE::success; }



//++++++++++++++++++++++++++++++
// en : Get online service fence status (for detour)
// ja : オンラインサービスフェンスの状態を取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
int Live_OnlineServicesFence_GetState_d(const int controllerIndex) { return FenceOnlineServices_CODE_STATE::success; }



//++++++++++++++++++++++++++++++
// en : Get whether the user is signed in or not (for detour)
// ja : サインイン中かどうかを取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
bool Live_IsSignedIn_d() { return true; }



//++++++++++++++++++++++++++++++
// en : Check if user is signed in to live (for detour)
// ja : ユーザーがライブにサインインしているかどうかをチェックする（ディトール用）
//++++++++++++++++++++++++++++++
bool Live_IsUserSignedInToLive_d() { return true; }



//++++++++++++++++++++++++++++++
// en : Gets whether the specified controller index is active. (for detour)
// ja : 指定したコントローラーインデックスがアクティブかどうかを取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
bool CL_Mgr_IsControllerActive_d(const int controllerIndex) { return true; }



//++++++++++++++++++++++++++++++
// en : Gets the client number from the specified controller index (for detour)
// ja : 指定したコントローラーインデックスからクライアント番号を取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
int CL_Mgr_GetClientFromController_d(int controllerIndex) { return 1; }



//++++++++++++++++++++++++++++++
// en : Get active statistics sources (for detour)
// ja : アクティブな統計ソースを取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
int LiveStorage_GetActiveStatsSource_d() { return 1; }



//++++++++++++++++++++++++++++++
// en : Get whether you are in a system link lobby (for detour)
// ja : システムリンクロビーにいるかどうかを取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
int Live_IsInSystemlinkLobby_d() { return 1; }



//++++++++++++++++++++++++++++++
// en : Get translation string from text ID (for detour)
// ja : テキストIDから翻訳文字列を取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
const char* SEH_StringEd_GetString_d(const char* str) { return str; }



//++++++++++++++++++++++++++++++
// en : Get the user's sign-in status
// ja : ユーザーのサインイン状態を取得する
//++++++++++++++++++++++++++++++
uintptr_t Live_GetUserSigninState() { return CalcPtr(_adr.xenonUserData_m_guardedUserData_signinState); }



//++++++++++++++++++++++++++++++
// en : Live storage event at game start (execute the function)
// ja : ゲーム開始時のライブストレージイベント ( 関数を実行する )
//++++++++++++++++++++++++++++++
void LiveStorage_BeginGame_f(LocalClientNum_t localClientNum)
{
	NotifyMsg("[Notice] <LiveStorage_BeginGame> called func , client %d\n", localClientNum == LocalClientNum_t::LOCAL_CLIENT_0 ? 0 : 1);

	auto func = reinterpret_cast<void(*)(LocalClientNum_t localClientNum)>(CalcPtr(_adr.LiveStorage_BeginGame));
	func(localClientNum);
}



//++++++++++++++++++++++++++++++
// en : Live storage event at game start (for detour)
// ja : ゲーム開始時のライブストレージイベント ( ディトール用 )
//++++++++++++++++++++++++++++++
void LiveStorage_BeginGame_d(LocalClientNum_t localClientNum)
{
	NotifyMsg("[Notice] <LiveStorage_BeginGame> called func , client %d\n", localClientNum == LocalClientNum_t::LOCAL_CLIENT_0 ? 0 : 1);
	_hooks.LiveStorage_BeginGame_h.stub<void>(localClientNum);
}



//++++++++++++++++++++++++++++++
// en : Reads the statistics source for the specified controller index. (for detour)
// ja : 指定したコントローラーインデックスの統計ソースを読み取る ( ディトール用 )
//++++++++++++++++++++++++++++++
void LiveStorage_ReadStats_d(int controllerIndex)
{
	NotifyMsg("[Notice] <LiveStorage_ReadStats> called func , idx %d\n", controllerIndex);
	_hooks.LiveStorage_ReadStats_h.stub<void>(controllerIndex);
}



//++++++++++++++++++++++++++++++
// en : Get the player data buffer from the statistics source (for detour)
// ja : 統計ソースからプレイヤーデータバッファーを取得する ( ディトール用 )
//++++++++++++++++++++++++++++++
void LiveStorage_GetPlayerDataBufferForSource_d(int controllerIndex, int a2, StatsGroup statsGroup, StatsSource statsSource)
{
	std::string group = "";
	std::string source = "";
	switch (statsGroup)
	{
		case StatsGroup::STATSGROUP_RANKED:group = "Ranked"; break;
		case StatsGroup::STATSGROUP_COOP:group = "Coop"; break;
		case StatsGroup::STATSGROUP_COMMON:group = "Common"; break;
		case StatsGroup::STATSGROUP_RANKEDLOADOUTS:group = "RankedLoadouts"; break;
		case StatsGroup::STATSGROUP_PRIVATELOADOUTS:group = "PrivateLoadouts"; break;
		case StatsGroup::STATSGROUP_NONGAME:group = "NonGame"; break;
		default: group = "Unknown"; break;
	}
	switch (statsSource)
	{
		case StatsSource::STATS_ONLINE: source = "Online"; break;
		case StatsSource::STATS_OFFLINE:source = "Offline"; break;
		default: source = "Unknown"; break;
	}
	NotifyMsg("[Notice] <GetPlayerDataBufferForSource> idx = %d , group = %s , src = %s\n", controllerIndex, group.c_str(), source.c_str());
	_hooks.LiveStorage_GetPlayerDataBufferForSource_h.stub<void>(controllerIndex, a2, statsGroup, statsSource);
	//NotifyMsg("[Notice] <LiveStorage_GetPlayerDataBufferForSource> controllerIndex=%d, statsGroup=%s, statsSource=%s, result=%s\n",
	//	controllerIndex, group.c_str(), source.c_str(), result ? "exist" : "null");
	//return result;
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// Authentication Patch
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : h00dbyair-style general authentication patch (platform-related patch)
// ja : h00dbyair式の一般的な認証パッチ（プラットフォーム関連パッチ）
//++++++++++++++++++++++++++++++
void PlatformPatches()
{
	utils::hook::set<int>(CalcPtr(_adr.xenonUserData_m_guardedUserData_signinState), 2);
	utils::hook::set<bool>(CalcPtr(_adr.xenonUserData_m_guardedUserData_signinState) + 0x2D0, true);

	/*
		these two patches are optional, but prevent battle net connectivity issues if previous account info is stored,
		alternatively, clearing the registry keys on game startup using winreg functions is also an option
		Computer\HKEY_CURRENT_USER\SOFTWARE\Blizzard Entertainment\Battle.net\Launch Options\FORE
	*/

	utils::hook::nop(CalcPtr(_adr.CurrentRegion_IssueFix1), 5);
	utils::hook::nop(CalcPtr(_adr.CurrentRegion_IssueFix2), 5);

}



//++++++++++++++++++++++++++++++
// en : h00dbyair-style general authentication patch (profile-related patch)
// ja : h00dbyair式の一般的な認証パッチ（プロフィール関連パッチ）
//++++++++++++++++++++++++++++++
void ProfilePatches()
{

	/*
		XUID and XUID string must be set to enter matches, otherwise you'll be kicked when entering a match
		for providing a bad userinfo string
	*/

	/*
	*/
	XUID xuid;
	xuid.RandomXUID();
	NotifyMsg("[Notice] xuid : %llu\n", xuid.m_id);
	uint64_t xuidValue = xuid.m_id;
	//uint64_t xuidValue = 0x12345678;
	const char* xuid_string = utils::string::va("%Iu", xuidValue);

	XenonUserData* profile = Live_GetUserData(0);
	profile->signinState = 2;

	const char* username = "Player";

	strncpy_s(profile->gamertag, sizeof(profile->gamertag), username, _TRUNCATE);
	strncpy_s(profile->platformGamertag, sizeof(profile->platformGamertag), username, _TRUNCATE);
	strncpy_s(profile->fullGamertag, sizeof(profile->fullGamertag), username, _TRUNCATE);

	// since this is local only, theres no need for this to be unique
	profile->xuid = xuidValue;
	strncpy_s(profile->xuidString, xuid_string, sizeof(profile->xuidString));

	// should always be the same as this is used for loading settings in 'Documents/GAME/players'
	profile->platformId = xuidValue;
	strncpy_s(profile->platformIdString, xuid_string, sizeof(profile->platformIdString));

	// initializes gamerprofile settings and SP DDL
	GamerProfile_LogInProfile(0);
	LoadSavedAchievements();













	XUID xuid2;
	xuid2.RandomXUID();
	NotifyMsg("[Notice] xuid2 : %llu\n", xuid2.m_id);
	uint64_t xuidValue2 = xuid2.m_id;
	//uint64_t xuidValue = 0x12345678;
	const char* xuid_string2 = utils::string::va("%Iu", xuidValue2);

	XenonUserData* profile2 = Live_GetUserData(1);
	profile2->signinState = 2;

	const char* username2 = "Player2";

	strncpy_s(profile2->gamertag, sizeof(profile2->gamertag), username2, _TRUNCATE);
	strncpy_s(profile2->platformGamertag, sizeof(profile2->platformGamertag), username2, _TRUNCATE);
	strncpy_s(profile2->fullGamertag, sizeof(profile2->fullGamertag), username2, _TRUNCATE);

	// since this is local only, theres no need for this to be unique
	profile2->xuid = xuidValue2;
	strncpy_s(profile2->xuidString, xuid_string2, sizeof(profile2->xuidString));

	// should always be the same as this is used for loading settings in 'Documents/GAME/players'
	profile2->platformId = xuidValue2;
	strncpy_s(profile2->platformIdString, xuid_string2, sizeof(profile2->platformIdString));

	// initializes gamerprofile settings and SP DDL
	GamerProfile_LogInProfile(1);
	LoadSavedAchievements();
}



//++++++++++++++++++++++++++++++
// en : h00dbyair-style general authentication patch (profile-related patch with argument specification)
// ja : h00dbyair式の一般的な認証パッチ（引数指定可能式プロフィール関連パッチ）
//++++++++++++++++++++++++++++++
void ProfilePatches_Arg(XUID xuid , const char* username, int controllerIndex)
{

	/*
		XUID and XUID string must be set to enter matches, otherwise you'll be kicked when entering a match
		for providing a bad userinfo string
	*/

	/*
	*/
	NotifyMsg("[Notice] %s xuid : %llu\n", username, xuid.m_id);
	uint64_t xuidValue = xuid.m_id;
	//uint64_t xuidValue = 0x12345678;
	const char* xuid_string = utils::string::va("%Iu", xuidValue);

	XenonUserData* profile = Live_GetUserData(controllerIndex);
	profile->signinState = 2;

	//const char* username = "Player";

	strncpy_s(profile->gamertag, sizeof(profile->gamertag), username, _TRUNCATE);
	strncpy_s(profile->platformGamertag, sizeof(profile->platformGamertag), username, _TRUNCATE);
	strncpy_s(profile->fullGamertag, sizeof(profile->fullGamertag), username, _TRUNCATE);

	// since this is local only, theres no need for this to be unique
	profile->xuid = xuidValue;
	strncpy_s(profile->xuidString, xuid_string, sizeof(profile->xuidString));

	// should always be the same as this is used for loading settings in 'Documents/GAME/players'
	profile->platformId = xuidValue;
	strncpy_s(profile->platformIdString, xuid_string, sizeof(profile->platformIdString));

	// initializes gamerprofile settings and SP DDL
	GamerProfile_LogInProfile(controllerIndex);
	LoadSavedAchievements();
}



//++++++++++++++++++++++++++++++
// en : h00dbyair-style general authentication patch (best called after platform initialization)
// ja : h00dbyair式の一般的な認証パッチ（プラットフォーム初期化後に呼び出すのが最適）
//++++++++++++++++++++++++++++++
void GeneralPatches()
{
	// PlatformPatches();
	// ProfilePatches();

	int controllerIndexSize	= 228316;
	int statsSourceSize		= 119368;

	if (_gameTitle == GameTitle::IW8_138)
	{
		controllerIndexSize	= 201388;
		statsSourceSize		= 105904;
	}
	
	utils::hook::set<char>(CalcPtr(_adr.controllerStatData) + ( controllerIndexSize * 0 ) + (statsSourceSize * StatsSource::STATS_ONLINE )	, 1 );	// controller 0 - online stats
	utils::hook::set<char>(CalcPtr(_adr.controllerStatData) + ( controllerIndexSize * 0 ) + (statsSourceSize * StatsSource::STATS_OFFLINE)	, 1 );	// controller 0 - offline stats
	utils::hook::set<char>(CalcPtr(_adr.controllerStatData) + ( controllerIndexSize * 1 ) + (statsSourceSize * StatsSource::STATS_ONLINE )	, 1 );	// controller 1 - online stats
	utils::hook::set<char>(CalcPtr(_adr.controllerStatData) + ( controllerIndexSize * 1 ) + (statsSourceSize * StatsSource::STATS_OFFLINE)	, 1 );	// controller 1 - offline stats

	// init stats
	NotifyMsg("\n\n\n\n============================== [ 0 , Online ] ==============================\n\n\n\n");
	LiveStorage_StatsInit(0, 1, 0, StatsSource::STATS_ONLINE);
	NotifyMsg("\n\n\n\n============================== [ 0 , Offline ] ==============================\n\n\n\n");
	LiveStorage_StatsInit(0, 1, 0, StatsSource::STATS_OFFLINE);
	NotifyMsg("\n\n\n\n============================== [ 1 , Online ] ==============================\n\n\n\n");
	LiveStorage_StatsInit(1, 1, 0, StatsSource::STATS_ONLINE);
	NotifyMsg("\n\n\n\n============================== [ 1 , Offline ] ==============================\n\n\n\n");
	LiveStorage_StatsInit(1, 1, 0, StatsSource::STATS_OFFLINE);

	NotifyMsg("\n============================== [ After ] ==============================\n");
	LiveStorage_DoWeHaveStatsForSource_f(0, StatsSource::STATS_ONLINE);
	LiveStorage_DoWeHaveStatsForSource_f(0, StatsSource::STATS_OFFLINE);
	LiveStorage_DoWeHaveStatsForSource_f(1, StatsSource::STATS_ONLINE);
	LiveStorage_DoWeHaveStatsForSource_f(1, StatsSource::STATS_OFFLINE);

	NotifyMsg("\n============================== [ Stats Activate!! ] ==============================\n");

	// fix sp launch
	//utils::hook::set<int>(CalcPtr(0x7FF6C8EE9D28), 0);	// fix sp launch * 44 8B 0D ?? ?? ?? ?? 33 D2 45 85 C9 ?? ?? 4C 8B 0x7FF6C8EE9D28
	
}



//++++++++++++++++++++++++++++++
// en : h00dbyair style certified patch
// ja : h00dbyair式認証パッチ
//++++++++++++++++++++++++++++++
void h00dairstylePatch()
{
	NotifyMsg("\n============================== [ Before ] ==============================\n");
	LiveStorage_DoWeHaveStatsForSource_f(0, StatsSource::STATS_ONLINE);
	LiveStorage_DoWeHaveStatsForSource_f(0, StatsSource::STATS_OFFLINE);
	LiveStorage_DoWeHaveStatsForSource_f(1, StatsSource::STATS_ONLINE);
	LiveStorage_DoWeHaveStatsForSource_f(1, StatsSource::STATS_OFFLINE);

	PlatformPatches();
	ProfilePatches();
	GeneralPatches();
}



//++++++++++++++++++++++++++++++
// en : h00dbyair style certified patch mix
// ja : h00dbyair式認証パッチミックス
//++++++++++++++++++++++++++++++
void h00dairMixStylePatch(XUID xuid)
{
	NotifyMsg("\n============================== [ Before ] ==============================\n");
	LiveStorage_DoWeHaveStatsForSource_f(0, StatsSource::STATS_ONLINE);
	LiveStorage_DoWeHaveStatsForSource_f(0, StatsSource::STATS_OFFLINE);
	LiveStorage_DoWeHaveStatsForSource_f(1, StatsSource::STATS_ONLINE);
	LiveStorage_DoWeHaveStatsForSource_f(1, StatsSource::STATS_OFFLINE);
	
	utils::hook::set<int>(CalcPtr(_adr.xenonUserData_m_guardedUserData_signinState), 2);
	utils::hook::set<bool>(CalcPtr(_adr.xenonUserData_m_guardedUserData_signinState) + 0x2D0, true);

	//_hooks.Live_IsSignedIn_h.create(CalcPtr(_adr.Live_IsSignedIn), Live_IsSignedIn_d);
	
	ProfilePatches_Arg(xuid, GetUsername_d(), 0);
	//ProfilePatches_Arg(xuid, GetUsername_d(), 1);
	//ProfilePatches_Arg(xuid, "Player001", 0);
	//XUID xuid2;
	//xuid2.RandomXUID();
	//ProfilePatches_Arg(xuid2, GetUsername_d(), 1);

	//	if ( ( _gameTitle == GameTitle::IW8_157 ) || ( _gameTitle == GameTitle::IW8_167 ) )
	int controllerIndexSize	= 228316;
	int statsSourceSize		= 119368;

	if (_gameTitle == GameTitle::IW8_138)
	{
		controllerIndexSize	= 201388;
		statsSourceSize		= 105904;
	}
	
	utils::hook::set<char>(CalcPtr(_adr.controllerStatData) + ( controllerIndexSize * 0 ) + (statsSourceSize * StatsSource::STATS_ONLINE )	, 1 );	// controller 0 - online stats
	utils::hook::set<char>(CalcPtr(_adr.controllerStatData) + ( controllerIndexSize * 0 ) + (statsSourceSize * StatsSource::STATS_OFFLINE)	, 1 );	// controller 0 - offline stats
	utils::hook::set<char>(CalcPtr(_adr.controllerStatData) + ( controllerIndexSize * 1 ) + (statsSourceSize * StatsSource::STATS_ONLINE )	, 1 );	// controller 1 - online stats
	utils::hook::set<char>(CalcPtr(_adr.controllerStatData) + ( controllerIndexSize * 1 ) + (statsSourceSize * StatsSource::STATS_OFFLINE)	, 1 );	// controller 1 - offline stats
	
	//NotifyMsg("\n============================== [ 0 , Online ] ==============================\n");
	LiveStorage_StatsInit(0, 1, 0, StatsSource::STATS_ONLINE);
	LiveStorage_ReadStats_f(0, StatsSource::STATS_ONLINE);
	//NotifyMsg("\n============================== [ 0 , Offline ] ==============================\n");
	//LiveStorage_StatsInit(0, 1, 0, StatsSource::STATS_OFFLINE);
	//NotifyMsg("\n============================== [ 1 , Online ] ==============================\n");
	//LiveStorage_StatsInit(1, 1, 0, StatsSource::STATS_ONLINE);
	//LiveStorage_ReadStats_f(1, StatsSource::STATS_ONLINE);
	//NotifyMsg("\n============================== [ 1 , Offline ] ==============================\n");
	//LiveStorage_StatsInit(1, 1, 0, StatsSource::STATS_OFFLINE);
	//LiveStorage_ReadStats_f(1, StatsSource::STATS_OFFLINE);

	


	NotifyMsg("\n============================== [ After ] ==============================\n");
	LiveStorage_DoWeHaveStatsForSource_f(0, StatsSource::STATS_ONLINE);
	LiveStorage_DoWeHaveStatsForSource_f(0, StatsSource::STATS_OFFLINE);
	LiveStorage_DoWeHaveStatsForSource_f(1, StatsSource::STATS_ONLINE);
	LiveStorage_DoWeHaveStatsForSource_f(1, StatsSource::STATS_OFFLINE);

	NotifyMsg("\n============================== [ Stats Activate!! ] ==============================\n");

	//dwGetLogOnStatus_h.clear();
}



//++++++++++++++++++++++++++++++
// en : Sku-111 style Authentication Patch
// ja : Sku-111式認証パッチ
//++++++++++++++++++++++++++++++
void SkuStylePatch(XUID xuid)
{
	//XUID xuid;
	//xuid.RandomXUID();
	NotifyMsg("[Notice] xuid : %llu\n", xuid.m_id);

	std::uint64_t xuid_magic = 0x11CB1243B8D7C31E;
	std::uint64_t xuid_id = xuid.m_id * xuid.m_id;

	utils::hook::set(CalcPtr(_adr.unk_PlatformPatch_flag1), 1);

	utils::hook::set<uintptr_t>(CalcPtr(_adr.unk_XUIDCheck1), xuid_magic | xuid_id);

	utils::hook::set<bool>(CalcPtr(_adr.CurrentRegion_IssueFix2_flag), true);

	// utils::hook::set<uintptr_t>(0x17AF9960_b, 0x11CB1243B8D7C31E | (xuid.m_id * xuid.m_id) / 6); // s_presenceData After 1.44 swaped Live_GetUserData()

	utils::hook::set<int>(CalcPtr(_adr.s_isContentEnumerationFinished), 1);
	// utils::hook::set(0x17AF98A0_b, 2);	// Live_IsUserSignedIn -> CL_GetLocalClientSignInState -> After 1,44 swaped Live_GetUserData()
	utils::hook::set(CalcPtr(_adr.unk_PlatformPatch_flag1), 1);

	utils::hook::set<byte>(CalcPtr(_adr.dvar_r_hudOutlineVRScopeThermalDarkColorFriend), 0);

	// utils::hook::set<char>(*reinterpret_cast<uintptr_t*>(0x15DDB818_b) + 0x28, 1); // force_offline_enabled
	// utils::hook::set<char>(*reinterpret_cast<uintptr_t*>(0x15DDB820_b) + 0x28, 1); // force_offline_menus

	uintptr_t bnet_class = CalcPtr(_adr.xenonUserData_m_guardedUserData_signinState);//Live_GetUserSigninState();
	*(uintptr_t*)(bnet_class) = 2; // brings us to "connect to services" screen
	*(bool*)(bnet_class + 0x2D0) = true;

	*(DWORD*)(bnet_class + 0x2F4) = 0x795230F0;
	*(DWORD*)(bnet_class + 0x2FC) = 0;
	*(BYTE*)(bnet_class + 0x2F8) = 31;
}



//++++++++++++++++++++++++++++++
// en : Every frame execution function (for executing actions)
// ja : 毎フレーム実行関数（アクション実行用）
//++++++++++++++++++++++++++++++
void R_EndFrame_d()
{
	if (!_frameCountEnd)
	{
		switch (_elapsedFrameCount)
		{
			case 500:
				{
					XUID xuid;
					xuid.RandomXUID();
					SkuStylePatch(xuid);

					utils::hook::jump(	CalcPtr(_adr.Live_IsSignedIn)							, Live_IsSignedIn_d);
					/*
					utils::hook::jump(	CalcPtr(_adr.Live_IsUserSignedIn)						, Live_IsUserSignedIn_d);
					utils::hook::jump(	CalcPtr(_adr.GamerProfile_IsProfileLoggedIn)			, GamerProfile_IsProfileLoggedIn_d);
					utils::hook::jump(	CalcPtr(_adr.Live_IsUserSignedInToBnet)					, Live_IsUserSignedInToBnet_d);
					utils::hook::jump(	CalcPtr(_adr.Live_IsUserSignedInToDemonware)			, Live_IsUserSignedInToDemonware_d);
					utils::hook::jump(	CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToLive)		, LUI_CoD_LuaCall_IsUserSignedInToLive_d);
					utils::hook::jump(	CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware)	, LUI_CoD_LuaCall_IsUserSignedInToDemonware_d);
					utils::hook::jump(	CalcPtr(_adr.LUI_CoD_LuaCall_IsBattleNetAuthReady)		, LUI_CoD_LuaCall_IsBattleNetAuthReady_d);
					utils::hook::jump(	CalcPtr(_adr.LUI_COD_LuaCall_IsBattleNet)				, LUI_COD_LuaCall_IsBattleNet_d);
					utils::hook::jump(	CalcPtr(_adr.LUI_CoD_LuaCall_IsConnectedToGameServer)	, LUI_CoD_LuaCall_IsConnectedToGameServer_d);
					utils::hook::jump(	CalcPtr(_adr.LUI_CoD_LuaCall_IsGameModeAvailable)		, LUI_CoD_LuaCall_IsGameModeAvailable_d);
					utils::hook::jump(	CalcPtr(_adr.LUI_CoD_LuaCall_IsGameModeAllowed)			, LUI_CoD_LuaCall_IsGameModeAllowed_d);
					utils::hook::jump(	CalcPtr(_adr.LUI_COD_LuaCall_HasActiveLocalClient)		, LUI_COD_LuaCall_HasActiveLocalClient_d);
					utils::hook::jump(	CalcPtr(_adr.GetUsername)								, GetUsername_d);
					*/

					h00dairMixStylePatch(xuid);
					
					//utils::hook::jump(	CalcPtr(_adr.dwGetLogOnStatus)							, dwGetLogOnStatus_d);
					//utils::hook::jump(	CalcPtr(_adr.dwLogOnHSM_base_HSM_IsInState)				, dwLogOnHSM_base_HSM_IsInState_d);
					NotifyMsg("** Success ** <R_EndFrame> Auth patched!\n");
					_frameCountEnd = true;
				}
				break;

			default:  break;
		}
		_elapsedFrameCount += 1;
	}

	_hooks.R_EndFrame_h.stub<void>();

}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// Initialization
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Game start (Hook other functions when drawing the game window, etc.)
// ja : ゲーム開始 ( ゲームウィンドウ描画時にその他関数フックなど )
//++++++++++++++++++++++++++++++
void GameStart()
{
	_hooks.R_EndFrame_h.create(									CalcPtr(_adr.R_EndFrame)								, R_EndFrame_d);
	
	//_hooks.LUI_LuaCall_LUIGlobalPackage_DebugPrint_h.create(	CalcPtr(_adr.LUI_LuaCall_LUIGlobalPackage_DebugPrint)	, LUI_LuaCall_LUIGlobalPackage_DebugPrint_d);
	
	

	
}



//++++++++++++++++++++++++++++++
// en : Game setup (Hooking various functions at splash screen timing)
// ja : ゲームセットアップ ( スプラッシュスクリーンタイミングで各種関数フック )
//++++++++++++++++++++++++++++++
void GameSetup()
{
	//BreakpointSetup();

	//_dumpGSC = true;
	//_hooks.DB_LoadXFile_h.create(		CalcPtr(_adr.DB_LoadXFile)		, DB_LoadXFile_d);
	//_hooks.Load_ScriptFile_h.create(	CalcPtr(_adr.Load_ScriptFile)	, Load_ScriptFile_d);
	//_hooks.LUI_ReportError_h.create(	CalcPtr(_adr.LUI_ReportError)	, LUI_ReportError_d);
	_hooks.Dvar_RegisterBool_h.create(							CalcPtr(_adr.Dvar_RegisterBool)							, Dvar_RegisterBool_d);
	
	utils::hook::jump(											CalcPtr(_adr.LUI_CoD_LuaCall_OfflineDataFetched)		, LUI_CoD_LuaCall_OfflineDataFetched_d);
	utils::hook::jump(											CalcPtr(_adr.LUI_COD_LuaCall_IsPremiumPlayer)			, LUI_COD_LuaCall_IsPremiumPlayer_d);
	utils::hook::jump(											CalcPtr(_adr.LUI_CoD_LuaCall_IsLocalPlayAllowed)		, LUI_CoD_LuaCall_IsLocalPlayAllowed_d);
	
	utils::hook::jump(											CalcPtr(_adr.Content_DoWeHaveContentPack)				, Content_DoWeHaveContentPack_d);
	

	/*
	utils::hook::jump(											CalcPtr(_adr.Live_FakeUserSignIn)						, Live_FakeUserSignIn_d);
	utils::hook::jump(											CalcPtr(_adr.OnlineErrorManager_GetFenceState)			, OnlineErrorManager_GetFenceState_d);
	utils::hook::jump(											CalcPtr(_adr.OnlineErrorManager_IsMpNotAllowed)			, OnlineErrorManager_IsMpNotAllowed_d);
	utils::hook::set<int>(										CalcPtr(_adr.Platform_BeginAuth)						, 0xC3);

	*/

	memcpy(														(void*)CalcPtr(_adr.Live_IsInSystemlinkLobby)			, "\xB0\x01"	, 2);
	
	/*
	utils::hook::jump(											CalcPtr(_adr.Live_IsUserSignedIn)						, Live_IsUserSignedIn_d);
	utils::hook::jump(											CalcPtr(_adr.GamerProfile_IsProfileLoggedIn)			, GamerProfile_IsProfileLoggedIn_d);
	utils::hook::jump(											CalcPtr(_adr.Live_IsUserSignedInToBnet)					, Live_IsUserSignedInToBnet_d);
	utils::hook::jump(											CalcPtr(_adr.Live_IsUserSignedInToDemonware)			, Live_IsUserSignedInToDemonware_d);
	utils::hook::jump(											CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToLive)		, LUI_CoD_LuaCall_IsUserSignedInToLive_d);
	utils::hook::jump(											CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware)	, LUI_CoD_LuaCall_IsUserSignedInToDemonware_d);
	utils::hook::jump(											CalcPtr(_adr.LUI_CoD_LuaCall_IsBattleNetAuthReady)		, LUI_CoD_LuaCall_IsBattleNetAuthReady_d);
	utils::hook::jump(											CalcPtr(_adr.LUI_COD_LuaCall_IsBattleNet)				, LUI_COD_LuaCall_IsBattleNet_d);
	utils::hook::jump(											CalcPtr(_adr.LUI_CoD_LuaCall_IsConnectedToGameServer)	, LUI_CoD_LuaCall_IsConnectedToGameServer_d);
	utils::hook::jump(											CalcPtr(_adr.LUI_CoD_LuaCall_IsGameModeAvailable)		, LUI_CoD_LuaCall_IsGameModeAvailable_d);
	utils::hook::jump(											CalcPtr(_adr.LUI_CoD_LuaCall_IsGameModeAllowed)			, LUI_CoD_LuaCall_IsGameModeAllowed_d);
	utils::hook::jump(											CalcPtr(_adr.LUI_COD_LuaCall_HasActiveLocalClient)		, LUI_COD_LuaCall_HasActiveLocalClient_d);
	utils::hook::jump(											CalcPtr(_adr.GetUsername)								, GetUsername_d);
	*/

	//utils::hook::jump(									CalcPtr(_adr.LUI_COD_LuaCall_IsBattleNetLanOnly)			, LUI_COD_LuaCall_IsBattleNetLanOnly_d);
	//utils::hook::jump(									CalcPtr(_adr.j_LUI_CoD_LuaCall_ShouldBeInOnlineArea)		, j_LUI_CoD_LuaCall_ShouldBeInOnlineArea_d);
	//utils::hook::jump(									CalcPtr(_adr.LuaShared_LuaCall_IsDemoBuild)					, LuaShared_LuaCall_IsDemoBuild_d);

	//utils::hook::jump(									CalcPtr(_adr.dwGetLogOnStatus)								, dwGetLogOnStatus_d);
	//dwGetLogOnStatus_h.create(							CalcPtr(_adr.dwGetLogOnStatus)								, dwGetLogOnStatus_d);
	//utils::hook::jump(									CalcPtr(_adr.SEH_StringEd_GetString)						, SEH_StringEd_GetString_d);
	//utils::hook::jump(									CalcPtr(_adr.LiveStorage_GetActiveStatsSource)				, LiveStorage_GetActiveStatsSource_d);

	//	utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToLive)			, LUI_CoD_LuaCall_IsUserSignedInToLive_d);
	//	utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware)		, LUI_CoD_LuaCall_IsUserSignedInToDemonware_d);

	//utils::hook::jump(									CalcPtr(_adr.Live_IsInSystemlinkLobby)						, Live_IsInSystemlinkLobby_d);
	//Live_IsInSystemlinkLobby_h.create(					CalcPtr(_adr.Live_IsInSystemlinkLobby)						, Live_IsInSystemlinkLobby_d);

	//DDL_Lookup_MoveToNameHash_h.create(					CalcPtr(_adr.DDL_Lookup_MoveToNameHash)						, DDL_Lookup_MoveToNameHash_d);

	//luaL_loadfile_h.create(								CalcPtr(_adr.luaL_loadfile)									, luaL_loadfile_d);
	
	//luaL_loadbuffer_h.create(							CalcPtr(_adr.luaL_loadbuffer)								, luaL_loadbuffer_d);
	//DB_FindXAssetHeader_h.create(						CalcPtr(_adr.DB_FindXAssetHeader)							, DB_FindXAssetHeader_d);
	//luaL_openlib_h.create(								CalcPtr(_adr.luaL_openlib)									, luaL_openlib_d);
	//LiveStorage_BeginGame_h.create(						CalcPtr(_adr.LiveStorage_BeginGame)							, LiveStorage_BeginGame_d);
	//LiveStorage_ReadStats_h.create(						CalcPtr(_adr.LiveStorage_ReadStats)							, LiveStorage_ReadStats_d);
	//Com_DDL_LoadAsset_h.create(							CalcPtr(_adr.Com_DDL_LoadAsset)								, Com_DDL_LoadAsset_d);
	//LiveStorage_GetPlayerDataBufferForSource_h.create(	CalcPtr(_adr.LiveStorage_GetPlayerDataBufferForSource)		, LiveStorage_GetPlayerDataBufferForSource_d);
	
	//	LUI_LuaCall_LUIGlobalPackage_DebugPrint_h.create(		CalcPtr(_adr.LUI_LuaCall_LUIGlobalPackage_DebugPrint)		, LUI_LuaCall_LUIGlobalPackage_DebugPrint_d);
	//	LUI_CoD_LuaCall_OfflineDataFetched_h.create(			CalcPtr(_adr.LUI_CoD_LuaCall_OfflineDataFetched)			, LUI_CoD_LuaCall_OfflineDataFetched_d);
	//	LUI_COD_LuaCall_IsPremiumPlayer_h.create(				CalcPtr(_adr.LUI_COD_LuaCall_IsPremiumPlayer)				, LUI_COD_LuaCall_IsPremiumPlayer_d);
	//	LUI_CoD_LuaCall_IsLocalPlayAllowed_h.create(			CalcPtr(_adr.LUI_CoD_LuaCall_IsLocalPlayAllowed)			, LUI_CoD_LuaCall_IsLocalPlayAllowed_d);
	//	LUI_CoD_LuaCall_IsUserSignedInToLive_h.create(			CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToLive)			, LUI_CoD_LuaCall_IsUserSignedInToLive_d);
	//	LUI_CoD_LuaCall_IsUserSignedInToDemonware_h.create(		CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware)		, LUI_CoD_LuaCall_IsUserSignedInToDemonware_d);
	//	
	//	GetUsername_h.create(									CalcPtr(_adr.GetUsername)									, GetUsername_d);
	//	dwGetLogOnStatus_h.create(								CalcPtr(_adr.dwGetLogOnStatus)								, dwGetLogOnStatus_d);
	//	Content_DoWeHaveContentPack_h.create(					CalcPtr(_adr.Content_DoWeHaveContentPack)					, Content_DoWeHaveContentPack_d);
	//	GamerProfile_IsProfileLoggedIn_h.create(				CalcPtr(_adr.GamerProfile_IsProfileLoggedIn)				, GamerProfile_IsProfileLoggedIn_d);
	//	Live_IsUserSignedInToBnet_h.create(						CalcPtr(_adr.Live_IsUserSignedInToBnet)						, Live_IsUserSignedInToBnet_d);
	//	Live_IsUserSignedInToDemonware_h.create(				CalcPtr(_adr.Live_IsUserSignedInToDemonware)				, Live_IsUserSignedInToDemonware_d);
	//	LiveStorage_GetActiveStatsSource_h.create(				CalcPtr(_adr.LiveStorage_GetActiveStatsSource)				, LiveStorage_GetActiveStatsSource_d);

	//LuaShared_LuaCall_IsConsoleGame_h.create(				CalcPtr(_adr.LuaShared_LuaCall_IsConsoleGame)				, LuaShared_LuaCall_IsConsoleGame_d);
	//LuaShared_LuaCall_IsDevelopmentBuild_h.create(			CalcPtr(_adr.LuaShared_LuaCall_IsDevelopmentBuild)			, LuaShared_LuaCall_IsDevelopmentBuild_d);
	//LUI_COD_LuaCall_HasActiveLocalClient_h.create(			CalcPtr(_adr.LUI_COD_LuaCall_HasActiveLocalClient)			, LUI_COD_LuaCall_HasActiveLocalClient_d);
	//LUI_CoD_LuaCall_StatsResetGetState_h.create(			CalcPtr(_adr.LUI_CoD_LuaCall_StatsResetGetState)			, LUI_CoD_LuaCall_StatsResetGetState_d);
	//utils::hook::jump(									CalcPtr(_adr.Live_IsInSystemlinkLobby)						, Live_IsInSystemlinkLobby_d);
	//utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_OfflineDataFetched)			, lua_pushboolean_return_true_d);
	//utils::hook::jump(									CalcPtr(_adr.LUI_COD_LuaCall_IsPremiumPlayer)				, lua_pushboolean_return_true_d);
	
	//LUIMethod_LUIGlobalPackage_list_f();
	
	//utils::hook::jump(									CalcPtr(_adr.LiveStorage_GetActiveStatsSource)		, LiveStorage_GetActiveStatsSource_d);

	//utils::hook::jump(									CalcPtr(_adr.dwGetLogOnStatus)								, dwGetLogOnStatus_d);
	//utils::hook::jump(									CalcPtr(_adr.Live_IsUserSignedInToBnet)							, Live_IsUserSignedInToBnet_d);
	//utils::hook::jump(									CalcPtr(_adr.Content_DoWeHaveContentPack)					, Content_DoWeHaveContentPack_d);
	//utils::hook::jump(									CalcPtr(_adr.GamerProfile_IsProfileLoggedIn)				, GamerProfile_IsProfileLoggedIn_d);
	//utils::hook::jump(									CalcPtr(_adr.Live_IsUserSignedInToDemonware)				, Live_IsUserSignedInToDemonware_d);
	//utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToLive)			, lua_pushboolean_return_true_d);
	//utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware)		, lua_pushboolean_return_true_d);
	//utils::hook::jump(									CalcPtr(_adr.LuaShared_LuaCall_IsDemoBuild)					, lua_pushboolean_return_true_d);
	//utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsGameModeAllowed)				, lua_pushboolean_return_true_d);
	//utils::hook::jump(									CalcPtr(_adr.LUI_COD_LuaCall_IsBattleNetLanOnly)			, lua_pushboolean_return_true_d);
	//utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsGameModeAvailable)			, lua_pushboolean_return_true_d);
	//utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsBattleNetAuthReady)			, lua_pushboolean_return_true_d);
	//utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsConnectedToGameServer)		, lua_pushboolean_return_true_d);
	//utils::hook::jump(									CalcPtr(_adr.LUI_COD_LuaCall_IsPremiumPlayerReady)			, lua_pushboolean_return_true_d);

	//memcpy((void*)CalcPtr(_adr.Live_IsSignedIn), "\xB0\x01\xC3\x90\x90\x90\x90\x90\x90\x90\x90", 11);
	//_hooks.Live_IsSignedIn_h.create(							CalcPtr(_adr.Live_IsSignedIn)								, Live_IsSignedIn_d);
	//dwGetLogOnStatus_h.create(							CalcPtr(_adr.dwGetLogOnStatus)								, dwGetLogOnStatus_d);
	//Live_IsUserSignedIn_h.create(						CalcPtr(_adr.Live_IsUserSignedIn)							, Live_IsUserSignedIn_d);
	//Live_IsUserSignedInToLive_h.create(					CalcPtr(_adr.Live_IsUserSignedInToLive)						, Live_IsUserSignedInToLive_d);
	//Live_IsUserSignedInToBnet_h.create(					CalcPtr(_adr.Live_IsUserSignedInToBnet)						, Live_IsUserSignedInToBnet_d);
	//Live_IsUserSignedInToDemonware_h.create(			CalcPtr(_adr.Live_IsUserSignedInToDemonware)				, Live_IsUserSignedInToDemonware_d);
	//j_LUI_CoD_LuaCall_ShouldBeInOnlineArea_h.create(	CalcPtr(_adr.j_LUI_CoD_LuaCall_ShouldBeInOnlineArea)		, j_LUI_CoD_LuaCall_ShouldBeInOnlineArea_d);
	//LUI_CoD_LuaCall_IsUserSignedInToDemonware_h.create(	CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware)		, LUI_CoD_LuaCall_IsUserSignedInToDemonware_d);
	//LUI_COD_LuaCall_IsBattleNetLanOnly_h.create(		CalcPtr(_adr.LUI_COD_LuaCall_IsBattleNetLanOnly)			, LUI_COD_LuaCall_IsBattleNetLanOnly_d);
	//LUI_CoD_LuaCall_IsBattleNetAuthReady_h.create(		CalcPtr(_adr.LUI_CoD_LuaCall_IsBattleNetAuthReady)			, LUI_CoD_LuaCall_IsBattleNetAuthReady_d);
	//LUI_COD_LuaCall_IsBattleNet_h.create(				CalcPtr(_adr.LUI_COD_LuaCall_IsBattleNet)					, LUI_COD_LuaCall_IsBattleNet_d);
	//LiveStorage_GetActiveStatsSource_h.create(			CalcPtr(_adr.LiveStorage_GetActiveStatsSource)				, LiveStorage_GetActiveStatsSource_d);
	//utils::hook::jump(CalcPtr(_adr.Live_IsSignedIn), Live_IsSignedIn_d);

	//utils::hook::jump(									CalcPtr(_adr.CL_Mgr_GetClientFromController)				, CL_Mgr_GetClientFromController_d);
	/*
	utils::hook::jump(									CalcPtr(_adr.CL_Mgr_IsControllerActive)						, CL_Mgr_IsControllerActive_d);
	utils::hook::jump(									CalcPtr(_adr.LiveStorage_GetActiveStatsSource)				, LiveStorage_GetActiveStatsSource_d);
	utils::hook::jump(									CalcPtr(_adr.dwGetLogOnStatus)								, dwGetLogOnStatus_d);
	utils::hook::jump(									CalcPtr(_adr.Live_IsUserSignedIn)							, Live_IsUserSignedIn_d);
	utils::hook::jump(									CalcPtr(_adr.Live_IsUserSignedInToBnet)							, Live_IsUserSignedInToBnet_d);
	utils::hook::jump(									CalcPtr(_adr.Content_DoWeHaveContentPack)					, Content_DoWeHaveContentPack_d);
	utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToLive)			, lua_pushboolean_return_true_d);
	utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware)		, lua_pushboolean_return_true_d);
	utils::hook::jump(									CalcPtr(_adr.LuaShared_LuaCall_IsDemoBuild)					, lua_pushboolean_return_true_d);
	utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsGameModeAllowed)				, lua_pushboolean_return_true_d);
	utils::hook::jump(									CalcPtr(_adr.LUI_COD_LuaCall_IsBattleNetLanOnly)			, lua_pushboolean_return_true_d);
	utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsGameModeAvailable)			, lua_pushboolean_return_true_d);
	utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsBattleNetAuthReady)			, lua_pushboolean_return_true_d);
	utils::hook::jump(									CalcPtr(_adr.LUI_CoD_LuaCall_IsConnectedToGameServer)		, lua_pushboolean_return_true_d);
	utils::hook::jump(									CalcPtr(_adr.LUI_COD_LuaCall_IsPremiumPlayerReady)			, lua_pushboolean_return_true_d);

	*/

	//R_EndFrame_h.create(								CalcPtr(_adr.R_EndFrame)									, R_EndFrame_d);
	//dwGetLogOnStatus_h.create(							CalcPtr(_adr.dwGetLogOnStatus)								, dwGetLogOnStatus_d);
	//Dvar_RegisterBool_h.create(							CalcPtr(_adr.Dvar_RegisterBool)								, Dvar_RegisterBool_d);
	//Live_IsUserSignedInToBnet_h.create(						CalcPtr(_adr.Live_IsUserSignedInToBnet)							, Live_IsUserSignedInToBnet_d);
	//Content_DoWeHaveContentPack_h.create(				CalcPtr(_adr.Content_DoWeHaveContentPack)					, Content_DoWeHaveContentPack_d);
	//CL_GetLocalClientSignInState_h.create(				CalcPtr(_adr.CL_GetLocalClientSignInState)					, CL_GetLocalClientSignInState_d);
	//Live_IsUserSignedInToDemonware_h.create(			CalcPtr(_adr.Live_IsUserSignedInToDemonware)				, Live_IsUserSignedInToDemonware_d);
	//LUI_CoD_LuaCall_IsUserSignedInToLive_h.create(		CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToLive)			, LUI_CoD_LuaCall_IsUserSignedInToLive_d);
	//LUI_CoD_LuaCall_IsUserSignedInToDemonware_h.create(	CalcPtr(_adr.LUI_CoD_LuaCall_IsUserSignedInToDemonware)		, LUI_CoD_LuaCall_IsUserSignedInToDemonware_d);

	////utils::hook::jump(				CalcPtr(_adr.SEH_StringEd_GetString)						, SEH_StringEd_GetString_d);
	//	utils::hook::jump(									CalcPtr(_adr.GetUsername)									, GetUsername_d);
	//	utils::hook::jump(									CalcPtr(_adr.dwGetLogOnStatus)								, dwGetLogOnStatus_d);
	//	utils::hook::jump(									CalcPtr(_adr.Live_IsUserSignedIn)							, Live_IsUserSignedIn_d);
	//	utils::hook::jump(									CalcPtr(_adr.Live_IsUserSignedInToBnet)							, Live_IsUserSignedInToBnet_d);
	//	utils::hook::jump(									CalcPtr(_adr.Content_DoWeHaveContentPack)					, Content_DoWeHaveContentPack_d);
	//	utils::hook::jump(									CalcPtr(_adr.GamerProfile_IsProfileLoggedIn)				, GamerProfile_IsProfileLoggedIn_d);
	//	utils::hook::jump(									CalcPtr(_adr.Live_IsUserSignedInToDemonware)				, Live_IsUserSignedInToDemonware_d);
	//	utils::hook::jump(									CalcPtr(_adr.LiveStorage_GetActiveStatsSource)				, LiveStorage_GetActiveStatsSource_d);

	// allow playing without internet connected
	//utils::hook::jump(									CalcPtr(_adr.Live_IsSignedIn)								, Live_IsSignedIn_d);
	// patch Live_IsInSystemlinkLobby (needed for maps to load/start)
	//	utils::hook::jump(									CalcPtr(_adr.Live_IsInSystemlinkLobby)						, Live_IsInSystemlinkLobby_d);
	//	
	//	utils::hook::call(									CalcPtr(_adr.Dvar_RegisterBool_call_1)						, Dvar_RegisterBool_2_d);
	//	utils::hook::call(									CalcPtr(_adr.Dvar_RegisterBool_call_2)						, Dvar_RegisterBool_2_d);

	//R_EndFrame_h.create(								CalcPtr(_adr.R_EndFrame)									, R_EndFrame_d);
	////LUI_ReportError_h.create(							CalcPtr(_adr.LUI_ReportError)								, LUI_ReportError_d);
	//	Dvar_RegisterBool_h.create(							CalcPtr(_adr.Dvar_RegisterBool)								, Dvar_RegisterBool_d);
	//	DB_FindXAssetHeader_h.create(						CalcPtr(_adr.DB_FindXAssetHeader)							, DB_FindXAssetHeader_d);

	//LuaShared_LuaCall_IsDemoBuild_h.create(				CalcPtr(_adr.LuaShared_LuaCall_IsDemoBuild)					, lua_pushboolean_return_true_d);
	//LUI_COD_LuaCall_IsPremiumPlayer_h.create(			CalcPtr(_adr.LUI_COD_LuaCall_IsPremiumPlayer)				, lua_pushboolean_return_true_d);
	//LUI_CoD_LuaCall_IsGameModeAllowed_h.create(			CalcPtr(_adr.LUI_CoD_LuaCall_IsGameModeAllowed)				, lua_pushboolean_return_true_d);
	//LUI_CoD_LuaCall_OfflineDataFetched_h.create(		CalcPtr(_adr.LUI_CoD_LuaCall_OfflineDataFetched)			, lua_pushboolean_return_true_d);
	//LUI_COD_LuaCall_IsBattleNetLanOnly_h.create(		CalcPtr(_adr.LUI_COD_LuaCall_IsBattleNetLanOnly)			, lua_pushboolean_return_true_d);
	//LUI_CoD_LuaCall_IsGameModeAvailable_h.create(		CalcPtr(_adr.LUI_CoD_LuaCall_IsGameModeAvailable)			, lua_pushboolean_return_true_d);
	//LUI_COD_LuaCall_IsPremiumPlayerReady_h.create(		CalcPtr(_adr.LUI_COD_LuaCall_IsPremiumPlayerReady)			, lua_pushboolean_return_true_d);
	//LUI_CoD_LuaCall_IsBattleNetAuthReady_h.create(		CalcPtr(_adr.LUI_CoD_LuaCall_IsBattleNetAuthReady)			, lua_pushboolean_return_true_d);
	//LUI_CoD_LuaCall_IsConnectedToGameServer_h.create(	CalcPtr(_adr.LUI_CoD_LuaCall_IsConnectedToGameServer)		, lua_pushboolean_return_true_d);

	//Cbuf_AddText("LSSSQMQPNL 1;MOSSSSTTNL 1;OLNTNRTPPL 1;OMPMKKTORN 1;MLNMPQOON 1;LRKNROSQPM 1;RLSPOOTTT 0;");
	//Cbuf_AddText("MROLPRPTPO 1;LPNMMPKRL 1;OKLQKPPKPQ 0;LMSLLSMONN 1;MPSSOTQQPM 1;LSTQOKLTRN 1;LNTOKPTKS 0;");
	//Cbuf_AddText("LRKPTLNQTT 0;LMMRONPQMO 0;LSPSKLPNQT 1;LTOQRQMMLQ 1;MTSTMKPMRM 0;LSSRRSMNMR 1;");

	// VG Base 0x7FF664560000 / 144 base 0x7FF7ABA50000

	//std::thread thr([]() {
	//	std::this_thread::sleep_for(1s);
	//	force_sign_in_state_now = true;
	//	LOG("Component/Auth", INFO, "Sign in state now 2.");
	//	});
	//thr.detach();

	//	
	//	
	//	
	//	utils::hook::jump(0x39B2F10_b, SEH_StringEd_GetString_Detour);
	//	
	//	*utils::hook::nop(0x5EFA36E_b, 6);
	//	utils::hook::call(0x5EFA36E_b, LoadLibraryW_Stub);*/

	//NotifyMsg("\n============================== [ Before ] ==============================\n");
	//LiveStorage_DoWeHaveStatsForSource_f(0, StatsSource::STATS_ONLINE);
	//LiveStorage_DoWeHaveStatsForSource_f(0, StatsSource::STATS_OFFLINE);
	//LiveStorage_DoWeHaveStatsForSource_f(1, StatsSource::STATS_ONLINE);
	//LiveStorage_DoWeHaveStatsForSource_f(1, StatsSource::STATS_OFFLINE);

	//LiveStorage_StatsInit(0, 1, 0, StatsSource::STATS_ONLINE);
	//LiveStorage_StatsInit(0, 1, 0, StatsSource::STATS_OFFLINE);
	// 
	// 
	//Live_SyncOnlineDataFence_GetState_h.create(			CalcPtr(_adr.Live_SyncOnlineDataFence_GetState)				, Live_SyncOnlineDataFence_GetState_d);
	//Live_OnlineServicesFence_GetState_h.create(			CalcPtr(_adr.Live_OnlineServicesFence_GetState)				, Live_OnlineServicesFence_GetState_d);
	//LUI_CoD_LuaCall_StatsResetGetState_h.create(		CalcPtr(_adr.LUI_CoD_LuaCall_StatsResetGetState)			, LUI_CoD_LuaCall_StatsResetGetState_d);

	//controllerIndexSize = 12;

	//utils::hook::set<char>(CalcPtr(_adr.s_OnlineServicesFenceData_state) + (controllerIndexSize * 0), FenceOnlineServices_CODE_STATE::success);


	//LiveStorage_BeginGame_f(LocalClientNum_t::LOCAL_CLIENT_0);
	//LiveStorage_ReadStats_f(0, StatsSource::STATS_ONLINE);
	//LiveStorage_ReadStats_f(0, StatsSource::STATS_OFFLINE);
	//LiveStorage_StatsInit(0, 1, 0, StatsSource::STATS_ONLINE);


	// init stats
	//NotifyMsg("\n\n\n\n============================== [ 0 , Online ] ==============================\n\n\n\n");
	//LiveStorage_StatsInit(0, 1, 0, StatsSource::STATS_ONLINE);
	//NotifyMsg("\n\n\n\n============================== [ 0 , Offline ] ==============================\n\n\n\n");
	//LiveStorage_StatsInit(0, 1, 0, StatsSource::STATS_OFFLINE);
	//NotifyMsg("\n\n\n\n============================== [ 1 , Online ] ==============================\n\n\n\n");
	//LiveStorage_StatsInit(1, 1, 0, StatsSource::STATS_ONLINE);
	//NotifyMsg("\n\n\n\n============================== [ 1 , Offline ] ==============================\n\n\n\n");
	//LiveStorage_StatsInit(1, 1, 0, StatsSource::STATS_OFFLINE);


	//utils::hook::jump(									CalcPtr(_adr.GamerProfile_IsProfileLoggedIn)				, GamerProfile_IsProfileLoggedIn_d);
	//utils::hook::jump(									CalcPtr(_adr.Live_IsUserSignedInToDemonware)				, Live_IsUserSignedInToDemonware_d);
	//utils::hook::jump(									CalcPtr(_adr.dwGetLogOnStatus)								, dwGetLogOnStatus_d);
}



//++++++++++++++++++++++++++++++
// en : Get player name from profile.ini
// ja : profile.iniからプレイヤー名取得
//++++++++++++++++++++++++++++++
std::string ReadIniPlayerName(const std::string& iniFilePath)
{
	char playerName[256];
	GetPrivateProfileString("Settings", "PlayerName", "Player1", playerName, sizeof(playerName), iniFilePath.c_str());
	return std::string(playerName);
}



//++++++++++++++++++++++++++++++
// en : Read profile.ini and load various settings + Asset Path Construction
// ja : profile.iniを読み込んで各種設定を読み込み + アセットパス構築
//++++++++++++++++++++++++++++++
void SetupProfile()
{
	char dllPath[MAX_PATH];
	GetModuleFileNameA(GetModuleHandle(NULL), dllPath, MAX_PATH);

	_profileIniPath = dllPath;
	size_t lastSlash = _profileIniPath.find_last_of("\\");
	if (lastSlash != std::string::npos)
	{
		_profileIniPath = _profileIniPath.substr(0, lastSlash + 1) + "profile.ini";
	}
	NotifyMsg("[Notice] <Initialization> profile path : %s\n", _profileIniPath.c_str());

	_playerName = ReadIniPlayerName(_profileIniPath);
	NotifyMsg("[Notice] <Initialization> Username : %s\n", _playerName.c_str());


	TCHAR waFolderPath[MAX_PATH];
	SHGetSpecialFolderPath(NULL, waFolderPath, CSIDL_PERSONAL, 0);

	_documentPath = (std::string)waFolderPath + "\\retdonetskmod";
	ReplaceAll(_documentPath, "/", "\\");
	NotifyMsg("[Notice] <Initialization> Asset path : %s\n", _documentPath.c_str());
}



//++++++++++++++++++++++++++++++
// en : Splash screen loading (for detour)
// ja : スプラッシュスクリーン読み込み ( ディトール用 )
//++++++++++++++++++++++++++++++
HANDLE WINAPI LoadImageA_d(HINSTANCE hInst, LPCSTR name, UINT type, int cx, int cy, UINT fuLoad)
{
	if (!_splashed)
	{
		NotifyMsg("Splash screen image load detected!\n");
		NotifyMsg("[Notice] Base Address: 0x%p\n", g_Addrs.ModuleBase);
		SetupProfile();
		GameSetup();
		_splashed = true;
	}

	// スプラッシュスクリーン以外の場合はオリジナル関数を呼び出し
	return LoadImageA_b(hInst, name, type, cx, cy, fuLoad);
}



//++++++++++++++++++++++++++++++
// en : Hook into each function from the exe reference module
// ja : exe参照モジュールから各関数にフック
//++++++++++++++++++++++++++++++
void HookExeModuleFunctions()
{
	// ゲームの実行ファイル（EXE）を対象に
	utils::nt::library exe(GetModuleHandleA(nullptr)); // EXE モジュールを指定
	LoadImageA_h = utils::hook::iat(exe, "user32.dll", "LoadImageA", LoadImageA_d);
	if (LoadImageA_h)
	{
		LoadImageA_b = reinterpret_cast<decltype(LoadImageA_b)>(LoadImageA_h->second);
		NotifyMsg("[Success] <Initialization> LoadImageA hooked successfully!\n");
	}
	else
	{
		NotifyMsg("[Failed] <Initialization> Failed to hook LoadImageA...\n");
	}

	NotifyMsg("[Success] <Initialization> System initialization complete!\n");
	NotifyMsg("\n");
	NotifyMsg("\n");
	NotifyMsg("\n");
}



//++++++++++++++++++++++++++++++
// en : Initialization process
// ja : 初期化処理
//++++++++++++++++++++++++++++++
void Initialization()
{
	Sleep(250);
	//_gameTitle = GameTitle::IW8_138;
	//_gameTitle = GameTitle::IW8_157;
	_gameTitle = GameTitle::IW8_167;
	GetAddressOffset(_gameTitle);

	HookExeModuleFunctions();

}



//++++++++++++++++++++++++++++++
// en : Entry point (calling the DiscordCreate function when drawing the game window)
// ja : エントリーポイント ( ゲームウィンドウ描画時の DiscordCreate 関数呼び出し )
//++++++++++++++++++++++++++++++
void entry_point()
{
	GameStart();

	puts(__FUNCTION__ " done.");
}



//++++++++++++++++++++++++++++++
// en : discord_gane_sdk.dll export function
// ja : discord_gane_sdk.dll エクスポート関数
//++++++++++++++++++++++++++++++
extern "C" __declspec(dllexport) int DiscordCreate()
{
	CreateThread(0, 0xA0, (LPTHREAD_START_ROUTINE)entry_point, 0, 0, 0);

	puts(__FUNCTION__ " done.");
	return 1;
}



//++++++++++++++++++++++++++++++
// en : Debugger present
// ja : デバッガー処理
//++++++++++++++++++++++++++++++
BOOL IsDebuggerPresent_Detour()
{
	puts("IsDebuggerPresent()...");
	return FALSE;
}



//++++++++++++++++++++++++++++++
// en : Initialization process
// ja : 初期化処理
//++++++++++++++++++++++++++++++
void InitThread()
{
	//Sleep(1750);
	Initialization();
}



//++++++++++++++++++++++++++++++
// en : Make console window
// ja : コンソールウィンドウ作成
//++++++++++++++++++++++++++++++
HANDLE createConsole()
{
	AllocConsole();

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	auto a = freopen("CONOUT$", "w", stdout);
	auto b = freopen("CONOUT$", "w", stderr);
	auto c = freopen("CONIN$", "r", stdin);
	if (a == NULL || b == NULL || c == NULL)
	{
		return NULL;
	}

	SetConsoleTitleA("Call of Duty : Modern Warfare (2019) - Project Donetsk Returned Version 1.67 Modded Client");

	DWORD consoleMode;
	GetConsoleMode(consoleHandle, &consoleMode);
	SetConsoleMode(consoleHandle, consoleMode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);

	return consoleHandle;
}



//++++++++++++++++++++++++++++++
// en : main process
// ja : メイン処理
//++++++++++++++++++++++++++++++
BOOL WINAPI DllMain(HMODULE hModule, DWORD Reason, LPVOID lpVoid)
{
	//Sleep(500);

	g_Addrs.ModuleBase = (uintptr_t)(GetModuleHandleA(NULL));
	if (Reason == DLL_PROCESS_ATTACH)
	{
		HANDLE hCmd = createConsole();
		//if (hCmd == NULL)
		//{
		//	MessageBoxA(NULL, "Couldn't create console.", "MW19 1.57", MB_ICONERROR | MB_OK | MB_DEFBUTTON1);
		//}

		Initialization();
	}
	else if (Reason == DLL_PROCESS_DETACH)
	{
	}

	return TRUE;
}
















































// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// en : Unused functions (for storage)
// ja : 未使用関数（保存用）
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



//++++++++++++++++++++++++++++++
// en : Executes the Boolean Dvar registration function
// ja : Bool型Dvar登録関数を実行する
//++++++++++++++++++++++++++++++
dvar_t* Dvar_RegisterBool_f(const char* dvarName, bool value, int flags, const char* desc)
{
	auto func = reinterpret_cast<dvar_t * (*)(const char* dvarName, bool value, int flags, const char* desc)>(0x39F4ED0_b);
	return func(dvarName, value, flags, desc);
}



//++++++++++++++++++++++++++++++
// en : Sending a custom command
// ja : カスタムコマンドを送信する
//++++++++++++++++++++++++++++++
bool Cbuf_AddText(const char* fmt, ...)
{

	uintptr_t xpartyOffset = 0;
	uintptr_t CbufOffset = 0;
	uintptr_t baseAddr = 0;

	char cmd[512]{};
	char post[512]{};

	va_list ap;
	va_start(ap, fmt);
	vsprintf_s(cmd, fmt, ap);
	va_end(ap);

	NotifyMsg("[Cbuf_AddText] <Notice> Formatted command: %s -> ", cmd);

	uintptr_t xpartydisband = CalcPtr(_adr.xpartydisband);
	uintptr_t endlobby = CalcPtr(_adr.GScr_EndLobby);

	try
	{
		NotifyMsg("Exec buf manipulation -> ");
		memcpy(post, (BYTE*)(xpartydisband), 512);
		strcpy((char*)(xpartydisband), cmd);
		NotifyMsg("Call endlobby func -> ");
		reinterpret_cast<void(*)(void*)>(endlobby)(nullptr);
		memcpy((BYTE*)(xpartydisband), post, 512);
	}
	catch (...)
	{
		NotifyMsg("<Error> Ex occurred during buf manipulation\n");
		return false;
	}

	NotifyMsg("<OK> Success exec Cbuf.\n");
	return true;
}



//++++++++++++++++++++++++++++++
// en : Opens the specified LUI menu.
// ja : 指定したLUIメニューを開く
//++++++++++++++++++++++++++++++
void LUI_OpenMenu(uintptr_t localclientnum, const char* menuName, int isPopup, int isModal, int isExclusive)
{
	auto func = reinterpret_cast<void(*)(uintptr_t localclientnum, const char* menuName, int isPopup, int isModal, int isExclusive)>(CalcPtr(_adr.LUI_OpenMenu));
	func(localclientnum, menuName, isPopup, isModal, isExclusive);
}



//++++++++++++++++++++++++++++++
// en : Thread for opening the offline main menu with a keystroke
// ja : キー入力でオフラインメインメニューを開くためのスレッド
//++++++++++++++++++++++++++++++
void delayedStuff()
{
	while (1)
	{
		if (GetAsyncKeyState('H') & 0x8000)
		{
			const char* menuName = "MainMenu";
			NotifyMsg("LUI_OpenMenu(0, \"%s\", true, false, false);\n", menuName);
			LUI_OpenMenu(0, menuName, true, false, false);
			Sleep(1000);
		}
		else if (GetAsyncKeyState('J') & 0x8000)
		{
			const char* menuName = "MainMenuOffline";
			NotifyMsg("LUI_OpenMenu(0, \"%s\", true, false, false);\n", menuName);
			LUI_OpenMenu(0, menuName, true, false, false);
			Sleep(1000);
		}
	}
}



//++++++++++++++++++++++++++++++
// en : Get Dvar struct information from Dvar name
// ja : Dvar名からDvar構造体情報を取得する
//++++++++++++++++++++++++++++++
dvar_t* Dvar_FindVarByName(const char* dvarName)
{
	//[48 83 EC 48 49 8B C8 E8 ?? ?? ?? ?? + 0x7] resolve call.
	return reinterpret_cast<dvar_t * (__fastcall*)(const char* dvarName)>(CalcPtr(_adr.Dvar_FindVarByName))(dvarName);
}



//++++++++++++++++++++++++++++++
// en : Set gamer profile data from name
// ja : ゲーマープロフィールのデータを名称から設定する
//++++++++++++++++++++++++++++++
void GamerProfile_SetDataByName(int controller_index, const char* setting_name, float setting_value)
{
	auto func = reinterpret_cast<void(*)(int controller_index, const char* setting_name, float setting_value)>(CalcPtr(_adr.GamerProfile_SetDataByName));
	func(controller_index, setting_name, setting_value);
}



//++++++++++++++++++++++++++++++
// en : Get the local client sign-in state (for detour)
// ja : ローカルクライアントのサインイン状態を取得する（ディトール用）
//++++++++++++++++++++++++++++++
int CL_GetLocalClientSignInState_d(int controller_index)
{
	if (force_sign_in_state_now && !signed_in)
	{
		uintptr_t unk_SignInState_p = CalcPtr(_adr.unk_SignInState);
		uintptr_t unk_SignInState_buf = unk_SignInState_p + 256 * controller_index;
		unk_SignInState_buf = 2;
		signed_in = true;
	}
	return _hooks.CL_GetLocalClientSignInState_h.stub<int>(controller_index);
}


