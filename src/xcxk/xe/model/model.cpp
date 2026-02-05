#include "model.h"

namespace xcxk::xe {
    model::model() = default;

    std::string &model::getID() {
        return this->ID;
    }

    std::string &model::getName() {
        return this->Name;
    }

    std::string &model::getVersion() {
        return this->Version;
    }

    std::string &model::getAuther() {
        return this->Auther;
    }

    std::string &model::getDescription() {
        return this->Description;
    }

    std::shared_ptr<spdlog::logger> &model::getLogger() {
        return this->Logger;
    }

    void model::onLoad() {
        onLoad({});
    }

    void model::onLoad(const std::map<std::string, void *> &args) {

    }

    void model::onEnable() {

    }

    void model::onDisable() {

    }

    void model::onUnload() {

    }
}
