#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <string.h>
#include <string>
#define ORIGINAL 0
#define REVERSED 1

typedef enum print_status {PRINT_FAILURE, PRINT_SUCCESS} Print_Status;

namespace ReverseStringNS
{
    class Reverse
    {
    public:
		Reverse(void)
		{
			return;
		}

        // Returns integer value of length of str
        static __declspec(dllexport) int string_length(char *str);
		// Returns index of key found
        static __declspec(dllexport) Print_Status print_word(char *str, int original_reversed, int length);
		// Returns index of key found
        static __declspec(dllexport) char* reverse_word_recursive(char *str, int length, int count);
		// Returns index of key found
        static __declspec(dllexport) char* reverse_word_iterative(char *str, int length);
    };
}
