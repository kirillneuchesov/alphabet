#define CTEST_MAIN

#include <cassert>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Inout.hpp>
#include <Logic.hpp>

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

void test6()
{
	char WordsMas[][50] = {"yourself", "prove"};
	char WordsMas2[][50] = {"prove", "yourself"};
	int words = 2;
	Sort(WordsMas, words);
	for(int j = 0; j < words; j++)
		assert(strcmp(WordsMas[j], WordsMas2[j]) == 0);
	printf("TEST6-OK\n");
}

void test7()
{
	char WordsMas[][50] = {"prove", "yourself"};
	char WordsMas2[][50] = {"prove", "yourself"};
	int words = 2;
	Sort(WordsMas, words);
	for(int j = 0; j < words; j++)
		assert(strcmp(WordsMas[j], WordsMas2[j]) == 0);
	printf("TEST7-OK\n");
}

void test8()
{
	char WordsMas[][50] = {"Yourself", "prove"};
	char WordsMas2[][50] = {"Yourself", "prove"};
	int words = 2;
	Sort(WordsMas, words);
	for(int j = 0; j < words; j++)
		assert(strcmp(WordsMas[j], WordsMas2[j]) == 0);
	printf("TEST8-OK\n");
}
void test9()
{
	char WordsMas[][50] = {" "};
	char WordsMas2[][50] = {" "};
	int words = 1;
	Sort(WordsMas, words);
	for(int j = 0; j < words; j++)
		assert(strcmp(WordsMas[j], WordsMas2[j]) == 0);
	printf("TEST9-OK\n");
}

void test10()
{
	char WordsMas[][50] = {"Prove", "yourself", "And", "be", "honest"};
	char WordsMas2[][50] = {"And", "Prove", "be", "honest", "yourself"};
	int words = 5;
	Sort(WordsMas, words);
	for(int j = 0; j < words; j++)
		assert(strcmp(WordsMas[j], WordsMas2[j]) == 0);
	printf("TEST10-OK\n");
}

int main(int argc, const char** argv) 
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
}   
