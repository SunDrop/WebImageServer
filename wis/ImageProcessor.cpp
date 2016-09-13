#include "ImageProcessor.h"

namespace wis {

    void ImageProcessor::appendCommand(Command command) {
        commands.push_back(command);
    }

    void ImageProcessor::setFile(File file) {
        this->file = std::move(file);
    }

    File ImageProcessor::process() {
        // TODO: implement it
        return File();
    }
}