#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    s32 unkC;
} S8001C3F0;

extern S8001C3F0 *D_8008AE5C;

u16 func_8001C3F0(s32 arg0, s32 arg1) {
    return D_8008AE5C[arg0].unk8 + arg1;
}
