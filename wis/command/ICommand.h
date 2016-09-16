#pragma once

namespace wis {
    class ICommand {
        virtual void execute() = 0;
    };
}
