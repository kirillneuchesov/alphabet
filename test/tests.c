#define CTEST_MAIN

#include <ctest.h>
#include "Func.h"

CTEST (Gaps, CorrestGaps)
{
    int words = 0;
    char TextMas[] = {"Prove yourself"};
    char c[] = {",", " ", ".", "\n"};
    char WordsMas[100][50];
    int result = Gaps (TextMas, c, WordsMas, words);
    int expected = 2;
    ASSERT_EQUAL (expected, result);
}

CTEST (Gaps, IncorrestGaps)
{
    int words = 0;
    char TextMas[] = {"Prove!yourself"};
    char c[] = {",", " ", ".", "\n"};
    char WordsMas[100][50];
    int result = Gaps (TextMas, c, WordsMas, words);
    int expected = 1;
    ASSERT_EQUAL (expected, result);
} 

CTEST (Sort, CorrectSort)
{
    char WordsMas[][50] = {"prove", "yourself"};
    int words = 2;
    char result = Sort (WordsMas, words);
    char expected = {"prove", "yourself"};
    ASSERT_STR (expected, real);
}

CTEST (Sort, CorrectSort)
{
    char WordsMas[][50] = {"prove", "Yourself"};
    int words = 2;
    char result = Sort (WordsMas, words);
    char expected = {"Yourself", "prove"};
    ASSERT_STR (expected, real);
}

int main (int argc, const char** argv) 
{
    int test_res = ctest_main (argc, argv);
    return test_res;
}   
