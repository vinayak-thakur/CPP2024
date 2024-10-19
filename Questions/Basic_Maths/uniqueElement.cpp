#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]= {2,2,4,5,4,5,7};
    int size = 7;
    int ans=0;
    // finding the unique element by using the xor operator as xor operator gives the value only if both operator are different and gives 0 in case the operators are same 
    for(int i = 0; i<size;i++){
        ans = ans ^ arr[i];
    }
    cout<<ans;
return 0 ;
}