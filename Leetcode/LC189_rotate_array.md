```cpp
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    // Step 1: Create a duplicate array of the same size to store the rotated values
    vector<int> duplicate(nums.size());
    
    // Step 2: Loop through each element in the original array
    for (int i = 0; i < nums.size(); i++) {
        // Step 3: Calculate the new index where the element should go after rotation
        // We use (i + k) % nums.size() to ensure the index wraps around correctly
        duplicate[(i + k) % nums.size()] = nums[i];
    }
    
    // Step 4: Assign the rotated values back to the original array
    nums = duplicate;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    rotate(nums1, k1);
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl; // Expected Output: 5 6 7 1 2 3 4

    vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    rotate(nums2, k2);
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl; // Expected Output: 3 99 -1 -100

    return 0;
}
```
/*
### Detailed Explanation:

1. **Problem Understanding**:
   - We are given an array `nums` and a number `k`, representing the number of steps to rotate the array to the right.
   - A right rotation by `k` steps means that every element of the array will be shifted `k` positions to the right, and the elements at the end of the array wrap around to the beginning.

2. **Approach**:
   - We create a **duplicate array** of the same size as `nums` to store the rotated values.
   - For each element at index `i` in `nums`, we calculate its new position in the rotated array as `(i + k) % nums.size()`.
   - This formula ensures that the new index is within the bounds of the array. When `i + k` exceeds the size of the array, the modulo operation makes the index wrap around to the beginning.
   - After computing the new positions, we copy the elements from the duplicate array back into the original array `nums`.

---

### Dry Run for Example 1:

**Input**: `nums = [1, 2, 3, 4, 5, 6, 7]`, `k = 3`

1. **Initialization**:
   - `duplicate = [_, _, _, _, _, _, _]` (array of the same size as `nums`)
   - The length of `nums` is 7.

2. **Step-by-Step Rotation**:
   - For `i = 0`, `nums[0] = 1`, new index is `(0 + 3) % 7 = 3`. So, `duplicate[3] = 1`.
   - For `i = 1`, `nums[1] = 2`, new index is `(1 + 3) % 7 = 4`. So, `duplicate[4] = 2`.
   - For `i = 2`, `nums[2] = 3`, new index is `(2 + 3) % 7 = 5`. So, `duplicate[5] = 3`.
   - For `i = 3`, `nums[3] = 4`, new index is `(3 + 3) % 7 = 6`. So, `duplicate[6] = 4`.
   - For `i = 4`, `nums[4] = 5`, new index is `(4 + 3) % 7 = 0`. So, `duplicate[0] = 5`.
   - For `i = 5`, `nums[5] = 6`, new index is `(5 + 3) % 7 = 1`. So, `duplicate[1] = 6`.
   - For `i = 6`, `nums[6] = 7`, new index is `(6 + 3) % 7 = 2`. So, `duplicate[2] = 7`.

   The `duplicate` array after the loop becomes: `[5, 6, 7, 1, 2, 3, 4]`.

3. **Final Step**:
   - Copy the values from `duplicate` back into `nums`.
   - `nums = [5, 6, 7, 1, 2, 3, 4]`.

**Output**: `[5, 6, 7, 1, 2, 3, 4]`.

---

### Dry Run for Example 2:

**Input**: `nums = [-1, -100, 3, 99]`, `k = 2`

1. **Initialization**:
   - `duplicate = [_, _, _, _]` (array of the same size as `nums`)
   - The length of `nums` is 4.

2. **Step-by-Step Rotation**:
   - For `i = 0`, `nums[0] = -1`, new index is `(0 + 2) % 4 = 2`. So, `duplicate[2] = -1`.
   - For `i = 1`, `nums[1] = -100`, new index is `(1 + 2) % 4 = 3`. So, `duplicate[3] = -100`.
   - For `i = 2`, `nums[2] = 3`, new index is `(2 + 2) % 4 = 0`. So, `duplicate[0] = 3`.
   - For `i = 3`, `nums[3] = 99`, new index is `(3 + 2) % 4 = 1`. So, `duplicate[1] = 99`.

   The `duplicate` array after the loop becomes: `[3, 99, -1, -100]`.

3. **Final Step**:
   - Copy the values from `duplicate` back into `nums`.
   - `nums = [3, 99, -1, -100]`.

**Output**: `[3, 99, -1, -100]`.

---

### Time Complexity:
- **O(n)**, where `n` is the size of the input array. We go through the array twice: once to compute the rotated positions and once to copy the result back into `nums`.

### Space Complexity:
- **O(n)**, since we use a duplicate array of size `n` to store the rotated values.

### Optimizations:
- Although this method is straightforward, it uses extra space for the duplicate array. Another way to rotate the array in place would involve reversing parts of the array, but this solution is easy to understand and efficient enough for most cases.
*/
