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


##Task 4: Shell Sort with Knuth Sequence##
==============================================================================

**Objective:** The goal of this task is to implement a sorting algorithm called Shell Sort using the Knuth sequence to sort an array of integers in ascending order.

**Algorithm Overview:**
- Shell Sort is an extension of the Insertion Sort algorithm.
- It works by sorting subarrays defined by a sequence of gap values.
- The Knuth sequence, denoted as (1, 4, 13, 40, 121, ...), is used to determine the gap values. This sequence starts with 1 and continues by multiplying the previous gap by 3 and adding 1.

**Function Prototype:**
```c
void shell_sort(int *array, size_t size);
```

**Function Description:**
- `array`: An array of integers to be sorted.
- `size`: The number of elements in the array.

The function sorts the input array in ascending order using Shell Sort with the Knuth sequence.

**Algorithm Steps:**
1. Initialize a variable `gap` to 1.
2. Find the initial gap value using the Knuth sequence: while `gap` is less than one-third of the array size, set `gap` to `gap * 3 + 1`.
3. Loop over the array with decreasing gap values.
4. In each iteration, perform an insertion sort on the subarrays defined by the current gap.
5. Print the array after each step.
6. Continue decreasing the gap until it reaches 1.
7. The array will be sorted in ascending order at the end of the process.

**Usage Example:**
```c
int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
size_t n = sizeof(array) / sizeof(array[0]);

print_array(array, n);
printf("\n");
shell_sort(array, n);
printf("\n");
print_array(array, n);
```

**Notes:**
- The Knuth sequence helps in improving the efficiency of the Shell Sort algorithm.
- Shell Sort is a versatile algorithm and can be used for relatively small to medium-sized arrays.

**Complexity:**
The time complexity of Shell Sort depends on the size of the array and the gap sequence. In the worst case, it is O(n^2), but with the Knuth sequence, it has a better average-case performance. The exact time complexity for Shell Sort with the Knuth sequence can vary and is not expressed in Big O notation.


##Task 5: Cocktail Shaker sort Algorithm to sort out doubly linked list of integers##
===================================================================================

To complete Task 5, which involves implementing the Cocktail Shaker Sort algorithm for a doubly linked list of integers, you can follow these steps:

1. Create the `cocktail_sort_list` function according to the provided prototype:

```c
void cocktail_sort_list(listint_t **list);
```

2. The function takes a pointer to a pointer to a doubly linked list (`listint_t`). You will not modify the integer values (denoted as `n`) of the nodes but instead swap the nodes themselves.

3. Implement the Cocktail Shaker Sort algorithm on the doubly linked list.

4. The algorithm works by iterating through the list from both ends (left to right and right to left) in alternating passes, swapping adjacent nodes if they are out of order.

5. During each pass, compare adjacent nodes and swap them if necessary. Keep track of whether any swaps occurred in a pass.

6. Continue the passes until no swaps are needed during an entire iteration.

7. Ensure to print the list after each swap operation, as required by the task.

8. Here is a high-level overview of the Cocktail Shaker Sort algorithm for a doubly linked list:

   - Start with a boolean flag to indicate whether any swaps have occurred.
   - Loop while the flag is true (indicating there are more swaps to be made):
     - Initialize the flag to false at the beginning of each pass.
     - Perform a left-to-right pass:
       - Compare each node with its next node and swap them if they are in the wrong order.
       - Set the flag to true if a swap occurs.
     - Perform a right-to-left pass:
       - Compare each node with its previous node and swap them if they are in the wrong order.
       - Set the flag to true if a swap occurs.
     - If no swaps occurred during the pass, exit the loop.

9. After the loop, the doubly linked list will be sorted in ascending order.

10. You can use the provided `print_list` function to print the list after each swap operation.

11. Ensure the function sorts the list correctly and handles edge cases.

12. For the Big O notations in the `101-O` file, you can describe the time complexity in the best case, average case, and worst case for the Cocktail Shaker Sort algorithm applied to a doubly linked list. The exact notations will depend on the specific implementation and any optimizations made.

**Note**: Be aware of edge cases, such as an empty list or a list with only one node.

Once you've implemented and tested the `cocktail_sort_list` function, the task should be complete. Make sure to handle memory allocation and deallocation properly for any dynamically allocated nodes during sorting.


##Task 6: Counting Sort Algorithm##
==================================================================================

In Task 6, we are tasked with implementing the Counting Sort algorithm, a non-comparative sorting algorithm specifically designed for integers with a range of non-negative values. The algorithm counts the occurrences of each unique element in the input array and uses this information to sort the elements in ascending order.

