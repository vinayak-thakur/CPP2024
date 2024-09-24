
# Bubble Sort Explanation

Let's break down the **Bubble Sort** algorithm with an example array, and cover the **dry run**, **best case**, **average case**, and **worst case** time complexity, all in detail.

## Code Recap

Here’s the relevant part of the Bubble Sort code:

```cpp
#include <bits/stdc++.h>
using namespace std;

void bsort(vector<int>& array, int size) {
    for (int i = 0; i < size - 1; i++) {  // Outer loop
        for (int j = 0; j < size - i - 1; j++) {  // Inner loop
            if (array[j] > array[j+1]) {  // Swap if current element is greater
                swap(array[j], array[j+1]);
            }
        }
    }
}

int main() {
    vector<int> array = {7, 5, 19, 78, 45, 34};
    bsort(array, array.size());
    
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    
    return 0;
}
```

## Example Array for Dry Run

Let’s take the array:

```cpp
array = [7, 5, 19, 78, 45, 34]
```

### Dry Run

**Initial Array**: `[7, 5, 19, 78, 45, 34]`

#### First Pass (`i = 0`):
- **j = 0**: Compare `7` and `5` → Swap → Array: `[5, 7, 19, 78, 45, 34]`
- **j = 1**: Compare `7` and `19` → No Swap
- **j = 2**: Compare `19` and `78` → No Swap
- **j = 3**: Compare `78` and `45` → Swap → Array: `[5, 7, 19, 45, 78, 34]`
- **j = 4**: Compare `78` and `34` → Swap → Array: `[5, 7, 19, 45, 34, 78]`

**End of Pass 1**: The largest element `78` is now at its correct position.

#### Second Pass (`i = 1`):
- **j = 0**: Compare `5` and `7` → No Swap
- **j = 1**: Compare `7` and `19` → No Swap
- **j = 2**: Compare `19` and `45` → No Swap
- **j = 3**: Compare `45` and `34` → Swap → Array: `[5, 7, 19, 34, 45, 78]`

**End of Pass 2**: The second-largest element `45` is now at its correct position.

#### Third Pass (`i = 2`):
- **j = 0**: Compare `5` and `7` → No Swap
- **j = 1**: Compare `7` and `19` → No Swap
- **j = 2**: Compare `19` and `34` → No Swap

**End of Pass 3**: The third-largest element `34` is now at its correct position.

#### Fourth Pass (`i = 3`):
- **j = 0**: Compare `5` and `7` → No Swap
- **j = 1**: Compare `7` and `19` → No Swap

**End of Pass 4**: The fourth-largest element `19` is now at its correct position.

#### Fifth Pass (`i = 4`):
- **j = 0**: Compare `5` and `7` → No Swap

**End of Pass 5**: The array is now fully sorted.

**Final Sorted Array**: `[5, 7, 19, 34, 45, 78]`

---
# Why Not `j <= size - i - 1`?

If you used `j <= size - i - 1`, in the last iteration (`j + 1`) would access an out-of-bounds index.

## Example:
For the first pass (`i = 0`), `j <= 4` would make `j = 4`, and `array[j+1]` would try to access `array[5]`, which is out of bounds since the valid indices range from `0` to `4` for an array of size `5`.

The reason we use `i < size - 1` instead of `i <= size - 1` is to avoid unnecessary iterations and ensure the loop runs the correct number of times.

## Here’s the explanation:

### Bubble Sort Basics:
In bubble sort, after each pass of the outer loop, the largest unsorted element "bubbles up" to its correct position in the array. Therefore, in each subsequent pass, you only need to check and compare elements up to the last unsorted element, which reduces by `1` after each pass.

### Why `i < size - 1`?
**Outer loop control (`i`):**

- `i` tracks how many passes we've made.
- After `n - 1` passes (where `n` is the size of the array), the array is already sorted because each pass ensures that the largest unsorted element is placed in the correct position.
- Thus, you only need `size - 1` iterations, as the last remaining element will automatically be in place once all others are sorted.
- If you use `i <= size - 1`, you are running an extra iteration unnecessarily, leading to redundant comparisons.

## Time Complexity

### **Best Case Time Complexity**: O(n)

- The best case occurs when the array is already sorted. In this case, the algorithm can stop early using an optimization called the **early exit condition** (not implemented in the above code, but possible).
- For an already sorted array, there would be no swaps, and we can complete the sort in just one pass. The inner loop will check all adjacent elements, but no swaps will be performed.
- **Number of comparisons**: `n - 1` in the first pass, and the algorithm will stop if it detects that no swaps were made. This results in **O(n)** comparisons and **O(1)** swaps.

#### Example (Best Case): `[1, 2, 3, 4, 5]`

- After one pass, the algorithm will detect that no swaps were needed, and it can terminate early.

### **Average Case Time Complexity**: O(n²)

- The average case occurs for a random order of elements.
- Bubble sort performs comparisons for every pair of elements and, on average, will perform multiple swaps to move elements to their correct positions.
- There are `n` passes and `n-i` comparisons in each pass. The total number of comparisons (and swaps) in the average case will be approximately:

```
Total Comparisons = n(n-1)/2 = O(n²)
```

#### Example (Average Case): `[7, 5, 19, 78, 45, 34]`

- As shown in the dry run, multiple comparisons and swaps are required to sort the array.

### **Worst Case Time Complexity**: O(n²)

- The worst case occurs when the array is sorted in reverse order.
- The algorithm will perform the maximum number of comparisons and swaps to sort the array.
- In the worst case, for every pass, the algorithm will have to compare all elements and swap adjacent elements to bubble the smallest element to the front.

```
Total Comparisons = n(n-1)/2 = O(n²)
```

#### Example (Worst Case): `[78, 45, 34, 19, 7, 5]`

- The algorithm will need to perform the maximum number of comparisons and swaps to sort the array in ascending order.
