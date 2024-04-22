#include<iostream>
using namespace std ;
// int main() {
// int arr[] = { 5,6,7,8,9} ;
// cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2];
// return 0 ;
// }

// int main() {
//     int n ;
//     cout<<"enter the number of elements " ;
//     cin>>n ;
//     int arr[100] ;

//     cout<<"enter the values in array"<<endl; // TAKING THE INPUT IN ARRAY FROM USER 
//     for(int i = 0; i<n;i++){
//         cin>>arr[i] ;
//     }
//      for(int i = 0; i<n;i++){    // PRINTING THE CONTENTS OF THE ARRAY 
//         cout<<arr[i] ;
//     }
// }
//printing the double of the value in the array
// int main() {
//     int n ;
//     cout<<"enter the number of elements " ;
//     cin>>n ;
//     int arr[100] ;

//     cout<<"enter the values in array"<<endl; // TAKING THE INPUT IN ARRAY FROM USER 
//     for(int i = 0; i<n;i++){
//         cin>>arr[i] ;
//     }
//      for(int i = 0; i<n;i++){    // PRINTING THE CONTENTS OF THE ARRAY 
//         cout<<2*arr[i]<<" " ;
//     }
    
// }
// int main() {
//       int n ;
//     cout<<"enter the number of elements " ;
//     cin>>n ;
//     int arr[100] ;

//     cout<<"enter the values in array"<<endl; // TAKING THE INPUT IN ARRAY FROM USER 
//     for(int i = 0; i<n;i++){
//         cin>>arr[i] ;
//     }
//     for(int i = 0; i<n;i++){ // assigning every element in the array to 1 
//        arr[i]=1 ;
//     }
//      for(int i = 0; i<n;i++){    // PRINTING THE CONTENTS OF THE ARRAY 
//         cout<<arr[i] ;
//     }
// }
// checking pass by value and pass by reference 
// if it does change in the actual array which is passed , it is pass by reference otherwise pass by value 

// void printarray(int arr[] , int size){
//     for (int i=0;i<size;i++){
//         cout<<arr[i]<<" " ;
//     }
//     cout<<endl ;

// }
// void inc(int brr[],int size){
//     brr[0] = brr[0] +10 ;
//     printarray(brr, size) ;

// }

// int main() {
//     int size = 5 ;   
//     int arr[] = {4,5,7,8,9} ;
//     inc(arr,size);
//     printarray(arr,size);
// return 0 ;
// }
// *****************   //
// another example to check pass by reference in the array 
// void printarray(int array[],int size){
//     for (int i = 0 ; i<size;i++){
//     cout<<array[i]<<" " ;
//     }
//     cout<<endl ;
// }
// void change(int array[] ,int size){
//     for (int i = 0 ; i<size;i++){
//         array[i] = 1 ;
//     }
//     printarray(array,size) ;
// }
// int main(){
//     int arr1[] = {3,5,6} ;
//     int size = 3 ;
//     printarray(arr1,size) ;
//     change(arr1,size) ;
//     printarray(arr1,size) ;

// }
// ***************//
//Linear Search in Array 

// #include <iostream>
// using namespace std;
// void checkkey(int array[], int size,int key){
//     bool flag = 0;
//     for (int i = 0 ; i <size; i++){
//         if (array[i]==key){
           
//              flag= 1;
//         }
        
//     }
//      if(flag==1){
//       cout<<"Present";
      
//   }
//   else{
//       cout<<"absent";
//   }
    
// }
  
// int main() {
//   using namespace std;
//   int size=5;
//   int key;
 
//   int array[] = {2,6,8,12,3} ;
//   cout<<"enter the key to search" ;
//   cin>>key;
//   checkkey(array,size,key);
 
   
//   return 0 ;
//   }
// alternate code to search in an array
// bool chekk(int arr[],int size,int key){
//     for (int i = 0 ;i<size; i++){
//         if(arr[i]==key){
//             return true;
//             break;
//         }
//     }
//     return false;
// }
//   int main (){
//     int key ;
//     int size= 5 ;
//     int arr[] = { 12, 14, 19,23,29} ;
//     cout<<"enter the key ";
//     cin>>key;
//     if(chekk(arr,size,key)){
//         cout<<"Present" ;
//     }
//     else {
//         cout<<"Absent";
//     }