### Function Signature

```c
void counting_sort(int *array, size_t size);
```

### Input

- `array`: A pointer to an array of integers.
- `size`: The number of elements in the array.

### Output

The function modifies the input array to be sorted in ascending order.

### Algorithm

1. Find the maximum value in the input array. This step determines the size of the counting array.
2. Create a counting array to store the count of occurrences for each unique element in the input array.
3. Initialize the counting array with zeros.
4. Count the occurrences of each value in the input array by incrementing the corresponding index in the counting array.
5. Build a sorted array based on the counting array's information.
6. Copy the sorted array back to the original input array.

### Pseudocode

```plaintext
counting_sort(array, size):
    if size <= 1:
        return

    max = find_max_value(array)
    counting = create_array(max + 1, initialized to 0)
    for i in range(size):
        counting[array[i]]++
    sorted = create_array(size)
    sorted_index = 0
    for i in range(max + 1):
        while counting[i] > 0:
            sorted[sorted_index] = i
            sorted_index++
            counting[i]--
    copy sorted back to array
```

### Time Complexity

The time complexity of the Counting Sort algorithm depends on the range of input values (`k`) and the number of elements in the input array (`n`).

- Best Case: O(n + k)
- Average Case: O(n + k)
- Worst Case: O(n + k)

### Space Complexity

The space complexity of Counting Sort is O(n + k), where `n` is the number of elements in the input array, and `k` is the range of input values.

### Use Cases

Counting Sort is particularly useful when sorting a collection of integers with a relatively small range of values. It is an efficient sorting algorithm when the range (`k`) is not significantly larger than the number of elements (`n`). It is often used as a building block in more complex sorting algorithms and can be adapted for radix sort.

In this task, we've implemented Counting Sort to sort an array of non-negative integers in ascending order. The algorithm has been verified with sample test cases to ensure it functions correctly.


##Task 7: Merge Sort Algorithm##
================================================================================

In this task, you are required to implement the Merge Sort algorithm to sort an array of integers in ascending order. Merge Sort is a divide-and-conquer sorting algorithm that recursively divides the array into smaller subarrays, sorts these subarrays, and then merges them back together.

### Implementation Details

1. **Merge Function:** The `merge` function is responsible for merging two sorted subarrays (the left and right subarrays) back into the original array. It iterates through the left and right subarrays, comparing elements, and placing them in the correct order in the original array.

2. **Merge Sort Function:** The `merge_sort` function recursively splits the original array into two halves until the subarrays are small enough to be sorted easily. It then calls the `merge` function to merge the sorted subarrays back into the original array. The process is repeated until the entire array is sorted.

### Usage

To use the Merge Sort algorithm to sort an array, call `merge_sort(array, size)` with your array and its size as arguments. The function will sort the array in ascending order.

### Output

The code includes print statements to visualize the process. It prints the subarrays being split and merged, which can be useful for understanding the algorithm's steps.

### Big O Notation

The time complexity of the Merge Sort algorithm is consistent across best, average, and worst cases:

- **Best Case:** O(n log n)
- **Average Case:** O(n log n)
- **Worst Case:** O(n log n)

Merge Sort provides a stable sorting solution with a relatively efficient runtime.

---


##Task 8: Implementing Heap Sort##
============================================================================

*Function Signature: void heap_sort(int *array, size_t size);

**Overview:**

Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure to achieve sorting. It is a part of the selection sort family. The main idea behind Heap Sort is to build a binary heap from the array and then repeatedly remove the maximum element from the heap and add it to the sorted part of the array. 

**Algorithm:**

1. Build a max heap from the array. This is done by repeatedly calling the *heapify* function, starting from the last non-leaf node and working up to the root of the heap. The heapify function ensures that the root of the heap contains the maximum element.

2. Repeatedly remove the maximum element from the heap (which is always the root) and place it at the end of the array. Decrease the size of the heap and call the *heapify* function to maintain the max heap property.

3. Repeat step 2 until the entire array is sorted.

**Time Complexity:**

Heap Sort has a time complexity of O(n * log(n)) in the worst, average, and best cases. This makes it an efficient sorting algorithm for large datasets.

**Space Complexity:**

Heap Sort is an in-place sorting algorithm, meaning it uses constant extra space. This makes it memory-efficient.

**Example:**

```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    heap_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```

This code snippet demonstrates how to use the *heap_sort* function to sort an array of integers in ascending order. The function repeatedly calls *heapify* to build and maintain the max heap while moving elements to their correct positions. The sorted array is printed after each step.



