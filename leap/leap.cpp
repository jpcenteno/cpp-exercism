#include "leap.h"

namespace leap {

    bool is_leap_year(const unsigned int year) {
        return ( (year % 4 == 0) and not (year % 100 == 0) )
            or (year % 400 == 0);
    }

}  // namespace leap
