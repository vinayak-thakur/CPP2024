#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is an Armstrong number
bool armstrong(int n) {
    // Preserve the original number for comparison
    int original = n;
    int compiled_ans = 0;
    int num_digits = to_string(n).length(); // Get the number of digits in n

    // Extract digits and calculate the sum of powers
    while (n > 0) {
        int digit = n % 10; // Get the last digit
        compiled_ans += pow(digit, num_digits); // Add the digit raised to the power of num_digits
        n = n / 10; // Remove the last digit
    }

    // Compare the result with the original number
    return (compiled_ans == original);
}

int main() {
    int n = 153;  // Example Armstrong number
    armstrong(n) ? cout << "True" : cout << "False";  // Output should be True for 153
    return 0;
}


### Detailed Explanation:

1. **Function `armstrong(int n)`**:
    - The function checks whether the given number `n` is an Armstrong number (also called a narcissistic number).
    - An Armstrong number of 'd' digits is a number such that the sum of each of its digits raised to the power of 'd' is equal to the number itself.
    - Example: 153 is an Armstrong number because:
      - \(1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153\).

2. **Preserving Original Number**:
    - `int original = n;`:
      - We store the original number `n` in the variable `original` because after processing, the number `n` will be changed (reduced to 0), and we need to compare the computed result with the original value at the end.

3. **Number of Digits**:
    - `int num_digits = to_string(n).length();`:
      - Convert the number `n` to a string using `to_string(n)` and then get the length of the string, which represents the number of digits in the number.
      - This is important because each digit will be raised to the power of `num_digits` in the Armstrong number calculation.

4. **Extracting and Processing Digits**:
    - The `while (n > 0)` loop runs as long as there are digits left in `n`.
    
    - **Extracting the Last Digit**:
      - `int digit = n % 10;`:
        - This operation extracts the last digit of the number `n`. For example, if `n = 153`, the last digit extracted will be `3`.
    
    - **Summing the Powers of Digits**:
      - `compiled_ans += pow(digit, num_digits);`:
        - The `pow(digit, num_digits)` computes the digit raised to the power of `num_digits`. For example, if `digit = 3` and `num_digits = 3`, then `3^3 = 27`.
        - This value is added to the cumulative `compiled_ans` which will hold the sum of all such digit powers.

    - **Removing the Last Digit**:
      - `n = n / 10;`:
        - This removes the last digit of the number by performing integer division by 10. For example, if `n = 153`, after this operation `n = 15`.

5. **Comparison**:
    - After all digits are processed, the function compares `compiled_ans` with the original number `n`.
    - `return (compiled_ans == original);`:
      - If the sum of powers `compiled_ans` equals the original number, it returns `true`, indicating the number is an Armstrong number. Otherwise, it returns `false`.

6. **Main Function**:
    - `n = 153;`:
      - The number `153` is provided as an example input. Since 153 is a known Armstrong number, the expected output is `True`.
    - The ternary operator prints "True" if `armstrong(n)` returns `true`, otherwise, it prints "False".

---

### Dry Run for Input `n = 153`:

1. **Initialization**:
    - Input: `n = 153`
    - `original = 153`
    - `compiled_ans = 0`
    - `num_digits = 3` (since 153 has 3 digits)

2. **First Iteration**:
    - `digit = 153 % 10 = 3`
    - `compiled_ans = 0 + pow(3, 3) = 0 + 27 = 27`
    - `n = 153 / 10 = 15`

3. **Second Iteration**:
    - `digit = 15 % 10 = 5`
    - `compiled_ans = 27 + pow(5, 3) = 27 + 125 = 152`
    - `n = 15 / 10 = 1`

4. **Third Iteration**:
    - `digit = 1 % 10 = 1`
    - `compiled_ans = 152 + pow(1, 3) = 152 + 1 = 153`
    - `n = 1 / 10 = 0`

5. **Comparison**:
    - After the loop, `compiled_ans = 153`.
    - Since `compiled_ans == original`, the function returns `true`.

6. **Output**:
    - The main function prints "True", indicating that 153 is an Armstrong number.

---

### Time Complexity:
- The time complexity of the `armstrong` function is `O(d)`, where `d` is the number of digits in the number `n`. This is because each digit is processed once, and the `pow` function (which takes constant time for small numbers) is called for each digit.
  
### Space Complexity:
- The space complexity is `O(1)` because only a fixed amount of space is used (for variables like `original`, `compiled_ans`, and `num_digits`), regardless of the size of `n`.
