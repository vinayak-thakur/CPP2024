#include<iostream>
using namespace std ;
// int add(int x , int y){
//     cout<<"a and b : "<<endl ;
//     cin>>x ;
//     cin>>y;
//     //int result = a+b ;
//     return x+y ;
// }
// int main () {

// int a , b;

// // write a fx to add two integers 
// int sum = add(a,b) ;
// cout<<sum<<endl;

// }




//  write a fx to find max of three numbers 
// int max(int a , int b, int c){
//     cout<<"enter the values of a , b , c :" ;
//     cin>>a>>b>>c ;
//     if(a>b && a>c){
//         return a ;
//     }
//     else if(b>a && b>c){
//        return b ;
//     }
//     else{
//         return c;
//     }

// }

// int main() {
// int x , y,c ;
// int value= max(x,y,c) ;
// cout<<"the value is " <<value ;

// }
//

// fx to return grade of the entered marks 
char grade(int marks ){
    // cout<<"enter the marks : " ;
    // cin>>marks ;
    switch(marks/10) {
        case 10: 
                return 'A' ;
        case 9 : return 'A' ;
        case 8 : return 'B' ;
        case 7: return 'C' ;
        case 6 : return 'D' ;
        case 5 : return 'E' ;
        default : return 'F' ;
    }
}
int main() {
    int marks ;
    // char gradescored = grade(marks) ;
    // cout<<"the grade given is " <<gradescored ;


    // to check the grade of all marks in between 0 to 100
    for (int i = 0 ; i<=100;i++){
        char gradescored = grade(i) ;
        cout<<"the grade scored for mark "<<i << "is:" <<gradescored<<endl ;
    }
}


