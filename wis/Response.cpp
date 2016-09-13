#include "Response.h"

namespace wis {
    Response::Response() : files(nullptr) {}

    void Response::send() {
        // TODO: send files
    }

    Response::~Response() {
        if (nullptr != files) {
            delete[] files;
            files = nullptr;
        }
    }
}