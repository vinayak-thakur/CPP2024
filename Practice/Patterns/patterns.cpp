// 1. simple square matrix 
// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n ;
//     cout<<"enter the number of rows: ";
//     cin>>n;
// for(int i =0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }
// return 0 ;
// }
 
 // 2. 
#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter n: ";
    cin>>n;
     for(int rows=0;rows<n;rows++){
        // or printing spaces
        for(int cols=0;cols<n-rows+1;cols++){
            cout<<" ";
        }
        // for stars
        for(int cols=0;cols<2*rows+1;cols++){
            cout<<"*";
        }
return 0 ;
}
}