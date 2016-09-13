#include "Request.h"

namespace wis {
    Request::Request(const std::string &queryString) : queryString(queryString) {}

    void Request::parseQuery() {
        // TODO: implement it
    }

    std::string Request::getFileName() {
        return std::string(""); // TODO: implement it
    }

}
