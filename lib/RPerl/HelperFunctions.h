#ifndef __CPP__INCLUDED__RPerl__HelperFunctions_h
#define __CPP__INCLUDED__RPerl__HelperFunctions_h 1

// <<< DEBUG DEFINES >>>
#define RPerl__DEBUG 1  // NEED FIX: access actual inherited debug flag somehow?
#define RPerl__DEBUG2 1
#define RPerl__DEBUG3 1  // NEED FIX: these debug statements cause memory leaks by increasing the refcounts of data_i, data_i_plus_1, and swap

// <<< HELPER DEFINES >>>
#define AV_ELEMENT(av,index) ((av_fetch(av,index,0)!=NULL)?*av_fetch(av,index,0):newSV(0))
#define SV_REFERENCE_COUNT(sv) (SvREFCNT(sv))

// <<< HELPER FUNCTION DECLARATIONS >>>
void RPerl_object_property_init(SV* initee); // NEED ANSWER: what in the hades does this property init function even do?  why do we need it???
char* RPerl_DUMPER__perl_from_c(SV* dumpee);

#endif
