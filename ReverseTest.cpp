#include "stdafx.h"
#include "C:\Users\frnds_000\Documents\Visual Studio 2012\Projects\DynamicLibrary\TableauAssignment\ReverseDll.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace ReverseStringNS;
using namespace std;

namespace UnitTests
{
	TEST_CLASS(UnitTest2)
	{
	public:
		// string_length()
		TEST_METHOD(ShouldReturnZero_NullStringPassed)
		{
			int expected = 0, actual = 0;
			char *str = NULL;
			Reverse rever;
			actual = rever.string_length(str);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(ShouldReturnNonnegNumber_StringPassed)
		{
			char *str = "Cammi Smith";
			int expected = 11, actual = 0;
			Reverse rever;

			actual = rever.string_length(str);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}

		//print_word()
		TEST_METHOD(ShouldReturnFailEnum_NullStringPassed)
		{
			int expected = (int) PRINT_FAILURE, actual, length = 11;
			char *str = NULL;
			Reverse rever;

			actual = (int) rever.print_word(str, ORIGINAL, length);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(ShouldReturnFailEnum_NegLengthPassed)
		{
			int expected = (int) PRINT_FAILURE, actual, length = -5;
			char *str = "Cammi Smith";
			Reverse rever;

			actual = (int) rever.print_word(str, ORIGINAL, length);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(ShouldReturnFailEnum_ZeroLengthPassed)
		{
			int expected = (int) PRINT_FAILURE, actual, length = 0;
			char *str = "Cammi Smith";
			Reverse rever;

			actual = (int) rever.print_word(str, ORIGINAL, length);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}
		
		TEST_METHOD(ShouldReturnSuccessEnum_ORIGINALPassed)
		{
			int expected = (int) PRINT_SUCCESS, actual, length = 11;
			char *str = "Cammi Smith";
			Reverse rever;

			actual = (int) rever.print_word(str, ORIGINAL, length);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(ShouldReturnSuccessEnum_REVERSEDPassed)
		{
			int expected = (int) PRINT_SUCCESS, actual, length = 11;
			char *str = "Cammi Smith";
			Reverse rever;

			actual = (int) rever.print_word(str, REVERSED, length);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(ShouldReturnSuccessEnum_RandNumPassed)
		{
			int expected = (int) PRINT_FAILURE, actual, length = 11;
			char *str = "Cammi Smith";
			Reverse rever;

			actual = (int) rever.print_word(str, 15, length);

			Assert::AreEqual(expected, actual, L"Basic test failed", LINE_INFO());
		}

		// reverse_word_recursive()
		TEST_METHOD(RecurShouldReturnStr_NegLengthPassed)
		{
			int length = -10, count = 0;
			char *str = "Cammi Smith", *expected = "Cammi Smith", *actual = NULL;
			Reverse rever;

			actual = rever.reverse_word_recursive(str, length, count);

			Assert::AreEqual(expected, actual, false, L"Basic test failed", LINE_INFO());
		}
		
		TEST_METHOD(RecurShouldReturnStr_NullStringPassed)
		{
			int length = 11, count = 0;
			char *str = NULL, *expected = NULL, *actual;
			Reverse rever;

			actual = rever.reverse_word_recursive(str, length, count);

			Assert::AreEqual(expected, actual, true, L"Basic test failed", LINE_INFO());
		}
		
		TEST_METHOD(RecurShouldReturnStr_ZeroLengthPassed)
		{
			int length = 0, count = 0;
			char *str = "Cammi Smith", *expected = "", *actual;
			Reverse rever;

			actual = rever.reverse_word_recursive(str, length, count);

			Assert::AreEqual(expected, actual, true, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(RecurShouldReversedString_GoodParamPassed)
		{
			int length = 11, count = 0;
			char *str = "Cammi Smith", *expected = "htimS immaC", *actual;
			Reverse rever;

			actual = rever.reverse_word_recursive(str, length, count);

			Assert::AreEqual(expected, actual, false, L"Basic test failed", LINE_INFO());
		}

		// reverse_word_iterative()
		TEST_METHOD(IterShouldReturnStr_NegLengthPassed)
		{
			int length = -10;
			char *str = "Cammi Smith", *expected = "Cammi Smith", *actual;
			Reverse rever;

			actual = rever.reverse_word_iterative(str, length);

			Assert::AreEqual(expected, actual, false, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(IterShouldReturnStr_NullStringPassed)
		{
			int length = 11;
			char *str = NULL, *expected = NULL, *actual;
			Reverse rever;

			actual = rever.reverse_word_iterative(str, length);

			Assert::AreEqual(expected, actual, true, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(IterShouldReturnStr_ZeroLengthPassed)
		{
			int length = 0;
			char *str = "Cammi Smith", *expected = "", *actual;
			Reverse rever;

			actual = rever.reverse_word_iterative(str, length);

			Assert::AreEqual(expected, actual, true, L"Basic test failed", LINE_INFO());
		}

		TEST_METHOD(IterShouldReversedString_GoodParamPassed)
		{
			int length = 11;
			char *str = "Cammi Smith", *expected = "htimS immaC", *actual;
			Reverse rever;

			actual = rever.reverse_word_iterative(str, length);

			Assert::AreEqual(expected, actual, false, L"Basic test failed", LINE_INFO());
		}
	};
}
