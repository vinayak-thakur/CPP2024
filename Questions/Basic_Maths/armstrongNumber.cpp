#include <bits/stdc++.h>
using namespace std;

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
