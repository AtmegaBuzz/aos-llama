#ifndef SWAPNIL_H
#define SWAPNIL_H

// C++ compatibility
#ifdef __cplusplus
#define C_API_BEGIN extern "C" {
#define C_API_END }
#else
#define C_API_BEGIN
#define C_API_END
#endif // !__cplusplus

C_API_BEGIN

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

// The functions we want to implement. Names do not matter.
static int add(lua_State* lua);

#define LUA_SWAPNILLIBNAME  "swapnil"
// The function which will be called when "require 'swapnil'" is called from Lua
LUAMOD_API int luaopen_swapnil(lua_State* lua);

C_API_END

#endif // !SWAPNIL_H
