#pragma once

#include "ICommand.h"
#include "../File.h"
#include "FileCommand.h"

namespace wis {
    class RotateCommand : private FileCommand, public ICommand {
    public:
        virtual void execute() override;
    };
}
