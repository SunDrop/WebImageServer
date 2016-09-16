#include "LocalFile.h"
#include <sys/stat.h>

namespace wis {
    std::fstream LocalFile::getStream() {
        return std::fstream(fileName); // TODO: implement it
    }

    LocalFile::LocalFile(const std::string &fileName) : fileName(fileName) {} // TODO: open file

    LocalFile::~LocalFile() {
        // TODO: close file
    }

    bool LocalFile::fileExist() {
        struct stat buf;
        return stat(fileName.c_str(), &buf) != -1;
    }
}