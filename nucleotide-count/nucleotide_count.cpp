#include "nucleotide_count.h"

namespace nucleotide_count {

    bool is_valid_nucleotide(const char c) {
        return c == 'A' or c == 'T' or c == 'C' or c == 'G';
    }

    counter::counter(const std::string str)
        : _nucleotideCounts(str.begin(), str.end()) {

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

        if (not is_valid_nucleotide(nucleotide)) {
            throw std::invalid_argument("invalid nucleotide");
        }

        return _nucleotideCounts.count(nucleotide);

    }

}  // namespace nucleotide_count
