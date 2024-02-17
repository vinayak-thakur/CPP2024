// pyramid normal one
// #include<iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout<<"enter the number of rows  : " ;
//     cin >> n ;
//     for (int row = 0 ; row < n ; row++) {
//         for(int col = 0 ; col < n-row -1 ; col++){
//             cout<<" " ;
//         }
//         for ( int col = 0 ; col<row+1 ; col++){
//             cout<<"* " ;
//         }
//         cout<<endl ;
//     }
     

// }


// inverted full pyramid 

// #include<iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout<<"enter the number of rows  : " ;
//     cin >> n ;
//      for (int row =0 ; row <n ; row++){
//         for (int col = 0 ; col < row ;col++)
//         {
//             cout<<" " ;
//         }
//         for ( int col=0; col<n-row; col++){
//             cout<<"* " ;
//         }
//         cout<<endl ;
//      }



 
// }

// ulta right triangle 
// #include<iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout<<"enter the number of rows  : " ;
//     cin >> n ;
//      for (int row =0 ; row <n ; row++){
//         for (int col = 0 ; col < n ;col++)
//         {
//             cout<<" " ;
//         }
//         for ( int col=0; col<n-row; col++){
//             cout<<"* " ;
//         }
//         cout<<endl ;
//      }
// }


// solid diamond pattern
// #include<iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout<<"enter the number of rows  : " ;
//     cin >> n ;
//     for (int row = 0 ; row < n ; row++) {
//         for(int col = 0 ; col < n-row -1 ; col++){
//             cout<<" " ;
//         }
//         for ( int col = 0 ; col<row+1 ; col++){
//             cout<<"* " ;
//         }
//         cout<<endl ;
//     }
//     for (int row =0 ; row <n ; row++){
//         for (int col = 0 ; col < row ;col++)
//         {
//             cout<<" " ;
//         }
//         for ( int col=0; col<n-row; col++){
//             cout<<"* " ;
//         }
//         cout<<endl ;
//      }
// }

// hollow diamond

// #include <iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout<< "enter the value of n " ;
//     cin>> n ;
//     for (int row = 0 ; row <n ; row++){
//        //space before 
//         for (int col = 0 ; col< n-row-1;col++ ){
//             cout<< " " ;
//         }
//         for (int col = 0; col <2*row+1; col++)
//         {
//             // first character
//             if (col==0){
//                 cout<<"* " ;
//             }
//             //last character 
//             else if (col== 2*row)  {
//                 cout<<"* " ;

//             }
//             // middle 
//             else {
//                 cout<<" " ;
//             }
//         }
//         cout<< endl ;
        
//     }
//     for (int row = 0 ; row <n ; row++){
//        //space before 
//         for (int col = 0 ; col<row ;col++ ){
//             cout<< " " ;
//         }
//         for (int col = 0; col <2*n - 2*row -1; col++)
//         {
//             // first character
//             if (col==0){
//                 cout<<"* " ;
//             }
//             //last character 
//             else if (col== 2*n - 2*row -2)  {
//                 cout<<"* " ;

//             }
//             // middle 
//             else {
//                 cout<<" " ;
//             }
//         }
//         cout<< endl ;
        
//     }

// }


// flipped solid diamond 

// #include <iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout<< "enter the value of n " ;
//     cin>> n ;
//     for (int row=0;row<n;row++) {
//         // half pyramid
//         for(int col=0;col<n-row;col++) {
//             cout<<"*" ;
//         }
//         // spaced full pyramid
//         for (int col=0;col<2*row+1 ; col++){
//             cout<<" " ;
//         }
//         // half pyramid
//         for(int col=0; col<n-row;col++){
//             cout<<"*" ;
//         }
//         cout<<endl ;
//     }
//      for (int row=0;row<n;row++) {
//         // half pyramid
//         for(int col=0;col<row+1;col++) {
//             cout<<"*" ;
//         }
//         // spaced full pyramid
//         for (int col=0;col<2*n-2*row-1 ; col++){
//             cout<<" " ;
//         }
//         // half pyramid
//         for(int col=0; col<row+1;col++){
//             cout<<"*" ;
//         }
//         cout<<endl ;
//     }

// }

// fancy pattern 1 
 #include <iostream>
using namespace std ;
int main () {
    int n ;
    cout<< "enter the value of n " ;
    cin>> n ;
    for (int row=0; row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<row+1 ;
            if(col!=row){
                cout<<"*" ;
            }
        }
        cout<<endl ;
    }
    for (int row=0; row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<n-row ;
            if(col!=n-row-1){
                cout<<"*" ;
            }
        }
        cout<<endl ;
    }
}

///alphabet palindrome pyramid
 