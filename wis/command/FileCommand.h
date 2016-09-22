#pragma once

#include "../File.h"
#include "ICommand.h"

namespace wis {
    namespace cmd {
        class FileCommand : public ICommand {
        private:
            File *file;
        public:
            void setFile(File *file);
            File* getFile();
        };
    }
}