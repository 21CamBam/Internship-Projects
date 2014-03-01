// MathFuncsDll.cpp
// compile with: /EHsc /LD

#include "ArrayClassDll.h"
#include <stdexcept>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <string.h>
#include <string>
#define INVALID_BOUNDS -1
#define KEY_NOT_FOUND -1

using namespace std;

namespace ArrayClassNS
{
	int ArrayClass::binary_search(int *array_data, int key, int min, int max)
	{
		int midpoint = 0;
		if (max < min) //Test whether or not bounds are valid
			return INVALID_BOUNDS;

		if(array_data == NULL)
			return KEY_NOT_FOUND; // Test if valid array

		if(min < 0)
			return INVALID_BOUNDS; //Test whether or not bounds are valid

		if(max % 2 == 0)
		{
			midpoint = (max + min)/2;
		}
		else
		{
			midpoint = ((max + min)/2) + 1;
		}
		if(key > array_data[midpoint])
		{
			binary_search(array_data, key, midpoint, max);
		}
		else if(key < array_data[midpoint])
		{
			binary_search(array_data, key, min, midpoint);
		}
		else if(key == array_data[midpoint])
		{
			return midpoint; // Test if key exists
		}
		else
		{
			return KEY_NOT_FOUND; // Test if key does not exist
		}
	}
}
