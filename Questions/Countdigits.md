```cpp
#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    // If n is 0, the number has 1 digit (0 itself)
    if (n == 0) return 1;

    // Initialize the digit counter to 0
    int count = 0;

    // Loop to count digits
    while (n != 0) {
        count++;  // Increment count for each digit
        n = n / 10;  // Remove the last digit by dividing by 10
    }

    // Return the total digit count
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The number of digits is: " << countDigits(n) << endl;
    return 0;
}
```
/*
Explanation:

1. **Base Condition**:
   - The function starts by checking if the input number `n` is 0. If `n == 0`, it directly returns 1 because the number 0 consists of just one digit.

2. **Initialize Counter**:
   - A variable `count` is initialized to 0. This will be used to count the digits as we progress.

3. **Looping through Digits**:
   - The `while` loop checks whether the number `n` is non-zero. For each iteration, the loop does two things:
     - It increments the `count`, indicating that there is one more digit.
     - It removes the last digit of the number by performing integer division by 10 (`n = n / 10`). For example, if `n` is 123, it becomes 12 in the next iteration, then 1, and finally 0.
   
4. **Returning the Result**:
   - Once the number becomes 0, the loop exits, and the total count of digits is returned.

5. /* Dry Run for Input 23453:

1. Initialization:
    - n = 23453
    - count = 0

2. First Iteration:
    - n = 23453 / 10 = 2345 (remove the last digit)
    - count = 0 + 1 = 1

3. Second Iteration:
    - n = 2345 / 10 = 234
    - count = 1 + 1 = 2

4. Third Iteration:
    - n = 234 / 10 = 23
    - count = 2 + 1 = 3

5. Fourth Iteration:
    - n = 23 / 10 = 2
    - count = 3 + 1 = 4

6. Fifth Iteration:
    - n = 2 / 10 = 0 (loop stops as n becomes 0)
    - count = 4 + 1 = 5

Final Output:
    Number of digits in 23453: 5
*/

*/
