#include "rna_transcription.h"

#include <algorithm>

namespace rna_transcription {

    char to_rna(const char nucleotide) {

        switch (nucleotide) {

            case 'C': return 'G';
            case 'G': return 'C';
            case 'A': return 'U';
            case 'T': return 'A';

            default: throw std::domain_error("Invalid Nucleotide");

        }

    }

    std::string to_rna(std::string sequence) {
        std::transform(sequence.begin(), sequence.end(), sequence.begin(),
                       [](const char c) -> char { return rna_transcription::to_rna(c); });
        return sequence;
    }

}  // namespace rna_transcription
