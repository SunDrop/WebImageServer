#pragma once

#include <utility>
#include <string>

namespace wis {

    class Request {
    private:
        std::string queryString;
        std::string protocol, host, path, query;

    private:
        void parseQuery();

    public:
        Request(const std::string &queryString);

        std::string getFileName();
    };
}
