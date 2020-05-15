#include "isogram.h"

#include <set>

namespace isogram {

    bool is_isogram(const std::string str) {

        std::set<char> seenChars;

        for (char c : str) {
            if ( isalpha(c) ) {
                const auto res = seenChars.insert( tolower(c) );
                const bool wasInserted = res.second;
                if ( not wasInserted ) return false;
            }
        }

        return true;
    }

}  // namespace isogram
