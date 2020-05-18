#include "rna_transcription.h"

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

}  // namespace rna_transcription
