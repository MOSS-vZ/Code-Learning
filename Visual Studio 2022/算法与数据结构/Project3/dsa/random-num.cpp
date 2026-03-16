#include<iostream>
#include "random-num.h"
using namespace std;

void RandomizeData(int* a, int cnt, unsigned seed = 1, int minValue = -99, int maxValue = 100)
{
	srand(seed);
	int u = rand();
	for (int i = 0; i < cnt; i++)
	{
		u = (int)((double)rand() / (double)(RAND_MAX + 1)* (maxValue - minValue)) + minValue;
		*(a + i) = u;
	}
}