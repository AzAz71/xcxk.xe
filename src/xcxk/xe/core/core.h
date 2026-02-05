#ifndef XCXK_XE_CORE_H
#define XCXK_XE_CORE_H
#include "../model/model.h"
namespace xcxk::xe {
    class core : public model {
    protected:

    public:
        core();
        void onLoad(const std::map<std::string, void *> &args) override;
    };
}


#endif //XCXK_XE_CORE_H