// how to use
// /mnt/d/_coding/tau$ g++ firstTauProgramm.c -I . &> null && ./a.out

#include <tau/tau.h>
TAU_MAIN() // sets up Tau (+ main function)

TEST(foo, bar1) {
    int a = 42;
    int b = 13;
    CHECK_GE(a, b); // pass :)
 //   CHECK_LE(b, 8); // fail - Test suite not aborted
}

TEST(foo, bar2) {
    char* a = "foo";
    char* b = "foobar";
    REQUIRE_STREQ(a, a); // pass :)
 //   REQUIRE_STREQ(a, b); // fail - Test suite abortedcl
}