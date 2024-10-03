#include <catch.hpp>
#include "OptimizedBubbleSort.h"


TEST_CASE()
{
	int Array[5] = { 1, 7, 2, 8, 9 };
	int N = 5;
	OptimizedBubbleSort(Array, N);
	for (int i = 0; i < N - 1; i++)
	{
		REQUIRE(Array[i] <= Array[i + 1]);
	}


	int Array2[5] = {};
	OptimizedBubbleSort(Array2, N);
	for (int i = 0; i < N - 1; i++)
	{
		REQUIRE(Array2[i] <= Array2[i + 1]);
	}


	double Array3[5] = { 4.6, 2, -3, 8, -5 };
	OptimizedBubbleSort(Array3, N);
	for (int i = 0; i < N - 1; i++)
	{
		REQUIRE(Array3[i] <= Array3[i + 1]);
	}
}