```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Pointer l represents the next position to place the next unique element.
        int l = 1;  

         // Iterate through the array from index 1
        for (int r = 1; r < nums.size(); r++) {
            // If the current element is not the same as the previous one, 
            // it means we found a unique element.
            if (nums[r] != nums[r - 1]) {
                nums[l] = nums[r];  // Place the unique element in its correct position.
                l++;  // Increment 'l' to the next available position.
            }
        }
        
        // Return the number of unique elements (l).
        return l;
    }
};

int main() {
    Solution sol;

    // Example 1: 
    vector<int> nums1 = {1, 1, 2};
    int k1 = sol.removeDuplicates(nums1);
    cout << "Unique elements: " << k1 << ", nums = [";
    for (int i = 0; i < k1; i++) {
        cout << nums1[i] << (i == k1 - 1 ? "]\n" : ", ");
    }

    // Example 2:
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k2 = sol.removeDuplicates(nums2);
    cout << "Unique elements: " << k2 << ", nums = [";
    for (int i = 0; i < k2; i++) {
        cout << nums2[i] << (i == k2 - 1 ? "]\n" : ", ");
    }

    return 0;
}
```
/*
### Detailed Explanation:

1. **Problem Understanding**:
   - Given a sorted array `nums`, we are to remove duplicates in-place so that each unique element appears only once.
   - We are to return `k`, which is the number of unique elements, and modify the array such that the first `k` elements contain these unique elements.
   - The remaining elements of the array are not important, so we don't need to care about their values after the first `k` elements.

2. **Approach**:
   - Since the array is sorted, all duplicates will be next to each other.
   - We use two pointers:
     - Pointer `l` keeps track of the next position where a unique element should be placed.
     - Pointer `r` traverses the array to identify unique elements.
   - For every element `nums[r]`, if it is different from the previous element `nums[r-1]`, it means `nums[r]` is unique, and we place it at position `l`.
   - At the end of the traversal, `l` will represent the number of unique elements.

3. **Step-by-step Dry Run**:

   **Example 1:**
   - Input: `nums = [1, 1, 2]`
   - **Initial State**:
     - `l = 1`, `nums = [1, 1, 2]`
   - **Iteration 1 (r = 1)**:
     - `nums[1] == nums[0]` (both are 1), so skip this iteration.
   - **Iteration 2 (r = 2)**:
     - `nums[2] != nums[1]` (2 != 1), so:
       - Place `nums[2]` at `nums[l]` (i.e., `nums[1] = 2`).
       - Increment `l` to 2.
   - **Final Array**: `nums = [1, 2, _]` and `k = 2`.

   **Example 2:**
   - Input: `nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]`
   - **Initial State**:
     - `l = 1`, `nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]`
   - **Iteration 1 (r = 1)**:
     - `nums[1] == nums[0]` (both are 0), so skip this iteration.
   - **Iteration 2 (r = 2)**:
     - `nums[2] != nums[1]` (1 != 0), so:
       - Place `nums[2]` at `nums[l]` (i.e., `nums[1] = 1`).
       - Increment `l` to 2.
   - **Iteration 3 (r = 3)** and **Iteration 4 (r = 4)**:
     - `nums[3] == nums[2]` and `nums[4] == nums[3]`, so skip both.
   - **Iteration 5 (r = 5)**:
     - `nums[5] != nums[4]` (2 != 1), so:
       - Place `nums[5]` at `nums[l]` (i.e., `nums[2] = 2`).
       - Increment `l` to 3.
   - **Final Iterations**:
     - Continue for elements 3 and 4, placing unique values at positions `l`.
   - **Final Array**: `nums = [0, 1, 2, 3, 4, _, _, _, _, _]` and `k = 5`.

4. **Time Complexity**:
   - The algorithm runs in `O(n)` where `n` is the size of the array `nums`, as we only need to traverse the array once.

5. **Space Complexity**:
   - The algorithm uses `O(1)` extra space as we are modifying the array in place.
*/
