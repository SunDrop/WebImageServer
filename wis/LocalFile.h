#pragma once

#include "File.h"

namespace wis {
    class LocalFile : public File {
    private:
        std::string fileName;
        std::fstream *fstream;
    public:
        LocalFile(const std::string &fileName);

        virtual ~LocalFile();

        virtual std::fstream *getStream() override;

        bool fileExist();
    };
}
