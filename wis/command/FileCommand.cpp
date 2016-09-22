#include "FileCommand.h"

namespace wis {
    namespace cmd {
        void FileCommand::setFile(File *file) {
            this->file = file;
        }

        File *FileCommand::getFile() {
            return file;
        }
    }
}