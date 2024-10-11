#include<bits/stdc++.h>
using namespace std;
int main() 
{
//     double num = 5;
//     double *ptr = &(num);
    // cout<<ptr<<endl; // prints the address present in ptr
    // cout<<*(ptr)<<endl;   // prints the value present at the address stores by ptr
    // cout<<sizeof(ptr)<<endl;
    int car = 6;
    int *p= &car;
    cout<<*p<<endl;
    cout<<car<<endl;
    (*p)++;
    cout<<*p<<endl;
    cout<<car<<endl;
return 0 ;
}