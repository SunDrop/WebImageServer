#include "ImageProcessor.h"
#include "LocalFile.h"

namespace wis {

    void ImageProcessor::setFile(File *file) {
        this->file = file;
    }

    File* ImageProcessor::process() {
        // TODO: implement it
        return nullptr;
    }

    void ImageProcessor::appendCommand(ICommand *command) {
        commands.push_back(command);

    }
}