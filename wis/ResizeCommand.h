#ifndef WEBIMAGESERVER_RESIZECOMMAND_H
#define WEBIMAGESERVER_RESIZECOMMAND_H

#include "Command.h"
#include "File.h"

namespace wis {
    class ResizeCommand : public Command {
    private:
        File file;
    public:
        virtual void execute() override;
    };
}
#endif //WEBIMAGESERVER_RESIZECOMMAND_H
