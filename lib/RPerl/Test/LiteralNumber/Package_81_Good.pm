# [[[ HEADER ]]]
use RPerl;
package RPerl::Test::LiteralNumber::Package_81_Good;
use strict;
use warnings;
our $VERSION = 0.001_000;

# [[[ CRITICS ]]]
## no critic qw(ProhibitUselessNoCritic ProhibitMagicNumbers RequireCheckedSyscalls)  # USER DEFAULT 1: allow numeric values & print operator

# [[[ SUBROUTINES ]]]
our number $empty_sub = sub {
    return 23_456e04;
};

1;    # end of package
