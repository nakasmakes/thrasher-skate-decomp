#include "common.h"

extern u8 *D_8008AEC4;

u8 *func_8001D870(u16 arg0) {
    return D_8008AEC4 + arg0 * 0x44;
}
