#include "space_age.h"

namespace space_age {

    space_age::space_age(std::uint64_t earth_age_in_seconds) 
        : _earth_age_in_seconds(earth_age_in_seconds) {}

    std::uint64_t space_age::seconds() const {
        return _earth_age_in_seconds;
    }

}  // namespace space_age
