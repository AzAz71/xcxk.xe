#include "core/core.h"
#include "core/version.h"

namespace xcxk::xe::core {
    core::core() {
        this->ID = M_ID;
        this->Version = M_VERSION;
    }
}

extern "C" xcxk::xe::core::model *init() {
    auto Core = new xcxk::xe::core::core();
    return (xcxk::xe::core::model *)Core;
}