#include "pch.h"
#include "CppUnitTest.h"
#include "assert.h"
#include "mapping_r.h"
#include "shipment_r.h"
#include "truck_r.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(ValidateTest)
	{
	public:
		
		TEST_METHOD(ValidateTest1)
		{
			struct Point dest = { 2, 2 };
			int result = validate(0.5, 500, dest);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(validateTest2)
		{
			struct Point dest = { 2, 2 };
			int result = validate(0.25, 500, dest);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(validateTest3)
		{
			struct Point dest = { 2, 2 };
			int result = validate(-1, 500, dest);
			Assert::AreEqual(-1, result);

		}
		TEST_METHOD(validateTest4)
		{
			struct Point dest = { 2, 2 };
			int result = validate(1, 500, dest);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(validateTest5)
		{
			struct Point dest = { 2, 2 };
			int result = validate(2, 500, dest);
			Assert::AreEqual(-1, result);

		}
		TEST_METHOD(validateTest6)
		{
			struct Point dest = { 2, 2 };
			int result = validate(NULL, 500, dest);
			Assert::AreEqual(-1, result);

		}
		
		//WHITE BOX TESTS

		TEST_METHOD(ValidateTest07)
		{
			struct Point dest = { 2,2 };
			int result = validate(0.25, 200, dest);
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(ValidateTest08)
		{
			struct Point dest = { 18,8 };
			int result = validate(0.5, 20, dest);
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(ValidateTest09)
		{
			struct Point dest = { 23,11 };
			int result = validate(1, 20, dest);
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(ValidateTest10)
		{
			struct Point dest = { 22, 22 };
			int result = validate(0.4, 20, dest);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(ValidateTest11)
		{
			struct Point dest = { 22, 22 };
			int result = validate(0.9999999, 20, dest);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(ValidateTest12)
		{
			struct Point dest = { 1, 21 };
			int result = validate(1.000000001, 75, dest);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(ValidateTest13)
		{
			struct Point dest = { 1, 21 };
			int result = validate(0.251, 30, dest);
			Assert::AreEqual(-1, result);
		}

		TEST_METHOD(ValidateTest14)
		{
			struct Point dest = { 22, 22 };
			int result = validate(0.500000001, 90, dest);
			Assert::AreEqual(-1, result);
		}

	};
}
