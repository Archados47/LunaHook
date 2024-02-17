﻿   
#define ALREADY_INJECTED L"already injected" 
#define NEED_32_BIT L"architecture mismatch: only x86 can inject this process" 
#define NEED_64_BIT L"architecture mismatch: only x64 can inject this process" 
#define INJECT_FAILED L"couldn't inject" 
#define INVALID_CODEPAGE L"couldn't convert text (invalid codepage?)" 
#define PIPE_CONNECTED u8"pipe connected" 
#define INSERTING_HOOK u8"inserting hook: %s" 
#define REMOVING_HOOK u8"removing hook: %s" 
#define TOO_MANY_HOOKS u8"too many hooks: can't insert" 
#define HOOK_SEARCH_STARTING u8"starting hook search" 
#define HOOK_SEARCH_INITIALIZING u8"initializing hook search (%f%%)" 
#define NOT_ENOUGH_TEXT u8"not enough text to search accurately" 
#define HOOK_SEARCH_INITIALIZED u8"initialized hook search with %zd hooks" 
#define MAKE_GAME_PROCESS_TEXT u8"please click around in the game to force it to process text during the next %d seconds" 
#define HOOK_SEARCH_FINISHED u8"hook search finished, %d results found" 
#define OUT_OF_RECORDS_RETRY u8"out of search records, please retry if results are poor (default record count increased)" 
#define FUNC_MISSING u8"function not present" 
#define MODULE_MISSING u8"module not present" 
#define GARBAGE_MEMORY u8"memory inline constantly changing, useless to read" 
#define SEND_ERROR u8"Send ERROR (likely an unstable/incorrect H-code) in %s" 
#define READ_ERROR u8"Reader ERROR (likely an incorrect R-code) in %s" 
#define SearchForHooks_ERROR u8"SearchForHooks ERROR: out of memory, retrying to allocate %d" 
#define ResultsNum u8"%d results processed" 
#define HIJACK_ERROR u8"Hijack ERROR" 
#define COULD_NOT_FIND u8"could not find text" 
#define CONSOLE L"Console" 
#define InvalidLength  u8"something went very wrong (invalid length %d in %s)" 
#define InsertHookFailed u8"failed to insert hook %s" 
#define Match_Error u8"ERROR happened when matching engine %s " 
#define Attach_Error u8"ERROR happened when attaching engine %s ERROR" 
#define MatchedEngine u8"Matched engine %s" 
#define ConfirmStop "Confirmed engine %s, stop checking" 
#define Attach_Stop "Attach engine %s success and stop" 
#define ProcessRange "hijacking process located from 0x%p to 0x%p" 
#define WarningDummy "WARNING injected process is very small, possibly a dummy!" 
#define WndSelectProcess L"SelectProcess" 
#define WndLunaHostGui L"LunaHost Gui" 
#define WndSetting L"Setting" 
#define WndPlugins L"Plugins" 
#define NotifyInvalidHookCode L"Invalid HookCode" 
#define BtnSelectProcess L"Select Process" 
#define BtnShowSettingWindow L"Settings" 
#define BtnAttach L"Attach" 
#define BtnRefresh L"Refresh" 
#define BtnToClipboard L"to clipboard" 
#define BtnInsertUserHook L"Insert UserHook" 
#define BtnPlugin L"Plugins" 
#define LblFlushDelay L"flushDelay" 
#define LblFilterRepeat L"Filter Repeat" 
#define LblCodePage L"CodePage" 
#define MenuCopyHookCode L"CopyHookCode" 
#define MenuRemoveHook L"RemoveHook" 
#define MenuDetachProcess L"DetachProcess" 
#define MenuAddPlugin L"Add Plugin" 
#define MenuAddQtPlugin L"Add Qt Plugin" 
#define MenuRemovePlugin L"Remove Plugin" 
#define MenuPluginRankUp L"Up" 
#define MenuPluginRankDown L"Down" 
#define DefaultFont L"Arial" 
#define InVaildPlugin L"InVaild Plugin"
#define CantLoadQtLoader L"Can't Load QtLoader.dll"
#define LblPluginNotify L"Qt Plugins Will be Loaded at Start Only."
#define LblPluginRemove L"Remove Plugins Will be Useful after Restart."