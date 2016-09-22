#pragma once

#include <fstream>

namespace wis {
    class File {
        virtual std::fstream* getStream() = 0;
    };
}
