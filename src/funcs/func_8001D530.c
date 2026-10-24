#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 *unk8;
} S8001D530;

s32 *func_8001D530(S8001D530 *arg0, s32 arg1) {
    return &arg0->unk8[arg1];
}
