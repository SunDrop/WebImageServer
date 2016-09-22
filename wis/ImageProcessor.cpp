#include "ImageProcessor.h"
#include "LocalFile.h"

namespace wis {

    void ImageProcessor::setFile(File *file) {
        this->file = file;
    }

    File *ImageProcessor::process() {
        if (!file) {
            throw std::logic_error("File not set");
        }

        for (auto &command : commands) {
            command->setFile(file);
            command->execute();
        }

        return file;
    }

    void ImageProcessor::appendCommand(cmd::FileCommand *command) {
        commands.push_back(command);
    }
}