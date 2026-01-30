#include <string>
#include <dlfcn.h>
#include <link.h>

#include <CLI11.hpp>

#include <spdlog/spdlog-inl.h>
#include <spdlog/sinks/stdout_color_sinks-inl.h>

#include <xcxk/xe/core/model/model.h>

#include "version.h"

#include "init.h"

std::shared_ptr<spdlog::logger> logger;
std::string core_filepath = "./libxcxk.xe.core.so";

void s_args_prase(int argc, char *argv[]) {
    CLI::App Main(M_ID);
    Main.add_option("--core-filepath", core_filepath)->default_str(core_filepath);

    // log config
    auto log_group = Main.add_option_group("log", "log config");

    auto log_level_group = log_group->add_option_group("log_level", "log level");
    log_level_group->require_option(0, 1);

    log_level_group->add_flag_callback("--log-debug", [](){spdlog::set_level(spdlog::level::debug);});
    log_level_group->add_flag_callback("--log-trace", [](){spdlog::set_level(spdlog::level::trace);});
    log_level_group->add_flag_callback("--log-info", [](){spdlog::set_level(spdlog::level::info);}, "[Default]");
    log_level_group->add_flag_callback("--log-warn", [](){spdlog::set_level(spdlog::level::warn);});
    log_level_group->add_flag_callback("--log-err", [](){spdlog::set_level(spdlog::level::err);});
    log_level_group->add_flag_callback("--log-critical", [](){spdlog::set_level(spdlog::level::critical);});
    log_level_group->add_flag_callback("--log-off", [](){spdlog::set_level(spdlog::level::off);});

    CLI11_PARSE(Main, argc, argv);

}

void s_init(int argc, char *argv[]) {
    spdlog::set_pattern("[%^%-1L%$][%Y-%m-%d %H:%M:%S.%f][%n] %v");
    spdlog::set_level(spdlog::level::info);
    logger = spdlog::stdout_color_mt(M_ID);

    try {
        s_args_prase(argc, argv);
    } catch (std::runtime_error &m) {
        logger->error(m.what());
    }
}

void m_load() {
    auto *lm = (link_map *)dlopen(core_filepath.c_str(), RTLD_NOW);

}

void m_init() {

}
