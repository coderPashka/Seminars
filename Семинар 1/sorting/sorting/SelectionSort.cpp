template <typename T> void SelectionSort(T* arr, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int minIn = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[j] < arr[minIn])
				minIn = j;
		}

		int copy = arr[i];
		arr[i] = arr[minIn];
		arr[minIn] = copy;
	}
}
