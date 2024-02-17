#include "args.hpp"

#include "common.hpp"

CCOMP::Arguments::Arguments(int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        if (argv[i] == std::string("-E")) {
            stop_after_preprocessing = true;
        } else {
            source_path = argv[i];
        }
    }

    if (source_path.empty()) {
        error("No source file provided");
    }
}
