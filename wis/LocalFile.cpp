#include "LocalFile.h"
#include <sys/stat.h>

namespace wis {
    std::fstream* LocalFile::getStream() {
        fstream = new std::fstream(fileName);
        return fstream;
    }

    LocalFile::LocalFile(const std::string &fileName) : fileName(fileName) {}

    LocalFile::~LocalFile() {
        if (fstream) {
            fstream->close();
            delete fstream;
            fstream = nullptr;
        }
    }

    bool LocalFile::fileExist() {
        struct stat buf;
        return stat(fileName.c_str(), &buf) != -1;
    }
}