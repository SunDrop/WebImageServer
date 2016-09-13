#ifndef WEBIMAGESERVER_WEBIMAGESERVER_H
#define WEBIMAGESERVER_WEBIMAGESERVER_H

#include "Request.h"
#include "Response.h"

namespace wis {
    class WebImageServer {
    private:
        Request request;
        Response response;
    public:
        void processQuery();
    };
}

#endif //WEBIMAGESERVER_WEBIMAGESERVER_H
