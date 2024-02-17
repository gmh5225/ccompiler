#pragma once

#include <string>

#include "args.hpp"
#include "io.hpp"

namespace CCOMP {

std::string static inline preprocessor(const Arguments &args) {
    return IO::exec("clang -E " + args.source_path);
}

}  // namespace CCOMP
