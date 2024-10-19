#include<bits/stdc++.h>
using namespace std;
void returnDivisor(int n){
    int original=n;
    vector<int> array;
    for(int i=1;i<=original;i++){
        if(original%i==0){
            array.push_back(i);
        }
    }
    cout<<"the divisors are : [";
    // printing the divisors 
    for (int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    cout<<"]" ;
}
int main() 
{
int n= 36;
returnDivisor(n);
return 0 ;
}