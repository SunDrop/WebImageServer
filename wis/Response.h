#ifndef WEBIMAGESERVER_RESPONSE_H
#define WEBIMAGESERVER_RESPONSE_H

#include <vector>
#include "File.h"

namespace wis {
    class Response {
    private:
        std::vector<File> files;
    public:
        void send() throw();
    };
}

#endif //WEBIMAGESERVER_RESPONSE_H
