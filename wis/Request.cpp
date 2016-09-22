#include <algorithm>
#include <stdexcept>
#include "Request.h"

namespace wis {
    Request::Request(const std::string &queryString) : queryString(queryString) {
        parseQuery();
    }

    void Request::parseQuery() {
        const std::string protocolEnd("://");
        auto protocolIterator = std::search(queryString.begin(), queryString.end(),
                                            protocolEnd.begin(), protocolEnd.end());
        protocol.reserve(std::distance(queryString.begin(), protocolIterator));
        std::transform(queryString.begin(), protocolIterator,
                       std::back_inserter(protocol),
                       std::ptr_fun<int, int>(tolower)); // protocol is icase
        if (protocolIterator == queryString.end()) {
            return;
        }
        std::advance(protocolIterator, protocolEnd.length());
        auto pathIterator = std::find(protocolIterator, queryString.end(), '/');
        host.reserve(std::distance(protocolIterator, pathIterator));
        transform(protocolIterator, pathIterator,
                  std::back_inserter(host),
                  std::ptr_fun<int, int>(tolower)); // host is icase
        auto queryIterator = std::find(pathIterator, queryString.end(), '?');
        path.assign(pathIterator, queryIterator);
        if (queryIterator != queryString.end()) {
            ++queryIterator;
        }
        query.assign(queryIterator, queryString.end());
    }

    std::string Request::getFileName() {
        if (queryString.empty()) {
            throw std::logic_error("queryString is empty");
        }
        if (query.empty()) {
            throw std::logic_error("query is empty");
        }

        return std::string(query);
    }

}
