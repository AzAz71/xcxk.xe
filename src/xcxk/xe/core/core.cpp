#include "core.h"
#include "version.h"

namespace xcxk::xe {
    core::core() {
        this->ID = M_ID;
        this->Version = M_VERSION;
    }

    void core::onLoad(const std::map<std::string, void *> &args) {

    }
}

extern "C" xcxk::xe::core::model *init() {
    auto Core = new xcxk::xe::core();
    return (xcxk::xe::core::model *)Core;
}