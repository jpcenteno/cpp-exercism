#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <set>
#include <string>

namespace nucleotide_count {

    class counter {
    public:

        counter(const std::string);

        const std::map<char, int> nucleotide_counts() const;

        unsigned int count(char) const;

    private:

        std::multiset<char> _nucleotideCounts;

    };

}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H
