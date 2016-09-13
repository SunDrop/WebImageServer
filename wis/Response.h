#ifndef WEBIMAGESERVER_RESPONSE_H
#define WEBIMAGESERVER_RESPONSE_H

#include "File.h"

namespace wis {
    class Response {
    private:
        File* files;
    public:
        Response();

        void send() throw();

        virtual ~Response();
    };
}

#endif //WEBIMAGESERVER_RESPONSE_H
