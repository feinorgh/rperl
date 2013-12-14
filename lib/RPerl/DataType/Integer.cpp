////use strict;  use warnings;
//using std::cout;  using std::endl;  // not needed for integer?

// VERSION 0.2.3

#ifndef __CPP__INCLUDED__RPerl__DataType__Integer_cpp
#define __CPP__INCLUDED__RPerl__DataType__Integer_cpp 1

#include <RPerl/DataType/Integer.h>		// -> NULL (relies on native C type)

// [[[ TYPE-CHECKING ]]]
// [[[ TYPE-CHECKING ]]]
// [[[ TYPE-CHECKING ]]]

// TYPE-CHECKING SUBROUTINES DEPRECATED IN FAVOR OF EQUIVALENT MACROS
/*
void CHECK_INTEGER(SV* possible_integer) {
    if (not(SvOK(possible_integer))) {
    	croak("\nERROR EIV00, TYPE-CHECKING MISMATCH, CPPOPS_PERLTYPES & CPPOPS_CPPTYPES:\ninteger value expected but undefined/null value found,\ncroaking");
    }
	if (not(SvIOKp(possible_integer))) {
    	croak("\nERROR EIV01, TYPE-CHECKING MISMATCH, CPPOPS_PERLTYPES & CPPOPS_CPPTYPES:\ninteger value expected but non-integer value found,\ncroaking");
    }
};
void CHECKTRACE_INTEGER(SV* possible_integer, const char* variable_name, const char* subroutine_name) {
    if (not(SvOK(possible_integer))) {
    	croak("\nERROR EIV00, TYPE-CHECKING MISMATCH, CPPOPS_PERLTYPES & CPPOPS_CPPTYPES:\ninteger value expected but undefined/null value found,\nin variable '%s' from subroutine '%s',\ncroaking",
    			variable_name, subroutine_name);
    }
	if (not(SvIOKp(possible_integer))) {
    	croak("\nERROR EIV01, TYPE-CHECKING MISMATCH, CPPOPS_PERLTYPES & CPPOPS_CPPTYPES:\ninteger value expected but non-integer value found,\nin variable '%s' from subroutine '%s',\ncroaking",
    			variable_name, subroutine_name);
    }
};
*/

// [[[ TYPEMAP PACK/UNPACK FOR __CPP__TYPES ]]]
// [[[ TYPEMAP PACK/UNPACK FOR __CPP__TYPES ]]]
// [[[ TYPEMAP PACK/UNPACK FOR __CPP__TYPES ]]]

# ifdef __CPP__TYPES

// convert from (Perl SV containing integer) to (C integer)
integer XS_unpack_integer(SV* input_sv) {
printf("in CPPOPS_CPPTYPES XS_unpack_integer(), top of subroutine\n");
//	CHECK_INTEGER(input_sv);
	CHECKTRACE_INTEGER(input_sv, "input_sv", "XS_unpack_integer()");

//	integer output_integer;

//	if (SvIOKp(input_sv)) { output_integer = SvIV(input_sv); } else { croak("in CPPOPS_CPPTYPES XS_unpack_integer(), input_sv was not an integer"); }
//	output_integer = SvIV(input_sv);

printf("in CPPOPS_CPPTYPES XS_unpack_integer(), bottom of subroutine\n");

	return((integer)SvIV(input_sv));
//	return(output_integer);
}

// convert from (C integer) to (Perl SV containing integer)
void XS_pack_integer(SV* output_sv, integer input_integer) {
printf("in CPPOPS_CPPTYPES XS_pack_integer(), top of subroutine\n");
printf("in CPPOPS_CPPTYPES XS_pack_integer(), received input_integer = %d\n", input_integer);

	sv_setsv(output_sv, sv_2mortal(newSViv(input_integer)));

printf("in CPPOPS_CPPTYPES XS_pack_integer(), have output_sv = '%s'\n", SvPV_nolen(output_sv));
printf("in CPPOPS_CPPTYPES XS_pack_integer(), bottom of subroutine\n");
}

# endif

// [[[ STRINGIFY ]]]
// [[[ STRINGIFY ]]]
// [[[ STRINGIFY ]]]

# ifdef __PERL__TYPES

SV* stringify_integer(SV* input_integer)
{
//	CHECK_INTEGER(input_integer);
	CHECKTRACE_INTEGER(input_integer, "input_integer", "stringify_integer()");
printf("in CPPOPS_PERLTYPES stringify_integer(), bottom of subroutine, received input_integer = %d\n", (integer)SvIV(input_integer));
	return(newSVpvf("%d", (integer)SvIV(input_integer)));
}

# elif defined __CPP__TYPES

string stringify_integer(integer input_integer)
{
printf("in CPPOPS_CPPTYPES stringify_integer(), top of subroutine, received input_integer = %d\n", input_integer);
	string output_string = "";
	sprintf((char*)output_string.c_str(), "%d", input_integer);
	return(output_string);
}

# endif

//# [[[ TYPE TESTING ]]]
//# [[[ TYPE TESTING ]]]
//# [[[ TYPE TESTING ]]]

# ifdef __PERL__TYPES

SV* typetest___void__in___integer__out() {
	SV* retval = newSViv((21 / 7) + OPS_TYPES_ID);
printf("in CPPOPS_PERLTYPES typetest___void__in___integer__out(), have retval = %d\n", (integer)SvIV(retval));
	return(retval);
}

SV* typetest___integer__in___integer__out(SV* lucky_integer) {
//	CHECK_INTEGER(lucky_integer);
	CHECKTRACE_INTEGER(lucky_integer, "lucky_integer", "typetest___integer__in___integer__out()");
printf("in CPPOPS_PERLTYPES typetest___integer__in___integer__out(), received lucky_integer = %d\n", (integer)SvIV(lucky_integer));
	return(newSViv((SvIV(lucky_integer) * 2) + OPS_TYPES_ID));
}

# elif defined __CPP__TYPES

integer typetest___void__in___integer__out() {
	integer retval = (21 / 7) + OPS_TYPES_ID;
printf("in CPPOPS_CPPTYPES typetest___void__in___integer__out(), have retval = %d\n", retval);
	return(retval);
}

integer typetest___integer__in___integer__out(integer lucky_integer) {
printf("in CPPOPS_CPPTYPES typetest___integer__in___integer__out(), received lucky_integer = %d\n", lucky_integer);
	return((lucky_integer * 2) + OPS_TYPES_ID);
}

# endif

#endif
