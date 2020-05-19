#include "two_fer.h"

#include <sstream>

namespace two_fer
{

    std::string two_fer() {
        return "One for you, one for me.";
    }

    std::string two_fer(const std::string& name) {

        // Construct the string using a ostringstream:
        std::ostringstream ss;
        ss << "One for " << name << ", one for me.";
        return ss.str();

    }

} // namespace two_fer

