/*204. Count Primes

Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0

*/
#include<bits/stdc++.h>
using namespace std;
int countPrimes(int n) {
        if(n==0 || n==1) return 0;
        // now i will make a full true array of size n and fill everything with true
        vector<int> array(n,true);
        array[0]=array[1]=false;
        // now checking prime in the range 2 to n
        int ans=0;
        for(int i=2;i<n;i++){
            if(array[i]){
                ans++;

                // now we will cross all the multiples of the found prime number to remove redundant numbers
                
                for(int j=2*i;j<n;j=j+i){   // we are going till n to cross off all the multiples of found prime number till n
                    array[j]=false;
                }
               
                
            }
        }
         return ans;
    }
int main() 
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    cout<<countPrimes(n);
return 0 ;
}