#include<bits/stdc++.h>
using namespace std;
int main() 
{
      int arr[10]={1,2,3,4};
     // cout<<&(arr[1])<<endl;
     int *ptr = &(arr[0]);
     ptr = ptr+1;  // here pointer is incremented by a memory location so it is pointing to the next memory location to which it was pointing before 
     cout<<*(ptr); 
return 0 ;
}