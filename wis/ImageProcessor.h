#pragma once

#include <vector>
#include "File.h"
#include "command/FileCommand.h"

namespace wis {
    class ImageProcessor {
    private:
        File *file;
        std::vector<cmd::FileCommand *> commands;
    public:
        void setFile(File *file);

        void appendCommand(cmd::FileCommand *command);

        File *process();
    };
}