//   }
 
// COUNT ZERO AND ONES IN A ARRAY 
// int main() {
//     int n ;
//     cout<<"enter the number of elements " ;
//     cin>>n ;
//     int arr[100] ;

//     cout<<"enter the values in array"<<endl; // TAKING THE INPUT IN ARRAY FROM USER 
//     for(int i = 0; i<n;i++){
//         cin>>arr[i] ;
//     }
//      for(int i = 0; i<n;i++){    // PRINTING THE CONTENTS OF THE ARRAY 
//         cout<<arr[i]<<" " ;
//     }
//     cout<<endl ;
//     int zero = 0 ;
//     int one = 0 ; 
//     for (int i = 0 ;i <n;i++){
//         if (arr[i]==0){
//             zero= zero+1 ;
//         }
//         else if(arr[i]==1){
//             one= one+1 ;
//         }
//     }
//     cout<<"number of zeros is "<<zero<<endl ;
//     cout<<"number of ones is "<<one<<endl ;

// }

// *************************// 
// max number in an array //
// #include <iostream>
// #include<climits>
// using namespace std;
// int main() {
//     int n ;
//     cout<<"enter the number of elements " ;
//     cin>>n ;
//     int arr[100] ;

//     cout<<"enter the values in array"<<endl; // TAKING THE INPUT IN ARRAY FROM USER 
//     for(int i = 0; i<n;i++){
//         cin>>arr[i] ;
//     }
//      for(int i = 0; i<n;i++){    // PRINTING THE CONTENTS OF THE ARRAY 
//         cout<<arr[i]<<" " ;
//     }
//     int max = INT_MIN ;
//     for(int i= 0 ; i<n;i++){
//     if(arr[i]>max){
//         max=arr[i] ;
//     }

//     }
//     cout<<endl;
//     cout<<max<<" " ;
    
// }
// MIN NUMBER IN A ARRAY using i _max and in_min
// #include <iostream>
// #include<climits>
// using namespace std;
// int main() {
//     int n ;
//     cout<<"enter the number of elements " ;
//     cin>>n ;
//     int arr[100] ;

//     cout<<"enter the values in array"<<endl; // TAKING THE INPUT IN ARRAY FROM USER 
//     for(int i = 0; i<n;i++){
//         cin>>arr[i] ;
//     }
//      for(int i = 0; i<n;i++){    // PRINTING THE CONTENTS OF THE ARRAY 
//         cout<<arr[i]<<" " ;
//     }
//     int min = INT_MAX ;
//     for(int i= 0 ; i<n;i++){
//     if(arr[i] < min){
//         min=arr[i] ;
//     }

//     }
//     cout<<endl;
//     cout<<min<<" " ;
    
// }
// PRINT EXTREMES OF AN ARRAY 
// int main() {
//     int arr[] = {23,45,11,17,19,27} ;
//     int size = 6;
//     int start = 0;
//     int end = size-1;
//     while(true){
//         if(start>end)
//         break;
//        else if(start==end){   // if this conditon is not inckuded than two times start or end will be printed 
//             cout<<arr[start]<<" ";

//         }
//         else{
//             cout<<arr[start]<<" ";
//             cout<<arr[end]<<"  ";

//         }
//         start++;
//         end--;
//     }
    
    
// }
/* print the extremes of an array just the loop condition has been changed 
int main() {
    int arr[] = {23,45,11,17,19,27} ;
    int size = 6;
    int start = 0;
    int end = size-1;
    while(start<=end) // if start is less than end than inly start the loop or dont start only
        
        if(start==end){   // if this conditon is not inckuded than two times start or end will be printed 
            cout<<arr[start]<<" ";

        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<"  ";

        }
        start++;
        end--;
    }
    
    
}
*/
// Reverse the following array
int main(){
    int arr[8]= {3,4,7,9,1,2,5,6};
    int size=8;
 int start=0;
 int end = size-1;
 while(start<=end){
    //step1;
    swap(arr[start],arr[end]);
    start++;
    end--;
 }
 //printing array
 for(int i =0;i<=size;i++)
 cout<<arr[i];
}