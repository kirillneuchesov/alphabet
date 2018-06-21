#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>

void FileInput(char *TextMas)
{
	std::ifstream ifs("txt.txt");
	std::string content((std::istreambuf_iterator<char>(ifs)),
		(std::istreambuf_iterator<char>()));
	strcpy(TextMas, content.c_str());	
}

void Menu1(char *TextMas)
{
	int ch;
	bool bol = false;
	do {
		system("cls");
		printf("Не хотите ли считать текст из файла?\n1.Да\n2.Нет\n");
		ch = getchar();
		switch(ch) {
			case 49:
				bol = true;
				FileInput(TextMas);
				break;
			case 50:
				bol = true;
				break;
			default: 
				system("cls");
				break;
		}		
	} while(bol == false);
}

void Menu2(int &v, int &k)
{
	int ch;
	bool b = false;
	system("cls");
	do {
		printf("Выберите порядок вывода:\n1.Алфавитный\n2.Обратный\n");
		ch = getchar();
		switch(ch) {
			case 49: 
				v = 0; 
				b = true;
				break;
			case 50: 
				v = 1; 
				b = true;
				break;
			default: 
				system("cls");
				break;	
		}
		system("cls");
	} while(b == false);
		
	do {
		printf("Выберите разделитель:\n1.Запятая\n2.Пробел\n3.Точка\n4.Новая строка\n");
		ch = getchar();
		switch(ch) {
			case 49: 
				k = 0;
				b = false;
				break;
			case 50: 
				k = 1;
				b = false;
				break;
			case 51: 
				k = 2; 
				b = false;
				break;
			case 52: 
				k = 3; 
				b = false;
				break;
			default: 
				system("cls");
				break;	
		}
		system("cls");
	} while(b == true);
}

void Output(char WordsMas[100][50], char *c, int k, int v, int &words)
{
	if(v == 0) {
		for(int j = 0; j < words - 1; j++)
   			printf("%s%c", WordsMas[j], c[k]);
   		printf("%s", WordsMas[words - 1]);
   	} 
	else {
   		for(int j = words - 1; j > 0; j--)
   			printf("%s%c", WordsMas[j], c[k]);
   		printf("%s", WordsMas[0]);			
   	}
   	words = 0;
   	printf("\n");
}

void KeyInput(char *TextMas)
{	
	printf("Введите текст:");
	fgets(TextMas, 9999, stdin);
}
