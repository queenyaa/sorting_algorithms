Readme of Sorting Algorithms in C Programming

##Task 0: Bubble Sort in C##
===========================================================================

## Overview

The goal of this task is to implement the Bubble Sort algorithm in C. Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted. This sorting algorithm is not very efficient, but it serves as a good starting point for understanding sorting algorithms.

## Function Signature

```c
void bubble_sort(int *array, size_t size);
```

- `array`: Pointer to the array of integers to be sorted.
- `size`: The number of elements in the array.

## Implementation

Here's a high-level overview of how the Bubble Sort algorithm is implemented:

1. We start with an array of integers to be sorted.
2. We iterate through the array multiple times, comparing adjacent elements.
3. If an adjacent pair is out of order (i.e., the current element is greater than the next element), we swap them.
4. We repeat this process until no more swaps are needed, indicating that the array is sorted.

The inner loop of the algorithm repeatedly compares and swaps elements as needed, and the outer loop controls the number of passes through the array.

## Example

Suppose we have an array: `[19, 48, 99, 71, 13, 52, 96, 73, 86, 7]`. Here's how Bubble Sort works:

1. Initial array: `[19, 48, 99, 71, 13, 52, 96, 73, 86, 7]`
2. First pass: `[19, 48, 71, 13, 52, 96, 73, 86, 7, 99]`
3. Second pass: `[19, 48, 13, 52, 71, 73, 86, 7, 96, 99]`
4. Third pass: `[19, 13, 48, 52, 71, 73, 7, 86, 96, 99]`
5. Fourth pass: `[13, 19, 48, 52, 71, 7, 73, 86, 96, 99]`
6. Fifth pass: `[13, 19, 48, 52, 7, 71, 73, 86, 96, 99]`
7. Sixth pass: `[13, 19, 48, 7, 52, 71, 73, 86, 96, 99]`
8. Seventh pass: `[13, 19, 7, 48, 52, 71, 73, 86, 96, 99]`
9. Eighth pass: `[13, 7, 19, 48, 52, 71, 73, 86, 96, 99]`
10. Ninth pass: `[7, 13, 19, 48, 52, 71, 73, 86, 96, 99]`

The array is now sorted in ascending order.

## Time Complexity

- Best Case: O(n) - When the array is already sorted, and no swaps are needed.
- Average Case: O(n^2) - When the elements are partially out of order.
- Worst Case: O(n^2) - When the elements are in reverse order, and every pair needs to be swapped.

Bubble Sort is not the most efficient sorting algorithm, especially for large arrays, but it's a good introduction to sorting algorithms and serves as a building block for more advanced sorting methods.



##Task 1: Insertion Sort for Doubly Linked List##
=================================================================================

The goal of this task is to implement the Insertion Sort algorithm to sort a doubly linked list in ascending order. The task also requires printing the list after each swap operation to visualize the sorting process.

**Function Signature:**

```c
void insertion_sort_list(listint_t **list);
```

**Parameters:**

- `listint_t **list`: A double pointer to the head of the doubly linked list.

**Task Requirements:**

1. Sort the doubly linked list in ascending order using the Insertion Sort algorithm.
2. You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
3. Print the list after each time you swap two elements to visualize the sorting process.

**Explanation:**

- The Insertion Sort algorithm is used to sort the doubly linked list. It involves repeatedly taking elements from the unsorted part of the list and inserting them in their correct position within the sorted part of the list.

- The function `insertion_sort_list` begins by checking if the list is empty or contains only one element, in which case no sorting is necessary.

- It initializes two pointers, `sorted` and `next`, which are used to traverse the list.

- The core of the algorithm lies in the inner while loop. It compares the current node with its previous nodes and swaps them if necessary to maintain the ascending order. The swapping involves adjusting the pointers (next and prev) of the nodes accordingly.

- The `print_list(*list)` function is called within this loop to display the list after each swap, as required by the task.

- The outer loop continues to traverse the list, sorting and swapping nodes until the entire list is sorted.

**Time Complexity Analysis:**

The time complexity of the Insertion Sort algorithm for a doubly linked list is as follows:

- Best Case: O(n) - When the list is already sorted, and no swaps are needed.
- Average Case: O(n^2) - In most real-world scenarios.
- Worst Case: O(n^2) - When the list is sorted in reverse order, and maximum swaps are needed.

The sorting process is more efficient when the list is partially sorted or nearly sorted.

**Conclusion:**

This task involves implementing the Insertion Sort algorithm for a doubly linked list and printing the list after each swap to visualize the sorting process. The code provided accomplishes this and should produce the expected output.


