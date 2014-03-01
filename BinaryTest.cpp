#include "stdafx.h"
#include "CppUnitTest.h"
#include "C:\Users\frnds_000\Documents\Visual Studio 2012\Projects\DynamicLibrary\TableauAssignment\ArrayClassDll.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace ArrayClassNS;
using namespace std;

namespace UnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(ShouldReturnInvalid_WhenMinGTMax)
		{
			int array_data[] = {-2, -1, 0, 1, 4, 8, 9, 13, 15, 20};
			int key = 9, min = 10, max = 0, expected = INVALID_BOUNDS, actual;
			ArrayClass search;

			actual = search.binary_search(array_data, key, min, max);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(ShouldReturnNotFound_WhenNullArrayPassed)
		{
			int *array_data = NULL;
			int key = 9, min = 0, max = 10, expected = KEY_NOT_FOUND, actual;
			ArrayClass search;

			actual = search.binary_search(array_data, key, min, max);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(ShouldReturnInvalid_WhenNegMinPassed)
		{
			int array_data[] = {-2, -1, 0, 1, 4, 8, 9, 13, 15, 20};
			int key = 9, min = -10, max = 0, expected = INVALID_BOUNDS, actual;
			ArrayClass search;

			actual = search.binary_search(array_data, key, min, max);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(ShouldReturnIndex_ValidParamPassed)
		{
			int array_data[] = {-2, -1, 0, 1, 4, 8, 9, 13, 15, 20};
			int key = 9, min = 0, max = 10, expected = 6, actual;
			ArrayClass search;

			actual = search.binary_search(array_data, key, min, max);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}


		TEST_METHOD(ShouldReturnNotFound_KeyNotInArray)
		{
			int array_data[] = {-2, -1, 0, 1, 4, 8, 9, 13, 15, 20};
			int key = 3, min = 0, max = 10, expected = KEY_NOT_FOUND, actual;
			ArrayClass search;

			actual = search.binary_search(array_data, key, min, max);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}
	};
}
