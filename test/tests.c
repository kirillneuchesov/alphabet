#define CTEST_MAIN

#include <ctest.h>
#include "Func.h"

CTEST(Gaps, CorrestGaps)
{
    int Words = 0;
    char TextMas[] = {"Prove yourself"};
    char c[] = {",", " ", ".", "\n"};
    char WordsMas[100][50];
    int result = Gaps(TextMas, c, WordsMas, Words);
    int expected = 2;
    ASSERT_EQUAL(expected, result);
}

CTEST(Gaps, IncorrestGaps)
{
    int Words = 0;
    char TextMas[] = {"Prove!yourself"};
    char c[] = {",", " ", ".", "\n"};
    char WordsMas[100][50];
    int result = Gaps(TextMas, c, WordsMas, Words);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
} 

    
