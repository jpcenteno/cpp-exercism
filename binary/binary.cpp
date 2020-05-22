#include "binary.h"

#include <numeric>

namespace binary {

    bool valid_binary_number(std::string str) {

        for (const char c : str) {
            if (c != '0' and c != '1') {
                return false;
            }
        }

        return true;
    }

    std::uint64_t convert(std::string binary) {

        if ( not valid_binary_number(binary) ) {
            return 0;
        }

        return std::accumulate(binary.begin(), binary.end(), 0,
            [](std::uint64_t acc, char c){
                return (acc << 1) | ( c == '1' ? 1 : 0);
            });

    }

}  // namespace binary
