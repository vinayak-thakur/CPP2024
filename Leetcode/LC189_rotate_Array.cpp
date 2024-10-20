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