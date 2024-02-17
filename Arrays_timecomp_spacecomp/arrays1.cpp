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
//     int key ;
//         cout<<"enter the key" ;
//         cin>>key ;
//     // checkling each item of array if it equals the search element
//     for (int i = 0 ; i<n;i++){
//         if(arr[i]==key){
//             cout<<"key found\n"<<i ;
//         }
        
//     }
    
// }

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
int main() {
    int n ;
    cout<<"enter the number of elements " ;
    cin>>n ;
    int arr[100] ;

    cout<<"enter the values in array"<<endl; // TAKING THE INPUT IN ARRAY FROM USER 
    for(int i = 0; i<n;i++){
        cin>>arr[i] ;
    }
     for(int i = 0; i<n;i++){    // PRINTING THE CONTENTS OF THE ARRAY 
        cout<<arr[i]<<" " ;
    }
    int max =arr[0] ;
    for(int i= 0 ; i<n;i++){
    if(arr[i]>max){
        max=arr[i] ;
    }

    }
    cout<<endl;
    cout<<max<<" " ;
}