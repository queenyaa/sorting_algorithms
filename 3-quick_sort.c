#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using Quick
 * Sort
 * @array: the array to be sorted
 * @size: number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - Recursively sorts an array using the Lomuto
 * partition scheme
 * @array: the array to be sorted
 * @low: the lower bound of the partition
 * @high: the upper bound of the partition
 * @size: number of elements in the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		if (pivot > low)
			quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * lomuto_partition - Partitions an array using the Lomuto partition
 * scheme
 * @array: the array to be partitioned
 * @low: the lower bound of the partition
 * @high: the upper bound of the partition
 * @size: number of elements in the array
 * Return: the pivot index
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int x = low - 1;
	int y, temp;

	for (y = low; y <= high - 1; y++)
	{
		if (array[y] < pivot)
		{
			y++;
			if (x != y)
			{
				temp = array[x];
				array[x] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[x + 1] != array[high])
	{
		temp = array[x + 1];
		array[x + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (x + 1);
}
