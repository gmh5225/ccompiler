#pragma once

#include <iostream>

namespace CCOMP {

struct Arguments {
    Arguments(int argc, char **argv);

    friend std::ostream &operator<<(std::ostream &os, const Arguments &args) {
        os << "Arguments:\n";
        os << " - "
           << "Source: " << args.source_path;
        return os;
    }

   public:
    std::string source_path;
    bool stop_after_preprocessing = false;
};

}  // namespace CCOMP
