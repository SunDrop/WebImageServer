#pragma once

#include "ICommand.h"
#include "FileCommand.h"
#include "../File.h"

namespace wis {
    class ResizeCommand : private FileCommand, public ICommand {
    public:
        virtual void execute() override;
    };
}
