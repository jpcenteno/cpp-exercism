#include <algorithm>

#include "nucleotide_count.h"

namespace nucleotide_count {

    void assert_valid_nucleotide(const char c) {
        if (c != 'A' and c != 'T' and c != 'C' and c != 'G') {
            throw std::invalid_argument("invalid nucleotide");
        }
    }

    counter::counter(const std::string str) {
        for (const char c : str) {
            assert_valid_nucleotide(c);
            _nucleotideCounts.insert(c);
        }
    }

    const std::map<char, int> counter::nucleotide_counts() const {
        std::map<char, int> nucleotideCountMap;
        nucleotideCountMap.insert({'A', count('A')});
        nucleotideCountMap.insert({'T', count('T')});
        nucleotideCountMap.insert({'C', count('C')});
        nucleotideCountMap.insert({'G', count('G')});
        return nucleotideCountMap;
    }

    unsigned int counter::count(char nucleotide) const {
        assert_valid_nucleotide(nucleotide);
        return _nucleotideCounts.count(nucleotide);
    }

}  // namespace nucleotide_count
