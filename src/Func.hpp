#ifndef FUNCTIONS
#define FUNCTIONS

int Gaps(char *TextMas, char *c, char WordsMas[100][50], int &words);
void Sort(char WordsMas[100][50], int &words);
void Menu1(int &v, int &k);
void Menu2(int &v, int &k);
void Output(char WordsMas[100][50], char *c, int k, int v, int &words);
void KeyInput(char *TextMas);
void FileInput(char *TextMas);

#endif
