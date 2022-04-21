#include "utils.hpp"
#include "tcal_conf.h"

namespace tcal {
    std::string GetLibVersion() {
        return "tcal Lib Version " + std::to_string(TCAL_LIB_VERSION_MAJOR) + "." + std::to_string(TCAL_LIB_VERSION_MINOR);
    }
}