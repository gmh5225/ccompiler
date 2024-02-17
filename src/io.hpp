#pragma once

#include <string>

namespace CCOMP::IO {

std::string read_file(const std::string &path);

std::string exec(const std::string &command);

}  // namespace CCOMP::IO
