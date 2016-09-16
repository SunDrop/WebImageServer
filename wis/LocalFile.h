#pragma once

#include "File.h"

namespace wis {
    class LocalFile : public File {
    private:
        std::string fileName;
    public:
        LocalFile(const std::string &fileName);

        virtual ~LocalFile();

        virtual std::fstream getStream() override;

    private:
        bool fileExist();
    };
}
