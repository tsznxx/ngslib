#include "common.h"
#ifndef PROFILEALN_H
#define PROFILEALN_H

CPPEXTERN float profile_aln(const float *T1, const char *seq1, 
			 const float *T2, const char *seq2);

CPPEXTERN int set_paln_params(double gap_open, double gap_ext, 
			   double seqweight, int free_ends);

#endif
