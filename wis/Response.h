#pragma once

#include <vector>
#include "File.h"

namespace wis {
    class Response {
    private:
        std::vector<File> files;
    public:
        void send() throw();
    };
}
