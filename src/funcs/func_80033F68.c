#include "common.h"

extern s32 D_8008B0BC;

s32 func_80033F68(s32 arg0) {
    s32 prev = D_8008B0BC;
    D_8008B0BC = arg0;
    return prev;
}
