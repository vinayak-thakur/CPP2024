// #include<iostream>
// using namespace std;
// int main() 
// {
//     char love[4];
//     cin>>love;
//     cout<<love;
//     int value= (int)love[4];
//     cout<<value;


// return 0 ;
// }



// limitations of cin 
// #include<iostream>
// using namespace std;
// #include<string.h>
// int main() 
// {
//     char array[10];
//    cin.getline(array,50);
//     cout<<array; //  cin takes input of character but it doesnt take input after spaces lets say i used "my name is vinayak" so the stored result is only "my" and the rest doesnt get stored
// // reading using getline 




// return 0 ;
// }


// length of character array 
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main() 
// { char array[50];
//  cin.getline(array,50);
//  int count= 0;
//  for(int i=0;array[i]!='\0';i++){
//     count=count+1;

//  }
//  cout<<count;
// return 0 ;
// }

// reverse a string
// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     char arr[10];
//     cout<<"enter the string";
//     cin>>arr;
//     int start= 0;
//     int n=strlen(arr);
//     int end  = n-1;
//     for (int i=start;i<=end;i++){   // while(i<=j)
//         swap(arr[i],arr[end]);
//         end--;
//     }
//     cout<<arr;
// return 0 ;
// }

// replace spaces with @

// #include <bits/stdc++.h>
// using namespace std;
// void removespaces(char array[]){
//     int i = 0;
//     int end = strlen(array)-1;
//     for ( i;i<=end;i++){
//         if(array[i]==' '){
//             array[i]='@';
//         }
//     }
//     cout<<array;
// }
// int main() 
// {
//     char array[100];
//     cin.getline(array,100);
//     removespaces(array);
    
// return 0 ;
// }

// palindrome 
// 1st way to do 
// #include <bits/stdc++.h>
// using namespace std;

// void reverse(char baby[80]) {
//     int start = 0;
//     int n = strlen(baby);
//     int end = n - 1;
//     for (int i = start; i <= end; i++) {
//         swap(baby[i], baby[end]);
//         end--;
//     }
// }

// int main() {
//     char arr[10];
//     cout << "Enter the string: ";
//     cin >> arr;

//     char reversed[10];
//     strcpy(reversed, arr);
//     reverse(reversed);

//     if (strcmp(arr, reversed) == 0) {
//         cout << arr << " is a palindrome." << endl;
//     } else {
//         cout << arr << " is not a palindrome." << endl;
//     }

//     return 0;
// }

// palindrome using pointers 
// #include <bits/stdc++.h>
// using namespace std;

// bool findout(char arr[]) {
//     int i = 0;
//     int n = strlen(arr);
//     int j = n - 1;

//     for (i; i <= j; i++) {  // while loop also can be used 
//         if (arr[i] != arr[j]) {
//             return false; // If characters don't match, it's not a palindrome
//         }
//         j--;
//     }

//     return true; // If the loop completes without returning false, it's a palindrome
// }

// int main() {
//     char arr[200];
//     cin.getline(arr, 200);

//     int ans = findout(arr);
//     if (ans) {
//         cout << "yes a palindrome";
//     } else {
//         cout << "not a palindrome";
//     }

//     return 0;
// }

// change to Uppercase
//  c++ 

// lowercase
// #include <bits/stdc++.h>
// using namespace std;

// void convert(char arr[90]) {
//     int n = strlen(arr) - 1;
//     for (int i = 0; i <= n; i++) {
//         arr[i] = arr[i] - 'A' + 'a'; // adding 32
//     }
// }

// int main() {
//     char arr[90];
//     cin >> arr;
//     convert(arr);
//     cout << arr;
//     return 0;
// }

 // find funcion
 #include<bits/stdc++.h>
 using namespace std;
 int main() 
 {
    string sentence= "Hello ji kaise ho";
    string target= "ho";
    cout<<sentence.find(target); 
 return 0 ;
 }

/* palindrome number(9) leetcode 
solution using strings :

class Solution {
public:
    bool isPalindrome(int x) {
        string number =  to_string (x);
        int n = number.size();
        int i=0;
        int j=n-1;
        if (x<0){
            return false;
        }
        for(i;i<=j;i++){
            if(number[i]!=number[j]){
                return false;
            }
            j--;
        }
        return true;

       
    }
};

solution without strings 
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // Negative numbers cannot be palindromes

        long original = x;
        long reversed = 0;

        while (x != 0) {
            long one_digit = x % 10;
            reversed = reversed * 10 + one_digit;
            x = x / 10;
        }

        return original == reversed;
    }
};

*/