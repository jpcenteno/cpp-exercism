#include "isogram.h"

#include <set>

namespace isogram {

    bool is_isogram(const std::string str) {

        std::set<char> seenChars;

        for (char c : str) {
            if (not isalpha(c)) continue;
            c = tolower(c);
            if (seenChars.find(c) != seenChars.end()) return false;
            seenChars.insert(c);
        }

        return true;
    }

}  // namespace isogram
