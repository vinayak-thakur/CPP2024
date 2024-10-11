#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    // If n is 0, there is only one digit (0 itself)
    if(n == 0) return 1;

    // Initialize the count to 0
    int count = 0;

    // Loop until the number becomes 0
    while(n > 0) {
        count++;  // Increment the count for each digit
        n = n / 10;  // Remove the last digit
    }

    // Return the total count of digits
    return count;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Number of digits: " << countDigits(n);
    return 0;
}
