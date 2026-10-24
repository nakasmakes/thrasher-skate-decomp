#include "common.h"

extern u8 *D_8008AE84;

s32 func_8001D08C(void) {
    return *(s32 *)(D_8008AE84 + 8);
}
