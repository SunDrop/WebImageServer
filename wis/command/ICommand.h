#pragma once

namespace wis {
    namespace cmd {
        class ICommand {
        public:
            virtual void execute() = 0;
        };
    }
}