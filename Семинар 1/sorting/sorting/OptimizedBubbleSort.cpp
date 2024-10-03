template <typename T>  void OptimizedBubbleSort(T*arr, int n)
{
	bool flag;
	for (int i = 0; i < n - 1; i++)
	{
		flag = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int copy = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = copy;
				flag = true;
			}
		}

		if (!flag)
			break;
	}
}
