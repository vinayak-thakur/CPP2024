## Selection Sort: A Detailed Explanation

**Understanding Selection Sort**

Selection Sort is a simple sorting algorithm that works by repeatedly finding the minimum element in the unsorted portion of the array and swapping it with the first   
 element. This process continues until the entire array is sorted.

**Algorithm:**

1. **Iterate through the array:**
   - For each element at index `i`:
     - Assume the current element is the minimum.
     - Iterate through the remaining unsorted elements (from index `i+1` to the end):
       - If a smaller element is found, update the minimum index.
     - If the minimum element is not at index `i`, swap it with the element at index `i`.

**Example:**

Let's sort the array `[6, 8, 4, 2, 10]` using selection sort.

**Initial Array:**

Use code with caution.

6 8 4 2 10


**Pass 1:**

* **i = 0:**
  - The minimum element is 2.
  - Swap 6 and 2.
2 8 4 6 10


**Pass 2:**

* **i = 1:**
  - The minimum element is 4.
  - Swap 8 and 4.
2 4 8 6 10


**Pass 3:**

* **i = 2:**
  - The minimum element is 6.
  - Swap 8 and 6.
2 4 6 8 10


**Pass 4:**

* **i = 3:**
  - The minimum element is 10.
  - No swap needed.

**Final Sorted Array:**
2 4 6 8 10


**Time Complexity:**

* **Best Case:** O(n^2) (occurs when the array is already sorted)
* **Average Case:** O(n^2)
* **Worst Case:** O(n^2)

**Space Complexity:**
* O(1) (in-place sorting)

**Key Points:**

* Simple to understand and implement.
* Inefficient for large datasets due to its quadratic time complexity.
* Suitable for small arrays or when in-place sorting is required.

**Code Implementation (C++):**

```cpp
#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n;   
 j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[minIndex], arr[i]);
        }
    }
}

int main() {
    vector<int>   
 arr = {6, 8, 4, 2, 10};
    int n = arr.size();

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
