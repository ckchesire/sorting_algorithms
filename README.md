# 0x1B. C - Sorting algorithms & Big O

Sorting algorithms vary in efficiency and suitability based on the input size, 
structure, stability requirements, and space constraints. For instance, Bubble
Sort and Selection Sort, both with \(O(n^2)\) time complexity, work well for 
small or nearly sorted arrays due to their simplicity but are inefficient for
larger datasets. More sophisticated algorithms like Merge Sort and Quick Sort,
with \(O(n \log n)\) average time complexity, are typically better for large 
datasets Merge Sort is stable and consistent across input structures but 
requires additional space, while Quick Sort is in-place but has the risk of 
degrading to \(O(n^2)\) in the worst case.

Choosing the right sorting algorithm depends on balancing these factors: if 
stability is essential (e.g., preserving the order of duplicate elements), go 
for stable algorithms like Merge Sort or Bubble Sort. If you need fast, in-place
sorting and are working with large, randomly ordered data, Quick Sort can be
optimal, though for guaranteed \(O(n \log n)\) performance and complex data 
sorting, Merge Sort may be more reliable despite its extra space usage.
