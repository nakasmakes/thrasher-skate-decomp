#include "common.h"

extern u8 D_800A4F5C[0x10];

u8 *func_8002BA54(void) {
    return *(u8 **)D_800A4F5C;
}
