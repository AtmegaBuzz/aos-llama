#define LUA_LIB
#include "lua.h"
#include "lauxlib.h"
#include "swapnil.h"


// The add function in C++
static int add(lua_State* L) {
    int a = luaL_checkinteger(L, 1);
    int b = luaL_checkinteger(L, 2);
    int c = a + b;
    lua_pushinteger(L, c);
    return 1;
}


// The array of luaL_Reg containing the functions to be registered
static const luaL_Reg swapnil[] = {
    {"add", add},
    {NULL, NULL}
};

// The entry point function for the library
LUALIB_API int luaopen_swapnil(lua_State* L) {
    lua_createtable(L, 0, 1);

    // Set key-value pairs of the table
    lua_pushstring(L, "add");
    lua_pushcfunction(L, &add);
    lua_settable(L, -3);

    return 1;
}
