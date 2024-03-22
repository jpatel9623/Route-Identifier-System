#include "pch.h"
#include "CppUnitTest.h"
#include "assert.h"
#include "mapping_r.h"
#include "shipment_module_r.h"
#include "truck_module_r.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestCases
{
	TEST_CLASS(UtilizationScoreTest)
	{
	public:
		TEST_METHOD(UtilizationBBT01)
		{
			int result = 0;
			result = calculateUtilizationScore(-1, 0.5);
			Assert::AreEqual(0, result);

		}

			
		TEST_METHOD(UtilizationBBT02)
		{
			int result = 0;
			result = calculateUtilizationScore(300, NULL);
			Assert::AreEqual(0, result);

		}


		
		TEST_METHOD(UtilizationBBT03)
		{
			int result = 0;
			result = calculateUtilizationScore(400, -1);
			Assert::AreEqual(0, result);

		}
		TEST_METHOD(UtilizationBBT04)
		{
			int result = 0;
			result = calculateUtilizationScore(0, 1.0);
			Assert::AreEqual(0.02, result);

		}


		TEST_METHOD(UtilizationBBT05)
		{
			int result = 0;
			result = calculateUtilizationScore(300, 0);
			Assert::AreEqual(0.3, result);

		}
		TEST_METHOD(UtilizationBBT06)
		{
			int result = 0;
			result = calculateUtilizationScore(0, 0);
			Assert::AreEqual(0, result);

		}
		TEST_METHOD(UtilizationBBT07)
		{
			int result = 0;
			result = calculateUtilizationScore(NULL, NULL);
			Assert::AreEqual(0, result);
		}
		
		//White Box Tests
		TEST_METHOD(UtilizationWBT01)
		{
			int result = 0;
			result = calculateUtilizationScore(0, 0);
			Assert::AreEqual(0, result);
		}
		
		TEST_METHOD(UtilizationWBT02)
		{
			double check = 0;
			int result = 0;
			check = calculateUtilizationScore(800, 20);
			check = std::ceil(check * 100.0) / 100.0;
			result = check;
			Assert::AreEqual(1, result);
		}
		
		TEST_METHOD(UtilizationWBT03)
		{
			double check = 0;
			int result = 0;
			check = calculateUtilizationScore(2000, 20);
			check = std::ceil(check * 100.0) / 100.0;
			result = check;
			Assert::AreEqual(3, result);
		}
		
		TEST_METHOD(UtilizationWBT04)
		{
			double check = 0;
			int result = 0;
			check = calculateUtilizationScore(800, 72);
			check = std::ceil(check * 100.0) / 100.0;
			result = check;
			Assert::AreEqual(0, result);
		}
		
		TEST_METHOD(UtilizationWBT05)
		{
			double check = 0;
			int result = 0;
			check = calculateUtilizationScore(3000, 80);
			check = std::ceil(check * 100.0) / 100.0;
			result = check;
			Assert::AreEqual(1, result);
		}
		
		TEST_METHOD(UtilizationWBT06)
		{
			double check = 0;
			int result = 0;
			check = calculateUtilizationScore(1200, 0);
			check = std::ceil(check * 100.0) / 100.0;
			result = check;
			Assert::AreEqual(0, result);
		}
		
		TEST_METHOD(UtilizationWBT07)
		{
			double check = 0;
			int result = 0;
			check = calculateUtilizationScore(0, 40);
			check = std::ceil(check * 100.0) / 100.0;
			result = check;
			Assert::AreEqual(0, result);
		}
	};
}
