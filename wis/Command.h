#ifndef WEBIMAGESERVER_COMMAND_H
#define WEBIMAGESERVER_COMMAND_H

namespace wis {
    class Command {
        virtual void execute() = 0;
    };
}

#endif //WEBIMAGESERVER_COMMAND_H
