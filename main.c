#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#include "LongNum.h"

int main()
{
	
	char Getx[10000] = " ";
	FILE* f = fopen("file.txt", "r");
	fgets(Getx, 10000, f);
	MemConst(Getx);
	
	getchar();

	return 0;
}