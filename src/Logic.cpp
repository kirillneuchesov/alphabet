#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <conio.h>
#include "Func.hpp"

void File(char *ch)
{
    std::ifstream ifs("input.txt");
    std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
    strcpy(ch, content.c_str());
}

int Gaps(char *TextMas, char *c, char WordsMas[100][50], int &words) 
{
	char *buf;
	buf = strtok(TextMas, &c[0]);
	while(buf!=NULL) {
		strncpy(WordsMas[words], buf, 50);
		buf = strtok(NULL, &c[0]);
		words++;
	}
	return words;
}

void Sort(char WordsMas[100][50], int &words) 
{
	char temp[50];
	for(int j = 0; j < words; j++) {
		for(int k = 0; k < words - 1; k++) {
			if(strcmp(WordsMas[k], WordsMas[k + 1]) > 0) {
				strcpy(temp, WordsMas[k]);
				strcpy(WordsMas[k], WordsMas[k + 1]);
				strcpy(WordsMas[k + 1], temp);
			}
		}	
	}
}

