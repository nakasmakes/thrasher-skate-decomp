#include "common.h"

typedef struct {
    u8 pad0[0x24];
    volatile s32 unk24;
    volatile s32 unk28;
    volatile s32 unk2C;
} S80033804;

void func_80033804(S80033804 *arg0) {
    arg0->unk24 = 0;
    arg0->unk28 = 0;
    arg0->unk2C = 0;
}
