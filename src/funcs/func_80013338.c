#include "common.h"

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
} S80013338;

void func_80013338(S80013338 *arg0, S80013338 *arg1) {
    arg0->unk0 = arg1->unk0;
    arg0->unk2 = arg1->unk2;
    arg0->unk4 = arg1->unk4;
}
