// 11.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int SmallestElement(int test[]) {
	int smallest;
	int *ptr = &smallest;
	*ptr = test[0];
	for (int i = 1; i < 8; i++) {
		if (test[i] < *ptr)
		{
			*ptr = test[i];
		}
		else;
	}
	return *ptr;
}

int main()
{
	int testarray[8] = { 1,2,4,5,10,100,2,-22 };
	cout << SmallestElement(testarray);
    return 0;
}

