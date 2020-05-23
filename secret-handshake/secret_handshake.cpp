#include "secret_handshake.h"

#include <algorithm>

namespace secret_handshake {

    constexpr std::uint64_t mask_wink         = 1 << 0;
    constexpr std::uint64_t mask_double_blink = 1 << 1;
    constexpr std::uint64_t mask_close_eyes   = 1 << 2;
    constexpr std::uint64_t mask_jump         = 1 << 3;
    constexpr std::uint64_t mask_reverse      = 1 << 4;

    std::vector<std::string> commands(std::uint64_t code) {

        std::vector<std::string> sequence;

        if (code & mask_wink) {
            sequence.push_back("wink");
        }

        if (code & mask_double_blink) {
            sequence.push_back("double blink");
        }

        if (code & mask_close_eyes) {
            sequence.push_back("close your eyes");
        }

        if (code & mask_jump) {
            sequence.push_back("jump");
        }

        if (code & mask_reverse) {
            std::reverse(sequence.begin(), sequence.end());
        }

        return sequence;

    }

}  // namespace secret_handshake
