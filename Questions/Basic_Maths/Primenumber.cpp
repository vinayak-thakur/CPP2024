#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n==1 || n==0){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}

int main(){
    int n=25;
  auto ans = prime(n);
  (ans==1)? cout<<"True" : cout<<"False";

    
}