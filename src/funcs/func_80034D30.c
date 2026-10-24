#include "common.h"

extern s32 D_8008B0F4;

void func_80034D30(u8 *arg0) {
    s32 size = *(s32 *)(arg0 - 4) + 4;
    D_8008B0F4 = D_8008B0F4 + size;
}
