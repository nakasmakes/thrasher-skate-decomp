#include "common.h"

typedef struct {
    u8 pad0[0x3C];
    void *unk3C;
    void *unk40;
} S8002B564;

typedef struct {
    u8 pad0[8];
    void *unk8;
} T8002B564;

void func_8002B564(S8002B564 *arg0, T8002B564 *arg1) {
    arg0->unk40 = arg1->unk8;
    arg1->unk8 = arg0;
    arg0->unk3C = arg1;
}
