#ifndef XCXK_XE_MODEL_H
#define XCXK_XE_MODEL_H

#include <map>
#include <spdlog/spdlog.h>

namespace xcxk::xe {
    class model {
    protected:
        std::string ID;
        std::string Name;
        std::string Version;
        std::string Auther;
        std::string Description;

        std::shared_ptr<spdlog::logger> Logger;
        
    public:
        model();
        virtual ~model() = default;

        virtual std::string &getID();
        virtual std::string &getName();
        virtual std::string &getVersion();
        virtual std::string &getAuther();
        virtual std::string &getDescription();
        virtual std::shared_ptr<spdlog::logger> &getLogger();

        virtual void onLoad();
        virtual void onLoad(const std::map<std::string, void *> &args);
        virtual void onEnable();
        virtual void onDisable();
        virtual void onUnload();
    };
}

#endif //XCXK_XE_MODEL_H