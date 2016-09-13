#ifndef WEBIMAGESERVER_ROTATECOMMAND_H
#define WEBIMAGESERVER_ROTATECOMMAND_H


#include "Command.h"
#include "File.h"

namespace wis {
    class RotateCommand : public Command {
    private:
        File file;
    public:
        virtual void execute() override;
    };
}

#endif //WEBIMAGESERVER_ROTATECOMMAND_H
