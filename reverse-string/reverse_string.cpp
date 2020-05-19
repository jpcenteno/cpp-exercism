#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(const std::string& input_string) {

        // Copy `input_string` into a mutable string and reverse it.
        std::string out(input_string);
        std::string::size_type n = out.size();
        for (std::string::size_type i = 0; i < n / 2; ++i) {
            std::swap(out[i], out[n - i - 1]);
        }

        return out;

    }

}  // namespace reverse_string
