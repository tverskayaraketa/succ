#pragma once

struct LongNum
{
	short* Mas;
	int size;
};

struct LongNum* MemConst(char* Num);
int PrintLongNum(struct LongNum* obj);