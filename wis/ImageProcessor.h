#pragma once

#include <vector>
#include "File.h"
#include "command/ICommand.h"

namespace wis {
    class ImageProcessor {
    private:
        File* file;
        std::vector<ICommand*> commands;
    public:
        void setFile(File* file);

        void appendCommand(ICommand* command);

        File* process();
    };
}
