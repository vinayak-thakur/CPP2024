#include <iostream>
using namespace std;
int main()
{

    // example 1 : for understanding for loop
    // for (int i = 0; i < 5; i = i + 1)
    // {
    //     cout << i << endl;
    // } // output will be first 0,1,2,3,4,5

    // example 2 :  print a table of 2
    // for (int i=1;i<=10;i=i+1){
    //     cout<<2*i<<endl ;
    // }

    // example 3 : miscellaneous
    // for(int i=1;i<10;i=i*2){
    //     cout<<i<<endl ;
    // }// output will be 1,2,4,8

    // example :4 misc
    // for(int i=100;i>0;i=i/2){
    //     cout<<i<<endl ;
    // }

    // example : 5 misc
    // for(int i=5;(i>=0 && i<=10);i=i+1){
    //     cout<<i<<endl ;
    // }// output 5,6,7,8,9,10

    // example 6 : using for loop without conditions
//     int i = 0;
//     for (;;)
//     {

//         if (i < 5)
//         {
//             cout << i << endl;
//             i = i + 1;
//         }
//     }
// }


// LOOPS1
// print the pattern:
// * * * * *
// * * * * *
// * * * * *
// for(int row=0;row<3;row=row+1){
//     for(int col=0;col<5;col++) {
//         cout << '*'<<' '  ;
//     }
//     cout<<endl ;
// }

// LOOPS2
// print the pattern:
// * * * * 
// * * * *
// * * * *
// * * * *
// int n ;
// cout<<"enter n :" ;
// cin>>n ;
// for(int row=0;row<n;row++){
//     for(int col=0;col<n;col++){
//         cout << '*'<<' '  ;
//     }
//     cout<<endl ;
// }


// hollow rectangle
//*****
//*   *
//*****
// for (int row=0;row<3;row++){
//     if(row==0 || row ==2){
//         for(int col=0;col<5;col++){
//             cout<<'* ' ;
//         }
//     }
//     else {
//         cout<<'* ';
//         for(int i =0;i<3;i++){
//             cout<<" " ;
//         }
//         cout<<'*';
//     }
//     cout<< endl ;
// }

// half pyramid 
// int n ;
// cout<<"enter n " ;
// cin>>n ;
// for(int row=0;row<n;row++){
//     for (int col=0;col<row+1;col++){
//         cout<<'*' <<" ";
//     }
// cout<<endl ;
// }

// inverted half pyramid 
// int n ;
// cout<<"enter n " ;
//  cin>>n ;
//  for (int row=0;row<n;row++)
//  {
//     for(int col=0;col<n-row;col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl ;
//  }


// numerica half pyramid
// int n ;
// cout<<"enter n ";
// cin>>n ;
// for(int row=0;row<n;row++) {
//     for(int col=1;col<=row+1;col++){
//         cout<<col ;
//     }
//     cout<<endl ;
// }

// inverted numeric half keyboard
int n ;
cout<<"enter n ";
cin>>n ;
for(int row=0;row<n;row++) {
    for(int col=1;col<=n-row;col++){
        cout<<col ;
    }
    cout<<endl ;
}













}