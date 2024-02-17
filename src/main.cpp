#include <iostream>

#include "args.hpp"
#include "common.hpp"
#include "preprocessor.hpp"

using CCOMP::Arguments;
using CCOMP::preprocessor;

void run(const Arguments &args) {
    std::string file_content = preprocessor(args);

    if (args.stop_after_preprocessing) {
        std::cout << file_content << '\n';
        return;
    }

    error("Not implemented");
}

int main(int argc, char **argv) {
    auto args = Arguments(argc, argv);
    std::cout << args << '\n';
    run(args);
}
