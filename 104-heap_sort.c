#include "sort.h"

/**
 * heapify - Heapify a heap node
 * @array: array
 * @n: array size
 * @x: root index
 * @size: array size
 */
void heapify(int *array, size_t n, size_t x, size_t size)
{
	size_t largest, left, right;
	int temp;

	while ((left = (2 * n) + 1) <= size)
	{
		largest = n;
		right = left + 1;
		if (array[largest] < array[left])
			largest = left;
		if (right <= x && array[largest] < array[right])
			largest = right;
		if (largest == n)
			return;
		temp = array[n];
		array[n] = array[largest];
		array[largest] = temp;
		print_array(array, size);
		n = largest;
	}
}

/**
 * heapitol - makes a heap from unsorted array
 * @array: array to turn into heap
 * @size: size of the array
 */
void heapitol(int *array, size_t size)
{
	size_t upper;

	for (upper = ((size - 1) - 1) / 2; upper != 0; upper--)
	{
		heapify(array, upper, size - 1, size);
	}

}

/**
 * heap_sort - sorts an array of integers using heap sort
 * @array: the array to be sorted
 * @size: number of elements in @array
 */
void heap_sort(int *array, size_t size)
{
        size_t end;
        int temp;

        if (array == NULL || size < 2)
                return;
	heapitol(array, size);
	end = size - 1;
	while (end > 0)
	{
		temp = array[end];
		array[end] = array[0];
		array[0] = temp;
		print_array(array, size);
		end--;
		heapify(array, 0, end, size);
	}
}
