#include <stdlib.h>
#include <locale.h>
#include "Func.hpp"

int main()
{
	setlocale(LC_ALL, "rus");
	system("cls");
	char TextMas[9999], WordsMas[100][50], c[4] = {',' , ' ' , '.' , '\n'};
	int v = 0, k = 0, words = 0;
	KeyInput(TextMas);
	Menu1(TextMas);
	Menu2(v, k);
	Gaps(TextMas, c, WordsMas, words);
	Sort(WordsMas, words);
	Output(WordsMas, c, k, v, words);
	system("pause");
}

