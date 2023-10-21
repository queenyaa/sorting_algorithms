#include "sort.h"

/**
 * _asc - merge two subarrays based on the given direction
 * @array: the input array to merge
 * @beg: the beginning index of the first subarray
 * @mid: the middle index separating the two subarrays
 * @end: the ending index of the second subarray
 */
void _asc(int *array, size_t beg, size_t mid, size_t end)
{
	size_t x = 0, y = 0, z = beg, n1 = mid - beg + 1, n2 = end - mid;
	int *left, *right;

	left = (int *)malloc(n1 * sizeof(int));
	right = (int *)malloc(n2 * sizeof(int));

	for (x = 0; x < n1; x++)
		left[x] = array[beg + x];
	for (y = 0; y < n2; y++)
		right[y] = array[mid + 1 + y];
	while (x < n1 && y < n2)
	{
		if (left[x] <= right[y])
		{
			array[z] = left[x];
			x++;
		}
		else
		{
			array[z] = right[y];
			y++;
		}
		z++;
	}
	while (x < n1)
	{
		array[z] = left[x];
		x++;
		z++;
	}
	while (y < n2)
	{
		array[z] = right[y];
		y++;
		z++;
	}
	free(left);
	free(right);
}

/**
 * _dsc - merge two subarrays based on the given direction
 * @array: the input array to merge
 * @beg: the beginning index of the first subarray
 * @mid: the middle index separating the two subarrays
 * @end: the ending index of the second subarray
 */
void _dsc(int *array, size_t beg, size_t mid, size_t end)
{
	size_t x = 0, y = 0, z = beg, n1 = mid - beg + 1, n2 = end - mid;
	int *left, *right;

	left = (int *)malloc(n1 * sizeof(int));
        right = (int *)malloc(n2 * sizeof(int));

	for (x = 0; x < n1; x++)
		left[x] = array[beg + x];
	for (y = 0; y < n2; y++)
		right[y] = array[mid + 1 + y];

	while (x < n1 && y < n2)
	{
		if (left[x] >= right[y])
		{
			array[z] = left[x];
			x++;
		}
		else
		{
			array[z] = right[y];
			y++;
		}
		z++;
	}
	while (x < n1)
	{
		array[z] = left[x];
		x++;
		z++;
	}
	while (y < n2)
	{
		array[z] = right[y];
		y++;
		z++;
	}
	free(left);
	free(right);
}

/**
 * _mrg - merge two subarrays based on the given direction
 * @array: the input array to merge
 * @beg: the beginning index of the first subarray
 * @dir: 1 for ascending, 0 for descending
 * @mid: the middle index separating the two subarrays
 * @end: the ending index of the second subarray
 */
void _mrg(int *array, size_t beg, size_t mid, size_t end, int dir)
{
	if (dir == 1)
		_asc(array, beg, mid, end);
	else
		_dsc(array, beg, mid, end);
}

/**
 * bmrg - recursively merge the array in a bitonic manner
 * @array: the input array to merge
 * @size: the size of the array
 * @dir: 1 for ascending, 0 for descending
 * @beg: the beginning index of the first subarray
 * @end: the ending index of the second subarray
 */
void bmrg(int *array, size_t size, int dir, size_t beg, size_t end)
{
	size_t mid = (beg + end) / 2;

	if (end > 1)
	{
		bmrg(array, size, dir, beg, mid);
		bmrg(array, size, dir, mid, end);
		_mrg(array, beg, mid, end, dir);
	}
}

/**
 * bsr - recursively perform bitonic sorting
 * @array: the input array to merge
 * @size: the size of the array
 * @dir: 1 for ascending, 0 for descending
 */
void bsr(int *array, size_t size, int dir)
{
	size_t mid = size / 2;

	if (size > 1)
	{
		bsr(array, mid, 1);
		bsr(array + mid, mid, 0);
		bmrg(array, size, dir, 0, size);
	}
}

/**
 * bitonic_sort - sort an array of integers using Bitonic sort
 * @array: the input array to merge
 * @size: the size of the array
 */
void bitonic_sort(int *array, size_t size)
{
	int ascending = 1;

	if (array && size > 1 && ((size & (size - 1)) == 0))
		bsr(array, size, ascending);
}
