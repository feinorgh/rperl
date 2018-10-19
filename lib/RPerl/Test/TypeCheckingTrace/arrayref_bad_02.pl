#!/usr/bin/env perl

# [[[ PREPROCESSOR ]]]
# <<< EXECUTE_ERROR: 'ERROR EAVRV01, TYPE-CHECKING MISMATCH' >>>
# <<< EXECUTE_ERROR: 'arrayref value expected but non-arrayref value found' >>>
# <<< EXECUTE_ERROR: 'in variable $input_1 from subroutine check_arrayref()' >>>

# [[[ HEADER ]]]
use RPerl;
use strict;
use warnings;
our $VERSION = 0.000_001;

# [[[ CRITICS ]]]
## no critic qw(ProhibitUselessNoCritic ProhibitMagicNumbers RequireCheckedSyscalls)  # USER DEFAULT 1: allow numeric values & print operator

# [[[ INCLUDES ]]]
use RPerl::Test::TypeCheckingTrace::AllTypes;

# [[[ OPERATIONS ]]]
check_arrayref(q{abcd});
