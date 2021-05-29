#include "header.h"
int binarySearch(int arr[], int key, int low, int high)
{
	if (low > high)
		return -1;
	int mid;
	mid = low + ((high - low) / 2);

	if (key == arr[mid])
		return mid;
	else if (key > arr[mid])
		return binarySearch(arr, key, mid + 1, high);
	else
		return binarySearch(arr, key, low, mid - 1);

}