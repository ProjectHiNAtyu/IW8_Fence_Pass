#pragma once
#include "Main.hpp"

struct gentity_s;

struct CmdArgs;

struct Addresses {
	uintptr_t ModuleBase;
	uintptr_t jmp_rbx;
};

union DvarValue
{
	bool enabled;
	int integer;
	unsigned int unsignedInt;
	__int64 integer64;
	unsigned __int64 unsignedInt64;
	float value;
	float vector[4];
	const char* string;
	unsigned __int8 color[4];
};


union DvarLimits {
	struct _enumeration {
		int string_count_;		// 0x0000
	private:
		char pad_0004[0x0004];	// 0x0004
	public:
		const char** strings_;	// 0x0008
	} enumeration_;
	struct _integer {
		int min_;				// 0x0000
		int max_;				// 0x0004
	} integer_;
	struct _integer64 {
		std::int64_t min_;		// 0x0000
		std::int64_t max_;		// 0x0008
	} integer64_;
	struct _unsigned_int64 {
		std::uint64_t min_;		// 0x0000
		std::uint64_t max_;		// 0x0008
	} unsigned_int64_;
	struct _value {
		float min_;				// 0x0000
		float max_;				// 0x0004
		float dev_gui_step_;	// 0x0008
	} value_;
	struct _vector {
		float min_;				// 0x0000
		float max_;				// 0x0004
		float dev_gui_step_;	// 0x0008
	} vector_;
};

struct BbConstUsageFlags
{
	bool initialized;
	DvarValue codeValue;
};

struct netadr_t;

struct dvar_t
{
	const char* name;
	unsigned int checksum;
	const char* description;
	unsigned int flags;
	char level[1];
	unsigned __int8 type;
	bool modified;
	unsigned __int16 hashNext;
	DvarValue current;
	DvarValue latched;
	DvarValue reset;
	char domain[0x10];
	BbConstUsageFlags BbConstUsageFlags;
};

struct EncryptionHeader
{
	unsigned int isEncrypted;
	unsigned __int8 IV[16];
};

struct __declspec(align(8)) XFile
{
	unsigned __int64 size;
	unsigned __int64 preloadWalkSize;
	unsigned __int64 blockSize[11];
	EncryptionHeader encryption;
};

struct DB_FFHeader
{
	unsigned __int64 magic;
	unsigned int headerVersion;
	unsigned int xfileVersion;
	bool dashCompressBuild;
	bool dashEncryptBuild;
	unsigned __int8 transientFileType[1];
	unsigned int residentPartSize;
	unsigned int residentHash;
	unsigned int alwaysLoadedPartSize;
	XFile xfileHeader;
};

struct EncryptionInfo
{
	EncryptionHeader header;
	unsigned __int8 privateKey[32];
};

struct DBFileHandle
{
	unsigned __int8 fileID[4];
	unsigned __int64 dcacheFileID;
};

struct cmd_function_s
{
	cmd_function_s* next;
	const char* name;
	const char** autoCompleteList;
	unsigned int autoCompleteListCount;
	void(__fastcall* function)();
};

struct DBFile
{
	char name[64];
	DBFileHandle dbFileHandle;
	bool isSecured;
	EncryptionInfo encryption;
};

struct Weapon;
struct scrContext_t;

extern dvar_t* player_name;
extern dvar_t* sv_cheats;
extern dvar_t* spawn_br_gas;
extern dvar_t* show_watermark;
extern dvar_t* player_sustainammo;

extern cmd_function_s set_byte_f_VAR;
extern cmd_function_s set_short_f_VAR;
extern cmd_function_s set_int_f_VAR;
extern cmd_function_s set_float_f_VAR;
extern cmd_function_s set_pointer_f_VAR;
extern cmd_function_s quit_f_VAR;
extern cmd_function_s openmenu_f_VAR;
extern cmd_function_s addbot_f_VAR;
extern cmd_function_s ddldump_f_VAR;
extern cmd_function_s weapondefdump_f_VAR;
extern cmd_function_s view_vehicle_ents_f_VAR;
extern cmd_function_s loadout_save_f_VAR;
extern cmd_function_s FastRestart_f_VAR;
extern cmd_function_s MapRestart_f_VAR;
extern cmd_function_s omnvar_set_f_VAR;
extern cmd_function_s omnvar_dump_f_VAR;
extern CmdArgs* cmd_args;

void* RtlAddVectoredExceptionHandler(LONG First, PVECTORED_EXCEPTION_HANDLER Handler);
NTSTATUS NtContinue(PCONTEXT threadContext, BOOLEAN raiseAlert);

ULONG64 randomULongLong(ULONG64 min, ULONG64 max);

#pragma region //game functions

// extern const char* (*va)(const char* fmt, ...);

#pragma endregion

extern Addresses g_Addrs;