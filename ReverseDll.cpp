// MathFuncsDll.cpp
// compile with: /EHsc /LD

#include "ReverseDll.h"
#include <stdexcept>

using namespace std;

namespace ReverseStringNS
{
	int Reverse::string_length(char *str)
	{
		int i = 0;
		if(str == NULL) //Test that function returns 0 when str is null
			return 0;
		while(str[i] != '\0') //Test that function returns number
		{
			i++;
		}
		return i;
	}

	Print_Status Reverse::print_word(char *str, int original_reversed, int length)
	{
		int index = 0;
		if(str == NULL)
		{
			cout << "INVALID STRING"; // Test that code executes when str is NULL
			return PRINT_FAILURE;
		}

		if(length < 0)
		{
			cout << "INVALID LENGTH"; // Test that code executes when length is negative
			return PRINT_FAILURE;
		}

		if(length == 0)
		{
			cout << ""; // Test that code executes when length is zero
			return PRINT_FAILURE;
		}

		if(original_reversed == ORIGINAL) //Test that code executes when original_reversed is ORIGINAL
		{
			cout << "\nOriginal String: ";
			for(index = 0; index < length; index++)
			{
				cout << *(str + index);
			}
			return PRINT_SUCCESS;
		}
		else if(original_reversed == REVERSED)
		{
			cout << "\nReversed String: "; //Test that code executes when original_reversed is REVERSED
			for(index = 0; index < length; index++)
			{
				cout << *(str + index);
			}
			return PRINT_SUCCESS;
		}
		else
		{
			return PRINT_FAILURE; //Test if code executes when anything else is passed as original_reversed
		}
	}

	char* Reverse::reverse_word_recursive(char *str, int length, int count)
	{
		char* new_word = new char [length];

		if(length < 0)
			return str; //Test that code executes when length < 0

		if(str == NULL)
			return NULL; //Test that code executes for null str

		if(length == 0)
		{
			return ""; //Test that code executes when length = 0
		}

		if(count < 0)
		{
			count = 0;
		}

		char last_char = *(str + count);
		new_word = reverse_word_recursive(str, length - 1, count + 1);
		*(new_word + (length-1)) = last_char; //Test that code executes when length > 0

		return new_word;
	}

	char* Reverse::reverse_word_iterative(char *str, int length)
	{
		int i = 0, num = 0;

		char* new_word = new char [length];
		if(length < 0)
			return str; //Test that code executes when length < 0

		if(str == NULL)
			return NULL; //Test that code executes for null str

		if(length == 0)
		{
			return ""; //Test that code executes when length = 0
		}

		for(i = length - 1; i >= 0; i--)
		{
			num = (length - 1) - i;
			*(new_word + num) = (char) *(str + i); //Test that code executes for any value length
		}
		return new_word;
	}

}
