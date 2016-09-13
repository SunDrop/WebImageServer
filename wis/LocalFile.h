#ifndef WEBIMAGESERVER_LOCALFILE_H
#define WEBIMAGESERVER_LOCALFILE_H

#include "File.h"

namespace wis {
    class LocalFile : public File {
        virtual std::fstream getStream() override;
    };
}

#endif //WEBIMAGESERVER_LOCALFILE_H
