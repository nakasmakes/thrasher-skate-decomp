#include "common.h"

typedef struct {
    u8 pad0[0x1328];
    s32 unk1328;
} S8002348C;

void func_8002348C(S8002348C *arg0, s32 arg1) {
    arg0->unk1328 = arg1;
}
