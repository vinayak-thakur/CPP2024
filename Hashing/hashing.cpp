#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    int original[]={1,5,5,7,8,8,9};
    int arr[100]={0};
    for(int i =0;i<7;i++){
        arr[original[i]]++ ;
    }
    int target;
   cout<<"ENTER THE NUMBER";
   cin>>target;
   cout<<arr[target];
  
return 0 ;
}