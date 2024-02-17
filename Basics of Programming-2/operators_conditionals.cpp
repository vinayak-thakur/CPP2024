

// continuos incrementing pyramid 


// #include<iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout<< "enter the number of rows :" ;
//     cin>> n ;
//     for (int row = 0; row<n;row++){
//         int start = row + 1 ;
//         for (int col = 0; col< row+1 ; col++){
//             cout<<start ;
//             start = start + 1 ;
//         }
//     cout<< endl ;
//     }
// }

//numeric full pyramid 
// #include<iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout<< "enter the number of rows :" ;
//     cin>> n ;
//     for (int row = 0; row<n;row++){
//         //  spaced half pyramid
//         for(int col = 0 ; col<n-row; col++){
//             cout<<" " ;
//         }
        
    
    
//         int start = row +1 ;
//         for (int col = 0 ; col<row+1 ;col++){
//             cout<<start ;
//             start= start + 1 ;
//         }
        
    
 
//         int value= 2*row ;
//         for (int col = 0 ; col <row ;col++){
//             cout<<value ;
//             value = value-1 ;
//         }
//         cout<<endl ;
//     }
// }

// numeric hollow pyramid

// #include<iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout<< "enter the number of rows :" ;
//     cin>> n ;
//     for (int row = 0; row<n;row++){
//         // spaced pyramid
//         for (int col=0;col<n-row-1;col++){
//             cout<<" " ;
//         }
//         int start = 1;
//         // numeric hollow pyramid 
//         for (int col = 0; col<2*row+1;col++){
//             //if  first character of the row  
            
//             if(row==0 || row==n-1){
//                 // even places of index
//                 if(col%2==0){
//                     cout<<start ;
//                     start=start+1 ;
//                 }
//                 // odd places of index
//                 else { 
//                     cout<<" " ;
//                 }
//             }
//             else {
//                 // building everything except 1st and last row 
//                 // first character 
//                 if(col==0){
//                     cout<<"1" ;
//                 }

//                 // last character
//                 else if (col==2*row){
//                     cout<<row+1  ;
//                 }
//                 else {
//                     cout<<" ";
//                 }
//             }
            

//         }
//         cout<<endl ;
//     }
// }

// BITWISE OPERATORS
//  #include<iostream>
// using namespace std ;
// int main () {
//     bool a = true ;
//     bool b = true ;
//     cout<< (5&10) ; 
     
// }

// left and right shift operator

//  #include<iostream>
// using namespace std ;
// int main () {
//     int a = 12 ;
//     a = a<< 1    ;

    
//     cout<<a ; 
     
// }

// pre increment // post increment operator

// #include<iostream>
// using namespace std ;
// int main () {
//    int a = 6 ; 
//   int  c= ++a + 1 ;
//   cout<<c<<endl ;
//   int b = 5 ;
//   cout<< (++b)*(++b) ; // should give 42 but gives 49 dues to operator precedence
// }

// Break and Continue in c++
#include <iostream>
using namespace std ;
int main () {
    int n = 5 ;
    for (int i = 0 ; i<n;i++ ) {
        cout<<"love\n" ;
        break;
    }
}

// variable scoping  