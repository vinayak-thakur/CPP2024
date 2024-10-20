/*
# Problem Explanation

We are given an array `nums` that may have been sorted in non-decreasing order and then rotated. Our task is to determine if the array is valid under this condition. 

### What is a rotated array?
A rotated array means that the array was originally sorted in non-decreasing order, and then a number of elements from the front were moved to the back. For example, the array [1, 2, 3, 4, 5] rotated by 2 positions becomes [3, 4, 5, 1, 2].

### Key Details:
1. A sorted array that is rotated can have at most **one drop** in the array (a place where a larger element comes before a smaller element, like 5 before 1 in the above example).
2. If there is more than one drop in the array, it cannot be a valid rotated version of a sorted array.
3. Special Case: If all elements are the same, the array is always considered valid, because rotating it does not change its appearance.

Our goal is to check if the given array `nums` is a valid rotated version of a sorted array, considering these rules.

---

# Code Implementation
```cpp
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    // Step 1: Store all unique elements in a set
    unordered_set<int> uniqueElements(nums.begin(), nums.end());

    // Special case: If all elements are the same, the array is valid
    if (uniqueElements.size() == 1) {
        return true;
    }

    int n = nums.size();
    int count = 0;  // This will store the number of drops in the array

    // Step 2: Traverse the array to count drops
    for (int i = 1; i < n; i++) {
        if (nums[i-1] > nums[i]) {
            count++;
        }
    }

    // Step 3: Check the wraparound condition (last element compared to the first)
    if (nums[n-1] > nums[0]) {
        count++;
    }

    // Step 4: Return true if we have at most one drop
    return count <= 1;
}
```
---

# Dry Run

### Input: [1, 1, 1, 1]
1. **Step 1: Insert elements into a set**  
   - `uniqueElements = {1}`
   - The set has only one unique element, which means all elements are the same.
   - Thus, the condition `if (uniqueElements.size() == 1)` is `true`, and we return `true`.

2. **Step 2-4**: Since all elements are the same, no need for further processing. The function directly returns `true`.

### Input: [3, 4, 5, 1, 2]
1. **Step 1: Insert elements into a set**  
   - `uniqueElements = {1, 2, 3, 4, 5}`  
   - The set has more than one unique element, so we proceed further.
   
2. **Step 2: Traverse the array and count drops**  
   - Compare nums[0] = 3 and nums[1] = 4 -> No drop, count = 0
   - Compare nums[1] = 4 and nums[2] = 5 -> No drop, count = 0
   - Compare nums[2] = 5 and nums[3] = 1 -> Drop detected (5 > 1), count = 1
   - Compare nums[3] = 1 and nums[4] = 2 -> No drop, count = 1
   
3. **Step 3: Check the wraparound condition**  
   - Compare nums[4] = 2 and nums[0] = 3 -> No wraparound drop, count = 1
   
4. **Step 4: Final decision**  
   - Since there is exactly 1 drop, the array is a valid rotation. Return `true`.

### Input: [2, 1, 3, 4]
1. **Step 1: Insert elements into a set**  
   - `uniqueElements = {1, 2, 3, 4}`  
   - The set has more than one unique element, so we proceed further.
   
2. **Step 2: Traverse the array and count drops**  
   - Compare nums[0] = 2 and nums[1] = 1 -> Drop detected (2 > 1), count = 1
   - Compare nums[1] = 1 and nums[2] = 3 -> No drop, count = 1
   - Compare nums[2] = 3 and nums[3] = 4 -> No drop, count = 1
   
3. **Step 3: Check the wraparound condition**  
   - Compare nums[3] = 4 and nums[0] = 2 -> Wraparound drop detected (4 > 2), count = 2
   
4. **Step 4: Final decision**  
   - Since there are 2 drops, this array cannot be a valid rotation. Return `false`.

---

# Time and Space Complexity

- **Time Complexity:**  
  - The time complexity is O(n), where `n` is the size of the input array `nums`. This is because we are making a single pass through the array to count the number of drops and using a set to store unique elements (which also takes O(n) time).
  
- **Space Complexity:**  
  - The space complexity is O(n), since we are storing all unique elements in a set. The maximum space used by the set will be the size of the array.
*/
