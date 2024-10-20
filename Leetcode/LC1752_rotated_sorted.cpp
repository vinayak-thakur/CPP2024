 #include<bits/stdc++.h>
 using namespace std;
 bool check(vector<int>& nums) {
        unordered_set <int> copy;
       
        int n=nums.size();
         for(int i=0;i<n;i++){
            copy.insert(nums[i]);

         }
         if(copy.size()==1){
            return true;
         }
        auto count=0;
        for(int i =1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count==1;
    }
 int main() 
 {
 return 0 ;
 }
 