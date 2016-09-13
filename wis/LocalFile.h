#ifndef WEBIMAGESERVER_LOCALFILE_H
#define WEBIMAGESERVER_LOCALFILE_H

#include "File.h"

namespace wis {
    class LocalFile : public File {
    private:
        std::string fileName;
    public:
        LocalFile(const std::string &fileName);

        virtual ~LocalFile();

        virtual std::fstream getStream() override;
    };
}

#endif //WEBIMAGESERVER_LOCALFILE_H
