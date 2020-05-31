#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#include <cstdint>

namespace space_age {

    class space_age {

    public:
        space_age(std::uint64_t earth_age_in_seconds);

        std::uint64_t seconds() const;

    private:

        std::uint64_t _earth_age_in_seconds;

    };

}  // namespace space_age

#endif // SPACE_AGE_H
