#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "longnum.h"

struct LongNum* MemConst(char* Num)
{
	struct LongNum* obj = malloc(sizeof(struct LongNum));
	int size = strlen(Num);
	obj->Mas = malloc(size * sizeof(short));
	if (!obj->Mas)
		return 1;

	obj->size = size;

	for (int i = 0; i < obj->size; i++)
		obj->Mas[i] = Num[i] - 48;

	PrintLongNum(obj);
	return 0;
}

int PrintLongNum(struct LongNum* obj)
{
	for (int i = 0; i < obj->size; i++)
		printf("%hi", obj->Mas[i]);

	return 0;
}