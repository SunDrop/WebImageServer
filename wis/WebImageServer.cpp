#include "WebImageServer.h"
#include "ImageProcessor.h"
#include "LocalFile.h"
#include "ResizeCommand.h"
#include "RotateCommand.h"

namespace wis {
    void WebImageServer::processQuery() {
        // TODO: implement it
        ImageProcessor imageProcessor;
        imageProcessor.setFile(LocalFile(request.getFileName()));
        imageProcessor.appendCommand(ResizeCommand());
        File output = imageProcessor.process();
    }
}