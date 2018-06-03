#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Func.h"

int Gaps(char *TextMas, char *c, char WordsMas[100][50], int &words) 
{
    char *buf;
    buf = strtok(TextMas, &c[0]);
    while (p!=NULL) {
    strncpy(WordsMas[i], buf, 50);
    buf = strtok(NULL, &c[0]);
    words++;
    }
    return words;
}

int Sort(char WordsMas[100][50], int &words) 
{
    char temp[50];
    for(int j = 0; j < words; j++) {
        for(int k = 0; k < words - 1; k++) {
        if(strcmp (WordsMas[k], WordsMas[k + 1]) > 0) {
            strcpy(temp, WordsMas[k]);
	    strcpy(WordsMas[k], WordsMas[k + 1]);
	    strcpy(WordsMas[k + 1], temp);
	    }
        }	
    }
    return WordsMas[100][50];
}

