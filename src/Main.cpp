#include <fstream>
#include <iostream>
#include <conio.h>
#include <cstring>
#include <locale.h>

int main()
{
    char TextMas[9999],WordsMas[100][50],c[4]={',' , ' ' , '.' , '\n'};
    int k=0,v=0,words=0;
    while(1)
    {
        menu1();
        input(TextMas);
        menu2(v,k);
        gaps(TextMas,c, WordsMas,words);
        sort(WordsMas,words);
        output(WordsMas,c,k, v, words);
        getch();
        system("cls");
    }
    return 0;
}

