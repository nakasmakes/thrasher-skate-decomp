#include "common.h"

extern s32 D_8008AEC8;
extern s32 D_8008AECC;

s32 func_8001D860(s32 arg0, s32 arg1) {
    D_8008AEC8 = arg0;
    D_8008AECC = arg1;
    return 0;
}
