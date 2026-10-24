#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} S8001C3B4;

extern S8001C3B4 *D_8008AE5C;

s32 func_8001C3B4(s32 arg0) {
    return D_8008AE5C[arg0].unkC;
}
