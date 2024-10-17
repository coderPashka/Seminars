#define CATCH_CONFIG_MAIN
#include "C:\Users\pavel\source\repos\лабы структуры 2.1\Семинар 2\sorting\catch2\catch.hpp"
#include "C:\Users\pavel\source\repos\лабы структуры 2.1\Семинар 2\sorting\sorting\Shaker_Sort.h"


TEST_CASE("Shaker Sorting works correctly")
{
	int flag = 1;

	int array1_size = 1;
	int array2_size = 5;
	int array3_size = 5;
	int array4_size = 5;

	float array1[1] = {};
	float array2[] = { 7, 1.52, 2, 5.65, 10 };
	int   array3[] = { 2, 2, 2, 3, 1 };
	int   array4[] = { 8, 1, 7, 2, 3 };

	ShakerSort(array1, array1_size);
	ShakerSort(array2, array2_size);
	ShakerSort(array3, array3_size);
	ShakerSort(array4, array4_size);



	for (int i = 0; i < array1_size - 1; i++)
	{
		if (array1[i] > array1[i + 1])
		{
			flag = 0;
			break;
		}
	}

	for (int i = 0; i < array2_size - 1; i++)
	{
		if (array2[i] > array2[i + 1])
		{
			flag = 0;
			break;
		}
	}

	for (int i = 0; i < array3_size - 1; i++)
	{
		if (array3[i] > array3[i + 1])
		{
			flag = 0;
			break;
		}
	}

	for (int i = 0; i < array4_size - 1; i++)
	{
		if (array4[i] > array4[i + 1])
		{
			flag = 0;
			break;
		}
	}

	REQUIRE(flag);
}