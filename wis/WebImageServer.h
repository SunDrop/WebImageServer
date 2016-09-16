#pragma once

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
