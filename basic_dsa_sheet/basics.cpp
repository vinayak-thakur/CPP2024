
// 1
// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"hello world";
// }
//

// 2
// #include<iostream>
// using namespace std;
// int main() {
//     int number;
//     cout<<"enter the integer:  " ;
//     cin>>number;
//     cout<<number;

// }

// 3
// #include<iostream>
// using namespace std;
// int main() {
//     int num1,num2;
//     cout<<"enter the two numbers";
//     cin>>num1>>num2;
//     cout<<"the sum is :"<<num1+num2;
//     return 0;

// }

// 4

// #include<iostream>
// using namespace std;
// int main() {
//     int x1,x2,rem,quo;

//     cout<<"enter the two integers : ";
//     cin>>x1>>x2;
//     rem = x1%x2;
//     quo= (x1-rem)/x2;
//     cout<<"the quotient and the remainder is :"<<quo<<","<<rem<<endl;
//     return 0;
// }

// 5
// #include<iostream>
// using namespace std;
// int main() {
//     cout<<sizeof(char);
// }

// 6
// #include <iostream> // Ensure proper inclusion of the iostream header
// using namespace std; // Use the standard namespace to avoid prefixing with std::

// int main()
// {
//     int x1, x2, temp;
    
//     cout << "Enter the first number: ";
//     cin >> x1;
    
//     cout << "Enter the second number: ";
//     cin >> x2;
    
//     // Swap the values
//     temp = x2;
//     x2 = x1;
//     x1 = temp;
    
//     // Output the swapped values
//     cout << "The first number is " << x1 << endl;
//     cout << "The second number is " << x2 << endl;

   
// }

//
// #include<iostream>
// int main(){
//     char character;

//     std:: cout<<"enter the character ";
// std:: cin>>character;
// std:: cout<<"the ascii value of the entered character is :"<<int(character);

// }


// 8
// #include<iostream>
// int main(){
//     float x1,x2;
//     std:: cout<<"enter the first number ";
//     std::cin>>x1;
//        std:: cout<<"enter the second number ";
//     std::cin>>x2;
//     std::cout<<"the result is : "<<x1*x2;

// }

// IF-ELSE
// 1
// #include<iostream>
// int main(){
//     int number ;
//     std:: cout<<"enter the first number";
//     std::cin>>number;
//     if(number%2==0){
//         std::cout<<"Even";
       
//     }
//     else{
//         std::cout<<"Odd";
//     }
// }

// 2
// #include<iostream>
// int main(){
//     char letter ;
//     std:: cout<<"enter the letter";
//     std::cin>>letter;
//     if(letter=='a' || letter== 'e' || letter=='i'|| letter=='o'|| letter=='u'){
//         std::cout<<"vowel";
       
//     }
//     else{
//         std::cout<<"consonant";
//     }
// }

// 3 
// #include<iostream>
// int main(){
//     int x1,x2,x3;
//     std:: cout<<"enter the first number,second number,third number ";
//     std::cin>>x1>>x2>>x3;
//     if(x1>x2 && x1>x3){
//         std:: cout<<"the number: "<<x1<<"is the biggest";

//     }
//     else if(x2>x1 && x2>x3){
//         std:: cout<<"the number :"<<x2<<"is the biggest " ;
//     }
//     else{
//         std:: cout<<"the number :"<<x3 <<"is the biggest";
//     }
// }

// 4
// #include<iostream>
// int main(){
//     int year;
//     std:: cout<<"enter the year : ";
//     std:: cin>>year;
//     if(year%4==0 && year%100 !=0){
//         std:: cout<<"leap year";

//     }
//     else if(year%100==0 && year%400==0){
//         std:: cout<<"leap year";

//     }
//     else{
//         std:: cout<<"not a leap year" ;
//     }
//     return 0;
// }

// loops 1
// #include<iostream>
// int main(){
//     int x1;
//     std:: cout<<"enter the number : " ;
//     std:: cin>>x1;
//     int sum=0;
//     for(int i=1;i<=x1;i++){
//         sum=sum+i;
//     }
// std:: cout<<"the sum is "<<sum;
// return 0;
// }

// 2
// #include<iostream>
// int factorial(int num){
//     if(num==0 || num==1){
//         return 1;

//     }
//     else{
//         return num*factorial(num-1);

//     }



// }
// int main(){
//     int x1;
//     std:: cout<<"enter the number ";
//     std::cin>>x1;
//     std::cout<<"the factorial is :"<<factorial(x1);
// }
    
    // 3
//     #include<iostream>
//     using namespace std;
// int main(){
//     int x1;
//      cout<<"enter the number";
//    cin>>x1;
//     for(int i=0;i<10;i++){
//          cout<<x1<<"*"<<i<<"="<<x1*i;
//         cout<<endl;
//     }
// }

// 4 fibonnaci upto nth term

//     #include<iostream>
//     using namespace std;
//     #include <vector>
//    void fibonacci(int n){
//     if(n<0){
//         cout<<"enter a positive number ";
//         return;
    
//     }
//     vector <int> fib(n); 
//     fib[0]=0;
//     fib[1]=1;
//     for(int i =2;i<n;i++){
//         fib[i]=fib[i-1]+fib[i-2];
//     } 
//     cout<<"the final result series is ";
//     for(int i=0;i<fib.size();i++){
//         cout<<fib[i]<<" ";
//     }  
//         }
    
// int main(){
//     int x1;
//     std::cout<<"enter the number";
//     std::cin>>x1;
//    fibonacci(x1);
//     return 0;}

// 5th 
// #include <iostream>
// #include <vector>
// using namespace std;

// void fibonacci(int n, int sum) {
//     if (n <= 0) {
//         cout << "Please enter a positive integer for the number of terms." << endl;
//         return;
//     }

//     vector<int> fib(n);
//     fib[0] = 0;
//     if (n > 1) {
//         fib[1] = 1;
//     }

//     for (int i = 2; i < n; ++i) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }

//     cout << "The final result series is: ";
//     for (int i = 0; i < n; ++i) {
//         if (fib[i] > sum) {
//             break;
//         }
//         else{
//         cout << fib[i] << " ";
//     }
    
// }}

// int main() {
//     int x1, sum;
//     cout << "Enter the number of terms: ";
//     cin >> x1;
//     cout << "Enter the sum limit: ";
//     cin >> sum;
//     fibonacci(x1, sum);
//     return 0;
// }

// 6 gcd or hcf
//     #include<iostream>
//     using namespace std;
//     #include <vector>
//     int gcd(int a, int b){
//         // // checking 0
//         // everything divides 0
//         if(a==0){
//             return b;
//         }
//         else if( b==0){
//             return a;
//         }
//         else if(a==b){
//             return b;
//         }
//         else if(a>b){
//             return gcd(a-b,b);

//         }
//         else{ 
//             return gcd(a,b-a);
//         }
//     }
//    int main(){
//     int a,b;
//     cout<<"enter the first and second number";
//     cin>>a>>b;
//     cout<<gcd(a,b);
// return 0;
//    }

// 7
// meow