##Task 2: Selection Sort for an Array of Integers##
===============================================================================

The goal of this task is to implement the Selection Sort algorithm to sort an array of integers in ascending order. The task also requires printing the array after each time two elements are swapped to visualize the sorting process.

**Function Signature:**

```c
void selection_sort(int *array, size_t size);
```

**Parameters:**

- `int *array`: An array of integers to be sorted.
- `size_t size`: The number of elements in the array.

**Task Requirements:**

1. Sort the array of integers in ascending order using the Selection Sort algorithm.
2. Print the array after each time two elements are swapped to visualize the sorting process.

**Explanation:**

- The Selection Sort algorithm involves dividing the input array into two parts: the sorted part and the unsorted part. In each iteration, the algorithm selects the smallest element from the unsorted part and moves it to the end of the sorted part.

- The function `selection_sort` begins by iterating through the array. In each iteration, it identifies the smallest element in the unsorted part and swaps it with the element at the current position.

- The `print_array` function is called within this loop to display the array after each swap, as required by the task.

- The outer loop continues until the entire array is sorted.

**Time Complexity Analysis:**

The time complexity of the Selection Sort algorithm for an array is as follows:

- Best Case: O(n^2) - Because it always requires the same number of comparisons and swaps.
- Average Case: O(n^2) - The algorithm's performance does not depend on the initial order of elements.
- Worst Case: O(n^2) - Occurs when the array is sorted in reverse order, resulting in the maximum number of comparisons and swaps.

Selection Sort is an inefficient sorting algorithm for large arrays, but it has the advantage of making only one exchange for every pass through the list. It's not suitable for large datasets.

**Conclusion:**


##Task 3: Use Quick sort Algorithm to sort an array of integers in ascending order##
====================================================================================

This task involves implementing the Selection Sort algorithm for an array of integers and printing the array after each swap to visualize the sorting process. The code provided accomplishes this and should produce the expected output.


To solve Task 3, you need to implement the Quick Sort algorithm to sort an array of integers in ascending order. The Quick Sort algorithm is known for its efficiency and is commonly used for sorting. Here's a step-by-step guide to solving this task:

## Function Signature

```c
void quick_sort(int *array, size_t size);
```

### Input

- `array`: An array of integers to be sorted.
- `size`: The number of elements in the array.

### Output

The `quick_sort` function sorts the `array` in ascending order in-place. It does not return a value.

## Quick Sort Algorithm

Quick Sort is a divide-and-conquer sorting algorithm that works as follows:

1. Choose a pivot element from the array. In this implementation, the pivot should always be the last element of the partition being sorted.

2. Partition the array into two subarrays: elements less than the pivot and elements greater than the pivot.

3. Recursively apply the Quick Sort algorithm to the two subarrays.

4. Concatenate the sorted subarrays and the pivot to obtain the final sorted array.

## Pseudocode for Quick Sort

Here's the pseudocode for the Quick Sort algorithm:

```plaintext
QuickSort(arr, low, high):
    if low < high:
        pivot_index = Partition(arr, low, high)
        QuickSort(arr, low, pivot_index - 1)
        QuickSort(arr, pivot_index + 1, high)

Partition(arr, low, high):
    pivot = arr[high]  # Choose the last element as the pivot
    i = low - 1  # Initialize the index of the smaller element

    for j in range(low, high):
        if arr[j] <= pivot:
            i = i + 1
            Swap(arr[i], arr[j])

    Swap(arr[i + 1], arr[high])
    return i + 1
```

## Example

Here's an example of how the Quick Sort algorithm can be implemented:

```c
int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
size_t n = sizeof(array) / sizeof(array[0]);

print_array(array, n);
quick_sort(array, n);
print_array(array, n);
```

### Output

The code above would produce the following output, showing the array at each step of the sorting process:

Initial Array: [19, 48, 99, 71, 13, 52, 96, 73, 86, 7]

Intermediate Steps (array after swapping elements):
- [7, 48, 13, 71, 19, 52, 96, 73, 86, 99]
- [7, 48, 13, 19, 71, 52, 96, 73, 86, 99]
- [7, 13, 48, 19, 71, 52, 96, 73, 86, 99]
- [7, 13, 19, 48, 71, 52, 96, 73, 86, 99]
- [7, 13, 19, 48, 52, 71, 96, 73, 86, 99]
- [7, 13, 19, 48, 52, 71, 73, 96, 86, 99]

The array is now sorted in ascending order.

## Complexity Analysis

The time complexity of the Quick Sort algorithm is as follows:
- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n^2)

The space complexity is O(log n) due to the recursive function call stack.



