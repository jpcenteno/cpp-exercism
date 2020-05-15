#include "nucleotide_count.h"

namespace nucleotide_count {

    counter::counter(const std::string) {

    }

    const std::map<char, int>& counter::nucleotide_counts() const {
        return _nucleotideCounts;
    }

    unsigned int counter::count(char) const {
        return 0;
    }

}  // namespace nucleotide_count
