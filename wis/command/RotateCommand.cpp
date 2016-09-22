#include "RotateCommand.h"
#include <Magick++.h>
#include <iostream>

namespace wis {
    namespace cmd {
        void RotateCommand::execute() {
            Magick::InitializeMagick();

            Magick::Image image;
            try {
                // Read a file into image object
                image.read(getFile());

                // Rotate the image
                image.rotate(90);

                // Write the image to a file
                image.write(getFile());
            }
            catch (std::exception &error_) {
                std::cerr << "Caught exception: " << error_.what() << std::endl;
            }
        }
    }
}