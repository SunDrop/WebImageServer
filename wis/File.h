#ifndef WEBIMAGESERVER_FILE_H
#define WEBIMAGESERVER_FILE_H

#include <fstream>

namespace wis {
    class File {
        virtual std::fstream getStream() = 0;
    };
}
#endif //WEBIMAGESERVER_FILE_H
