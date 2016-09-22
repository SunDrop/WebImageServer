#include "WebImageServer.h"
#include "ImageProcessor.h"
#include "LocalFile.h"
#include "command/ResizeCommand.h"

namespace wis {
    void WebImageServer::processQuery() {
        ImageProcessor imageProcessor;
        const std::string &filename = request.getFileName();
        LocalFile file = LocalFile(filename);
        imageProcessor.setFile(&file);
        cmd::ResizeCommand command = cmd::ResizeCommand();
        imageProcessor.appendCommand(&command);
        File *pFile = imageProcessor.process();
    }
}