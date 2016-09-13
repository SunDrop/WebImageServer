#include "LocalFile.h"

namespace wis {
    std::fstream LocalFile::getStream() {
        return nullptr; // TODO: implement it
    }

    LocalFile::LocalFile(const std::string &fileName) : fileName(fileName) {} // TODO: open file

    LocalFile::~LocalFile() {
        // TODO: close file
    }
}