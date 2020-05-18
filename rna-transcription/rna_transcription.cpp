#include "rna_transcription.h"

#include <algorithm>

namespace rna_transcription {

    char to_rna(const char nucleotide) {
        if (nucleotide == 'C') {
            return 'G';
        } else if (nucleotide == 'G') {
            return 'C';
        } else if (nucleotide == 'A') {
            return 'U';
        } else if (nucleotide == 'T') {
            return 'A';
        }
        return 0;
    }

    std::string to_rna(std::string sequence) {
        std::transform(sequence.begin(), sequence.end(), sequence.begin(),
                       [](const char c) -> char { return rna_transcription::to_rna(c); });
        return sequence;
    }

}  // namespace rna_transcription
