```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // Step 1: Create a frequency map to store occurrences of each element
        unordered_map<int, int> freq;
        
        // Step 2: Traverse through the array and calculate the frequency of each element
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }

        // Step 3: Create a set to store the frequency values
        unordered_set<int> occurrences;
        
        // Step 4: Iterate through the frequency map and insert each frequency value into the set
        for (auto it : freq) {
            occurrences.insert(it.second);
        }

        // Step 5: If the size of the set is equal to the size of the frequency map,
        // it means all frequency values are unique, otherwise, some frequencies are repeated
        return occurrences.size() == freq.size();
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    
    // Calling the function and printing the result
    bool result = sol.uniqueOccurrences(arr);
    result ? cout << "true" : cout << "false";
    
    return 0;
}
```
/*
### Detailed Explanation:

1. **Problem Understanding**:
    - We are given an array of integers, and we need to determine if the number of occurrences of each value in the array is unique. In other words, no two values in the array should have the same frequency of occurrences.

2. **Approach**:
    - We use two data structures to solve this problem efficiently:
        - An unordered map (`freq`) to store the frequency (occurrences) of each integer in the array.
        - An unordered set (`occurrences`) to store the frequency values, ensuring that the occurrences are unique.
    
    - **Step 1**:
        - We create an unordered map `freq` where the key is the integer from the array and the value is the number of times it appears in the array.

    - **Step 2**:
        - We traverse the array, and for each integer, we increment its count in the `freq` map.
    
    - **Step 3**:
        - We create an unordered set `occurrences` to keep track of the frequency values. A set automatically handles uniqueness, meaning it will only allow unique values.

    - **Step 4**:
        - We iterate through the `freq` map and insert each frequency value into the `occurrences` set.

    - **Step 5**:
        - If the size of the set `occurrences` is equal to the size of the map `freq`, it means all frequencies are unique. If not, some frequencies are repeated, and we return `false`.

---

### Dry Run for Input `arr = [1, 2, 2, 1, 1, 3]`:

1. **Initialization**:
    - Input: `arr = [1, 2, 2, 1, 1, 3]`
    - `freq = {}` (empty map)
    - `occurrences = {}` (empty set)

2. **Step 1 & 2 (Building the Frequency Map)**:
    - Traverse through the array and populate `freq`:
        - `arr[0] = 1`: `freq[1] = 1`
        - `arr[1] = 2`: `freq[2] = 1`
        - `arr[2] = 2`: `freq[2] = 2` (increment the frequency of 2)
        - `arr[3] = 1`: `freq[1] = 2` (increment the frequency of 1)
        - `arr[4] = 1`: `freq[1] = 3` (increment the frequency of 1)
        - `arr[5] = 3`: `freq[3] = 1`
    
    - After processing, `freq = {1: 3, 2: 2, 3: 1}`.
    
3. **Step 3 & 4 (Building the Set of Occurrences)**:
    - Insert frequency values into the set:
        - `freq[1] = 3`: Insert 3 into `occurrences` → `occurrences = {3}`
        - `freq[2] = 2`: Insert 2 into `occurrences` → `occurrences = {2, 3}`
        - `freq[3] = 1`: Insert 1 into `occurrences` → `occurrences = {1, 2, 3}`
    
    - After processing, `occurrences = {1, 2, 3}`.

4. **Step 5 (Comparison)**:
    - The size of `freq` is 3 (since we have 3 unique values in the array: 1, 2, and 3).
    - The size of `occurrences` is also 3 (since all frequencies are unique).
    
    - Since the sizes match, the function returns `true`.

---

### Time Complexity:
- The time complexity is `O(n)` where `n` is the size of the input array `arr`. This is because:
    - Building the frequency map takes `O(n)` time as we need to traverse the entire array once.
    - Inserting frequency values into the set takes `O(k)` time, where `k` is the number of unique elements in the map. In the worst case, `k = n`, so the overall time complexity is `O(n)`.

### Space Complexity:
- The space complexity is `O(n)` because we are using additional space for the frequency map and the set, which in the worst case, could store up to `n` unique elements.
*/
