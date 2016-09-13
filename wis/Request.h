#ifndef WEBIMAGESERVER_REQUEST_H
#define WEBIMAGESERVER_REQUEST_H

#include <utility>
#include <string>

namespace wis {

    class Request {
    private:
        std::string queryString;
        void parseQuery();
    public:
        Request(const std::string &queryString);
        std::string getFileName();
    };
}

#endif //WEBIMAGESERVER_REQUEST_H
