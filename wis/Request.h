#pragma once

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
