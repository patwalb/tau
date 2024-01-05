#include <tau/tau.h>
TAU_MAIN() // sets up Tau 

TEST(foo, bar1) {
    int a = 42; 
    int b = 13; 
    CHECK_GE(a, b); // pass :)
    CHECK_LE(b, 8); // fail - Test suite not aborted 
}

TEST(foo, bar2) {
    char* a = "foo";
    char* b = "foobar";
    REQUIRE_STREQ(a, a); // pass :)
    REQUIRE_STREQ(a, b); // fail - Test suite aborted :(
}