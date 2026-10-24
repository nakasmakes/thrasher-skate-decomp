#include "common.h"

extern u8 *D_8008AE94;

u16 func_8001D1D4(void) {
    return *(u16 *)(D_8008AE94 + 8);
}
