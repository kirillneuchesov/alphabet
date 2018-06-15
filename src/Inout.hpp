#ifndef INOUT_HPP
#define INOUT_HPP

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

void Menu_1()
{
    int ch;
    bool bol = false;
    do {
		printf("1.Приступить к вводу текста\n2.Текст из файла\n3.Выход\n");
		ch = getch();
		switch(ch) {
			case 49:
				bol = true;
				system("cls");
				break;
			case 50:
				bol = true;
				system("cls");
				break;
			case 51:
				exit(1);
			default:
				system("cls");
				break;
		}
		
	} while(bol == false);
}

void Menu_2(int &v, int &k)
{
	int ch;
	bool b = false;
	system("cls");
	do {
		printf("Выберите порядок вывода:\n1.Алфавитный\n2.Обратный\n");
		ch = getch();
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
		ch = getch();
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
   		for(int j = words - 1;j >= 0; j--)
   			printf("%s%c", WordsMas[j], c[k]);
   	}
   	words = 0;
}

void Input(char *TextMas, int &k)
{
	printf("Введите текст:");
	gets(TextMas);
}

#endif //INOUT_HPP

