#pragma once
#include <Windows.h>
#include <dbghelp.h>
#include <winternl.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <shlobj.h>
#include "zlib.h"
#include <stdexcept>
#include <iomanip>
#include <vector>
#include <tlhelp32.h>

#include <dxgi1_5.h>
#include <d3d12.h>
#include <intrin.h>

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "DbgHelp.lib")

#include "common/utils/hook.hpp"
#include "common/utils/hardware_breakpoint.hpp"
#include "functions.hpp"
#include "structs.h"
#include "assets.h"
#include "common/utils/nt.hpp"

#include "ini.h"
#include "json.hpp"
#include "splashscreen.hpp"

extern void* exception_handler;

#define base g_Addrs.ModuleBase

#pragma warning(disable:4996)
#pragma comment(lib, "Gdi32.lib")


#define INRANGE(x, a, b)   (x >= a && x <= b)
#define GET_BITS( x )    (INRANGE((x&(~0x20)),'A','F') ? ((x&(~0x20)) - 'A' + 0xa) : (INRANGE(x,'0','9') ? x - '0' : 0))
#define GET_BYTE( x )    (GET_BITS(x[0]) << 4 | GET_BITS(x[1]))

struct menu_variables {
	bool bInitiateMenu;
	bool bMenuOpen;

};

std::pair<void**, void*> patch_import(const std::string& lib, const std::string& func, void* function);

uintptr_t find_pattern(const char* module_name, const char* pattern);
uintptr_t find_pattern(uintptr_t start, const char* module_name, const char* pattern);

size_t operator"" _b(size_t val);
size_t reverse_b(size_t val);
size_t reverse_b(const void* val);

size_t operator"" _g(size_t val);
size_t reverse_g(size_t val);
size_t reverse_g(const void* val);

HANDLE createConsole();

void printSig(std::string name, void* address, size_t len);
bool isSubStr(std::string str, std::string subStr);
float strToFloat(const std::string& str);

struct DvarPair
{
	const char* m_key;
	const char* m_value;
};
inline bool IsBadPointer(uintptr_t* ptr)
{
	__try
	{
		volatile auto result = *ptr;
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		return true;
	}
	return false;
}

struct DvarMap
{
	DvarPair m_pairs[10000];
};
extern int g_dvarmapcount;
extern DvarPair g_dvarmap[6821];

struct shaderOverride_t
{
	float scrollRateX;
	float scrollRateY;
	float scrollRateR;
	float tilingX;
	float tilingY;
	float rotation;
	float alpha;
	float emissive;
	float atlasTime;
};

struct GfxSceneHudOutlineInfo
{
	unsigned int color;
	float scopeStencil;
	bool drawOccludedPixels;
	bool drawNonOccludedPixels;
	bool fill;
	bool useAlternateColor;
	bool forSpectator;
	bool specialActive;
	unsigned __int8 renderMode;
	unsigned __int8 lineWidth;
	unsigned __int8 temperatureSet;
	unsigned int mapEntLookup;
	float temperatureBase;
	float temperatureScale;
	float characterEVOffset;
};

