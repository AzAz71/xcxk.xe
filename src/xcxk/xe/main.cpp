#include <unistd.h>
#include <stdio.h>

#include <spdlog/logger.h>

#include "version.h"
#include "msg/messages.h"
#include "init.h"

int main(int argc, char *argv[]) {
    fprintf(stdout, M_LOADING_S);
    try {
        s_init(argc, argv);
        core_run();
    } catch (std::runtime_error &m) {
        fprintf(stderr, m.what());
    }
    //srand(time(NULL));
    //printf(oms[rand() % oms.size()].c_str());
    return 0;
}
