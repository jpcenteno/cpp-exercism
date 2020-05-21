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

        std::string::size_type n = binary.size();
        std::uint64_t out = 0;

        for (std::string::size_type i = 0; i < n; ++i) {
            const char c = binary[n - i - 1];
            if (c == '1') {
                out = out | (1 << i);
            }
        }

        return out;

    }

}  // namespace binary
