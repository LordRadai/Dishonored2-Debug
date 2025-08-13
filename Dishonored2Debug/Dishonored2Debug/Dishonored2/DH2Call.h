#pragma once
#include "globals.h"

#define DH2_CALL(type, offset, ...) \
    (reinterpret_cast<type>((MODULE_ADDR) + (offset))(__VA_ARGS__))

#define DH2_VCALL(obj, index, type, ...) \
    (reinterpret_cast<type>(((*reinterpret_cast<void***>(obj))[index])))(__VA_ARGS__)