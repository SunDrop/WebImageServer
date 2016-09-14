#ifndef WEBIMAGESERVER_IMAGEPROCESSOR_H
#define WEBIMAGESERVER_IMAGEPROCESSOR_H

#include <vector>
#include "File.h"
#include "Command.h"

namespace wis {
    class ImageProcessor {
    private:
        File file;
        std::vector<Command> commands;
    public:
        void setFile(File file);

        void appendCommand(Command);

        File process();
    };
}

#endif //WEBIMAGESERVER_IMAGEPROCESSOR_H
