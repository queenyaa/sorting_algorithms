#include "sort.h"

/**
 * swap - array to swap
 * @a: first array
 * @b: second array
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * hoare_part - Partition the array using Hoare's scheme
 * @array: array to be sorted
 * @low: start index for partition
 * @high: end index for partition
 * Return: Index of the pivort element
 */
int hoare_part(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1, j = high + 1;

	while (1)
	{
		do
			i++;
		while (array[i] < pivot);

		do
			j--;
		while (array[j] > pivot);

		if (i >= j)
			return (j);

		swap(&array[i], &array[j]);
	}
}

/**
 * hoare_quic_sort - sorts an array of integers using Hoare's
 * quick sort
 * @array: array to be sorted
 * @low: starting index
 * @high: ending index
 */
void hoare_quic_sort(int *array, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = hoare_part(array, low, high);
		hoare_quic_sort(array, low, pivot);
		hoare_quic_sort(array, pivot + 1, high);
	}
}

/**
 * quick_sort_hoare - sorts an array of integers in ascending order
 * using Hoare's quick sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	hoare_quic_sort(array, 0, size - 1);
}
