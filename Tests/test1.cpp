#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.cpp"

TEST_CASE( "Factorial of 0", "[Factorial]" ) {
    CHECK( Factorial(0) == 1 );
}

