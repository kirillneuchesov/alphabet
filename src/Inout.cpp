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
