// binary search in an nearly sorted array 
// #include <iostream>
// #include <vector>
// using namespace std;
// int nearlySearch(vector<int> arr, int target)
// {
//     int s = 0;
//     int end = arr.size() - 1;
//     while (s <= end)
//     {
//         int mid = (s + end) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid - 1] == target)
//         {
//             return mid - 1;
//         }
//         else if (arr[mid + 1] == target)
//         {
//             return mid + 1;
//         }
//         else if (arr[mid] > target)
//         {
//             end = mid - 2; // why using 2 explained in notebook 
//         }
//         else
//         {
//             s = mid + 2;
//         }
//         mid = (s + end) / 2;
//     }
//     return -1; // if i come out of the loop and
// }
// int main()
// {
//     vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
//     int position;
//     if (nearlySearch(arr, 50))
//     {
//         position = nearlySearch(arr, 50);
//         cout << "element found at position :" << position;
//     }
//     else
//     {
//         cout << "element not found ";
//     }

//     return 0;
// }

// division of numbers using binary search 
// #include<iostream>
// using namespace std;
// int solve(int dividend, int divisor){
//     int start=0;
//     int ans=0;
//     int end = abs(dividend);
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(abs(divisor *mid)==abs(dividend)){
//             return mid;

//         }
//         else if ( abs(divisor*mid)>abs(dividend)){
//             end=mid-1;
//         }
//         else{
//             ans=mid;
//             start=mid+1;
//         }
//         mid=(start+end)/2;

//     }
//     if(divisor<0 && dividend<0 || dividend>0 && divisor>0){
//         return ans;
//     }
//     else{
//         return -ans;
//     }
// }
// int main() 
// {
//     int dividend = -22;
//     int divisor= -7;
//     int ans= solve(dividend,divisor);
//     cout<<"answer is :"<<ans;

// return 0 ;
// }

// odd occuring element using BS
#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> arr){
    int s=0;
    int e= arr.size();
    int mid= (s+e)/2;
    while(s<=e){
        if(s==e){ // if there is only one element in the list/array
return s;
        }
        else if (mid%2==0){
            if(arr[mid]==arr[mid+1]){  // right dearch 
                s= mid+2;
            }
            else{   // left search
            e=mid;

            }

        }
        else{
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            } // Right search
            else{
                e=mid-1;
            }
        }
        mid=(e+s)/2;
    }
    return mid;
}
int main() 
{
    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
int ans= solve(arr);
cout<<"Index of the element is :"<<ans<<endl;
return 0 ;
}
/*


*/