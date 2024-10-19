#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> array= {1,2,3,3,3,2};
    vector<int> count_number;
    // looping through every element
    for (int i=0;i<array.size();i++){
        // initialising count for the current element 
        int count = 1;
        // now checking each element with the next element 
        for (int j=i+1;j<array.size();j++){
            if(j<array.size() && array[i]==array[j]){
                count++;
            }
            
        }
        count_number.push_back(count);
        }
        for(int i=0; i<count_number.size();i++){
            if (i<count_number.size() && count_number[i]==count_number[i+1]){
                return 0;
            }
            
        }
        cout<<"True";
    
return 0 ;
}

/*Optimised using Hashing */
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_set <int> meow;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for (auto it: freq){
            meow.insert(it.second);
        }
        return meow.size()==freq.size();
    }
};