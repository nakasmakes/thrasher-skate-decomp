#include "common.h"

typedef struct {
    volatile s32 unk0;
    volatile s32 unk4;
    volatile s32 unk8;
} S80032FE0;

void func_80032FE0(S80032FE0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
