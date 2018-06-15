#ifndef FUNCTIONS
#define FUNCTIONS

void File(char *ch);
int Gaps(char *TextMas, char *c, char WordsMas[100][50], int &words);
void Sort(char WordsMas[100][50], int &words);
void Menu_1();
void Menu_2(int &v, int &k);
void Output(char WordsMas[100][50], char *c, int k, int v, int &words);
void Input(char *TextMas, int &k);

#endif
