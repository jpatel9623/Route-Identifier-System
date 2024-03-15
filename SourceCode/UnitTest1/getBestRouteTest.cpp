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
	TEST_CLASS(getBestRouteBB)
	{
		const struct Map* baseMap = &(populateMap());

		struct Shipment shipment = { 10,1,{7,24} };

		struct Route blueRoute = getBlueRoute();

		struct Route greenRoute = getGreenRoute();

		struct Route yellowRoute = getYellowRoute();

		struct Truck truck[3] =
		{
			{0, 0, &blueRoute},
			{0, 0, &greenRoute},
			{0, 0, &yellowRoute}
		};

	public:

		TEST_METHOD(getBestRouteBT1)
		{
			struct Route testRoutes[100];
			int size = 0;
			int result = getBestRoute(testRoutes, size, shipment);
			Assert::AreEqual(0, result);
		}

		TEST_METHOD(getBestRouteBT2)
		{
			struct Route routes[100];
			int size = -1;
			int result = getBestRoute(routes, size, shipment);
			Assert::AreEqual(0, result);
		}
		TEST_METHOD(getBestRouteBT3)
		{
			struct Route routes[100];
			int size = NULL;
			int result = getBestRoute(routes, size, shipment);
			Assert::AreEqual(0, result);
		}
		TEST_METHOD(getBestRouteBT4)
		{
			struct Route routes[10];
			int size = 10;
			routes[0].numPoints = 3;
			routes[0].points[0] = { 7,24 };
			int result = getBestRoute(routes, size, shipment);
			Assert::AreEqual(1, result);
		}
	};
		
}