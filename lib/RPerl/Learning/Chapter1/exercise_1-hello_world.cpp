//!/usr/bin/rperl

// Learning RPerl, Chapter 1, Exercise 1
// Print "Hello, world!"; the classic first program for new programmers

// [[[ HEADER ]]]
#include <rperlprogram.h>
#ifndef __CPP__INCLUDED__RPerl__Learning__Chapter1__exercise_1_hello_world_cpp
#define __CPP__INCLUDED__RPerl__Learning__Chapter1__exercise_1_hello_world_cpp 0.001_000
# ifdef __CPP__TYPES

int main() {  // [[[ OPERATIONS HEADER ]]]


// [[[ OPERATIONS ]]]
 print "Hello, world!" << endl;



return 0; }  // [[[ OPERATIONS FOOTER ]]]

// [[[ FOOTER ]]]
# elif defined __PERL__TYPES
Purposefully_die_from_a_compile-time_error,_due_to____PERL__TYPES_being_defined.__We_need_to_define_only___CPP__TYPES_in_this_file!
# endif
#endif