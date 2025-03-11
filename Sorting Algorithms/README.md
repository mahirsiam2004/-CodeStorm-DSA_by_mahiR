Sorting Algorithms in C++

Overview

This document provides a summary of various sorting algorithms available in C++, including built-in STL sorting functions and commonly implemented algorithms.

1. Built-in Sorting Algorithms (STL)

C++ Standard Library provides optimized sorting functions:

std::sort() - Uses Introsort (QuickSort, HeapSort, Insertion Sort hybrid).

std::stable_sort() - Uses Merge Sort, preserving order of equal elements.

std::partial_sort() - Sorts only the first k elements efficiently.

std::nth_element() - Finds the nth element's correct position.

std::is_sorted() - Checks if an array is already sorted.

2. Common Sorting Algorithms (Manually Implemented)

Algorithm

Best Case

Worst Case

Stable?

std::sort (Introsort)

O(n log n)

O(n log n)

No

std::stable_sort (Merge Sort)

O(n log n)

O(n log n)

Yes

Bubble Sort

O(n)

O(n^2)

Yes

Selection Sort

O(n^2)

O(n^2)

No

Insertion Sort

O(n)

O(n^2)

Yes

Merge Sort

O(n log n)

O(n log n)

Yes

Quick Sort

O(n log n)

O(n^2)

No

Heap Sort

O(n log n)

O(n log n)

No

Counting Sort

O(n + k)

O(n + k)

Yes

Radix Sort

O(nk)

O(nk)

Yes

3. Choosing the Right Algorithm

Use std::sort() for general sorting.

Use std::stable_sort() if order preservation is needed.

Use Insertion Sort for small or nearly sorted data.

Use Merge Sort or Quick Sort for large datasets.

Use Counting Sort or Radix Sort for integer-based sorting.
