#define CTEST_MAIN

#include <cassert>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Func.hpp"

void test1()
{
    char TextMas[] = {"prove yourself"};
    char c[] = {" ,.\n"};
    char WordsMas[100][50];
    int words = 0;
    assert(Gaps(TextMas, c, WordsMas, words) == 2);
    printf("TEST1-OK\n");
}

void test2()
{
    char TextMas[] = {"prove!yourself"};
    char c[] = {" ,.\n"};
    char WordsMas[100][50];
    int words = 0;
    assert(Gaps(TextMas, c, WordsMas, words) == 1);
    printf("TEST2-OK\n");
}

void test3()
{
    char TextMas[] = {" "};
    char c[] = {" ,.\n"};
    char WordsMas[100][50];
    int words = 0;
    assert(Gaps(TextMas, c, WordsMas, words) == 0);
    printf("TEST3-OK\n");
}

void test4()
{
    char TextMas[] = {"prove yourself, and. be,honest"};
    char c[] = {" ,.\n"};
    char WordsMas[100][50];
    int words = 0;
    assert(Gaps(TextMas, c, WordsMas, words) == 5);
    printf("TEST4-OK\n");
}

void test5()
{
    char TextMas[] = {"proveyourself"};
    char c[] = {" ,.\n"};
    char WordsMas[100][50];
    int words = 0;
    assert(Gaps(TextMas, c, WordsMas, words) == 1);
    printf("TEST5-OK\n");
}

int main(int argc, const char** argv) 
{
    test1();
    test2();
    test3();
    test4();
    test5();
}   
