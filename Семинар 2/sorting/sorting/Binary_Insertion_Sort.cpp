template <typename T> int BinarySearch(int arr[], int item, int low, int high)
{
	if (high <= low)
		return (item > arr[low]) ? (low + 1) : low;

	int mid = (low + high) / 2;

	if (item == arr[mid])
		return mid + 1;

	if (item > arr[mid])
		return BinarySearch(arr, item, mid + 1, high);

	return BinarySearch(arr, item, low, mid - 1);
}


template <typename T> void BinaryInsertionSort(T* arr[], int n)
{
	int i, loc, j, selected;

	for (i = 1; i < n; ++i)
	{
		j = i - 1;
		selected = arr[i];

		loc = BinarySearch(arr, selected, 0, j);

		while (j >= loc)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = selected;
	}
}