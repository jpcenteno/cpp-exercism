#include "space_age.h"

namespace space_age {

    constexpr double seconds_in_earth_year = 31557600.0;

    // Constructors:

    space_age::space_age(std::uint64_t earth_age_in_seconds) 
        : _earth_age_in_seconds(earth_age_in_seconds) {}

    // Accessors:

    std::uint64_t space_age::seconds() const {
        return _earth_age_in_seconds;
    }

    // Age in planets:

    double space_age::on_earth() const {
        return _earth_age_in_seconds / seconds_in_earth_year;
    }

}  // namespace space_age
