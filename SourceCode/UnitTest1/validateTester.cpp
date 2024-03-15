#include "pch.h"
#include "CppUnitTest.h"
#include "assert.h"
#include "mapping_r.h"
#include "shipment_module_r.h"
#include "truck_module_r.h"

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
	};
}