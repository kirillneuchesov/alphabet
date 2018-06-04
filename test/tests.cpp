#define CTEST_MAIN

#include <ctest.h>
#include "Func.hpp"

char c[4] = {",", " ", ".", "\n"};

CTEST(Gaps, CorrestGaps)
{
    int words = 0;
    char TextMas[] = {"Prove yourself"};
    char WordsMas[100][50];
    int result = Gaps (TextMas, c, WordsMas, words);
    int expected = 2;
    ASSERT_EQUAL (expected, result);
}

CTEST(Gaps, IncorrestGaps)
{
    int words = 0;
    char TextMas[] = {"Prove!yourself"};
    char WordsMas[100][50];
    int result = Gaps (TextMas, c, WordsMas, words);
    int expected = 1;
    ASSERT_EQUAL (expected, result);
} 

int main (int argc, const char** argv) 
{
    int test_res = ctest_main (argc, argv);
    return test_res;
}   
