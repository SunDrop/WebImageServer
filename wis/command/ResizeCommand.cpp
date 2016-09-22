#include "ResizeCommand.h"
#include <Magick++.h>
#include <iostream>

namespace wis {
    namespace cmd {
        void ResizeCommand::execute() {
            Magick::InitializeMagick();

            Magick::Image image;
            try {
                // Read a file into image object
                image.read(getFile());

                // Crop the image to specified size (width, height, xOffset, yOffset)
                image.crop(Magick::Geometry(100, 100, 100, 100));

                // Write the image to a file
                image.write(getFile());
            }
            catch (std::exception &error_) {
                std::cerr << "Caught exception: " << error_.what() << std::endl;
            }
        }
    }
}