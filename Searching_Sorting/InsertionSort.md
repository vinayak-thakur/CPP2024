# Insertion Sort Explanation

Insertion Sort is a simple and intuitive sorting algorithm that builds the final sorted array one item at a time. It works similarly to sorting cards in your hand. At any point in time, the left portion of the array is sorted, and the algorithm picks the next element from the right portion to insert it into its correct position in the sorted portion.

## How Insertion Sort Works:

1. **Start from the second element**: We assume that the first element is already sorted. We take the second element and place it in its correct position relative to the first element.
2. **Move larger elements**: If the element from the unsorted part is smaller than an element in the sorted part, we shift all larger elements one position to the right to make space.
3. **Insert the element**: After shifting all larger elements, the current element is placed in the correct position.
4. **Repeat the process**: Continue with the next element, always maintaining a sorted section on the left and unsorted elements on the right.

---

## Code Explanation:

```cpp
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int array[], int size) {
    // Outer loop corresponds to elements in the sorted portion, starting from index 1 
    for (int i = 1; i < size; i++) {
        int temp = array[i];  // Current element selected from unsorted part
        int j = i - 1;  // Index of the last element in the sorted portion

        // Shift elements of the sorted part to the right until the correct position for temp is found
        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];  // Move element one position to the right
            j--;
        }

        // Insert the selected element into its correct position
        array[j + 1] = temp;
    }
}

int main() {
    int array[] = {5, 4, 10, 1, 6, 2};  // Input array
    int size = 6;  // Size of the array

    insertionSort(array, size);  // Call the sorting function

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
```
# Detailed Explanation of the Code

### Outer Loop (`for (int i = 1; i < size; i++)`):

- This loop starts from the second element (`i = 1`) because we assume that the first element is already sorted.
- `i` tracks the current element that needs to be placed in the correct position in the sorted portion.

### Inner Loop (`while (j >= 0 && array[j] > temp)`):

- `temp` holds the current element (`array[i]`) which needs to be inserted into the sorted part.
- `j = i - 1` refers to the index of the last element in the sorted portion.
- The inner loop checks if the current element (`temp`) is smaller than any element in the sorted portion. If so, it shifts the larger elements one position to the right until it finds the correct spot for `temp`.

### Insertion Step (`array[j + 1] = temp`):

- Once we find the correct position for `temp` (i.e., when the inner loop terminates), we insert it at index `j + 1`.

---

# Detailed Explanation of the Code

### Outer Loop (`for (int i = 1; i < size; i++)`):

- This loop starts from the second element (`i = 1`) because we assume that the first element is already sorted.
- `i` tracks the current element that needs to be placed in the correct position in the sorted portion.

### Inner Loop (`while (j >= 0 && array[j] > temp)`):

- `temp` holds the current element (`array[i]`) which needs to be inserted into the sorted part.
- `j = i - 1` refers to the index of the last element in the sorted portion.
- The inner loop checks if the current element (`temp`) is smaller than any element in the sorted portion. If so, it shifts elements to the right.

### Insertion Step (`array[j + 1] = temp`):

- Once we find the correct position for `temp` (i.e., when the inner loop terminates), we insert it at index `j + 1`.

---

# Dry Run of the Code

Let’s walk through a dry run of the algorithm using the input array `{5, 4, 10, 1, 6, 2}`.

### Initial Array:

`[5, 4, 10, 1, 6, 2]`

### Pass 1 (`i = 1`):

- `temp = array[1] = 4`
- Compare 4 with 5 (the first element in the sorted portion).
- Since `4 < 5`, we shift 5 to the right, and then insert 4 at the start.

**Array after Pass 1:**

`[4, 5, 10, 1, 6, 2]`

### Pass 2 (`i = 2`):

- `temp = array[2] = 10`
- Compare 10 with 5. No shift is required because `10 > 5`.
- Insert 10 in the same position.

**Array after Pass 2:**

`[4, 5, 10, 1, 6, 2]`

### Pass 3 (`i = 3`):

- `temp = array[3] = 1`
- Compare 1 with 10, 5, and 4.
- Since `1 < 4`, we shift 10, 5, and 4 to the right and insert 1 at the start.

**Array after Pass 3:**

`[1, 4, 5, 10, 6, 2]`

### Pass 4 (`i = 4`):

- `temp = array[4] = 6`
- Compare 6 with 10.
- Since `6 < 10`, shift 10 to the right, then insert 6 at index 3.

**Array after Pass 4:**

`[1, 4, 5, 6, 10, 2]`

### Pass 5 (`i = 5`):

- `temp = array[5] = 2`
- Compare 2 with 10, 6, 5, and 4.
- Since `2 < 4`, shift 10, 6, 5, and 4 to the right, then insert 2 at index 1.

**Array after Pass 5:**

`[1, 2, 4, 5, 6, 10]`

---

# Step-by-Step Breakdown:

- **Pass 1 (i = 1):**
  - `temp = array[1] = 4`
  - `j = 0` (comparing with 5)
  - Since `4 < 5`, shift 5 to the right, insert 4.
  - Array becomes: `[4, 5, 10, 1, 6, 2]`
  
- **Pass 2 (i = 2):**
  - `temp = array[2] = 10`
  - `j = 1` (comparing with 5)
  - No shift needed as `10 > 5`.
  - Array remains: `[4, 5, 10, 1, 6, 2]`
  
- **Pass 3 (i = 3):**
  - `temp = array[3] = 1`
  - `j = 2` (comparing with 10), shift 10 to the right.
  - `j = 1` (comparing with 5), shift 5 to the right.
  - `j = 0` (comparing with 4), shift 4 to the right.
  - Insert 1 at the beginning.
  - Array becomes: `[1, 4, 5, 10, 6, 2]`
  
- **Pass 4 (i = 4):**
  - `temp = array[4] = 6`
  - `j = 3` (comparing with 10), shift 10 to the right.
  - Insert 6 at index 3.
  - Array becomes: `[1, 4, 5, 6, 10, 2]`
  
- **Pass 5 (i = 5):**
  - `temp = array[5] = 2`
  - `j = 4` (comparing with 10), shift 10 to the right.
  - `j = 3` (comparing with 6), shift 6 to the right.
  - `j = 2` (comparing with 5), shift 5 to the right.
  - `j = 1` (comparing with 4), shift 4 to the right.
  - Insert 2 at index 1.
  - Array becomes: `[1, 2, 4, 5, 6, 10]`

---

# Time Complexity:

- **Best Case (Already Sorted Array)**: `O(n)`
- **Average and Worst Case**: `O(n²)`

In the worst case (reverse sorted array), for every element, we might have to shift all previous elements.

