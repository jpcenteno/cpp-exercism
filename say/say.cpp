#include "say.h"

#include <vector>
#include <cassert>


namespace say {

    constexpr std::int64_t hundred  =               100;
    constexpr std::int64_t thousand =             1'000;
    constexpr std::int64_t million  =         1'000'000;
    constexpr std::int64_t billion  =     1'000'000'000;
    constexpr std::int64_t trillion = 1'000'000'000'000;

    std::string in_english_0_to_19(const std::int64_t n);

    std::string in_english_20_to_99(const std::int64_t n);

    std::string recursive_formatter(const std::int64_t n,
                                    const std::int64_t split,
                                    const std::string name);


    /* -- Public Functions ------------------------------------------------ */

    std::string in_english(const std::int64_t n) {

        if (0 <= n and n <= 19) {
            return in_english_0_to_19(n);

        } else if (20 <= n and n <= 99) {
            return in_english_20_to_99(n);

        } else if (100 <= n and n < thousand) {
            return recursive_formatter(n, hundred, "hundred");

        } else if (thousand <= n and n < million) {
            return recursive_formatter(n, thousand, "thousand");

        } else if (million <= n and n < billion) {
            return recursive_formatter(n, million, "million");

        } else if (billion <= n and n < trillion) {
            return recursive_formatter(n, billion, "billion");

        }

        throw std::domain_error("n must be in range 0 <= n < trillion.");

    }

    /* -- Aux Functions --------------------------------------------------- */

    std::string in_english_0_to_19(const std::int64_t n) {

        assert(0 <= n and n <= 19);

        std::vector<std::string> names = {"zero", "one", "two", "three",
            "four", "five", "six", "seven", "eight", "nine", "ten", "eleven",
            "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
            "seventeen", "eighteen", "nineteen"};

        return names[n];

    }


    std::string in_english_20_to_99(const std::int64_t n) {

        assert(20 <= n and n <= 99);

        std::vector<std::string> tens = { "fail", "fail", "twenty", "thirty",
            "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

        std::int64_t digit0 = n % 10;
        std::int64_t digit1 = n / 10;

        std::string prefix = tens[digit1];
        std::string suffix = (digit0 == 0)
            ? ""
            : "-" + in_english_0_to_19(digit0);

        return prefix + suffix;

    }

    std::string recursive_formatter(const std::int64_t n,
                                    const std::int64_t split,
                                    const std::string name) {

        std::int64_t n_prefix = n / split;
        std::int64_t n_suffix = n % split;

        std::string prefix = in_english(n_prefix);

        std::string suffix = "";
        if (n_suffix != 0) {
            suffix = " " + in_english(n_suffix);
        }

        return prefix + " " + name + suffix;

    }

}  // namespace say
