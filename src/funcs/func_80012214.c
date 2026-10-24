#include "common.h"

typedef struct {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    s32 unk14;
} S80012214;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} T80012214;

void func_80012214(S80012214 *arg0, T80012214 *arg1) {
    arg0->unkC = arg1->unk0;
    arg0->unk10 = arg1->unk4;
    arg0->unk14 = arg1->unk8;
}
