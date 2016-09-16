#pragma once

#include "../File.h"

namespace wis {
    class FileCommand {
    private:
        File *file;
    public:
        void setFile(File *file);
    };
}
