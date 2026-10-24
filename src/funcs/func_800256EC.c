#include "common.h"

typedef struct {
    u8 pad0[0xFF8];
    s32 unkFF8;
} S800256EC;

void func_800256EC(S800256EC *arg0) {
    arg0->unkFF8 = 0;
}
