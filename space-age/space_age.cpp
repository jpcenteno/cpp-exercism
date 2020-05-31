#include "space_age.h"

namespace space_age {

    constexpr double seconds_in_earth_year = 31557600.0;

    constexpr double orbital_period_mercury = 0.2408467;
    constexpr double orbital_period_venus = 0.61519726;
    constexpr double orbital_period_mars = 1.8808158;
    constexpr double orbital_period_jupiter = 11.862615;
    constexpr double orbital_period_saturn = 29.447498;
    constexpr double orbital_period_uranus = 84.016846;
    constexpr double orbital_period_neptune = 164.79132;

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

    double space_age::on_mercury() const {
        return on_earth() / orbital_period_mercury;
    }

    double space_age::on_venus() const {
        return on_earth() / orbital_period_venus;
    }

    double space_age::on_mars() const {
        return on_earth() / orbital_period_mars;
    }

    double space_age::on_jupiter() const {
        return on_earth() / orbital_period_jupiter;
    }

    double space_age::on_saturn() const {
        return on_earth() / orbital_period_saturn;
    }

    double space_age::on_uranus() const {
        return on_earth() / orbital_period_uranus;
    }

    double space_age::on_neptune() const {
        return on_earth() / orbital_period_neptune;
    }

}  // namespace space_age
