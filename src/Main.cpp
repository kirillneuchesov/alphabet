#include <fstream>
#include <iostream>
#include <conio.h>
#include <cstring>
#include <locale.h>
#include "Inout.hpp"
#include "Logic.hpp"

int main()
{
    system("chcp 1251");
    system("cls");
    char TextMas[9999],WordsMas[100][50],c[4]={',' , ' ' , '.' , '\n'};
    int k=0,v=0,words=0;
    while(1)
    {
        Menu_1();
        Input(TextMas);
        Menu_2(v,k);
        Gaps(TextMas,c, WordsMas,words);
        Sort(WordsMas,words);
        Output(WordsMas,c,k, v, words);
        getch();
        system("cls");
    }
    return 0;
}

