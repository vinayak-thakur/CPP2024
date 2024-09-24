// #include <iostream>
// using namespace std;
// int binarysearch(int arr[], int size, int target){
     
   
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end) / 2;
//     while (start <= end)
//     {
//         int element = arr[mid];
//         if (element == target)
//         {
//             return mid;
//         }
//         else if (target < element)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         mid = (start + end) / 2;
//     }
//     cout << "The target was not found ";
//     return -1;
// }
// int main()
// {
//      int size = 8;
//     int target = 6;
//     int arr[] = {2, 4, 6, 9, 12, 34, 45, 67};
//   int index= binarysearch(arr,size,target);
//   if(index==-1){
//     cout<<"not found";}
//   else {
//         cout<<"element found at index:"<<index;
//     }
//   }

    


// first occurence
// #include<iostream>
// #include<vector>
// using namespace std;
// int firstoccurence(vector <int> v,int target){
//     int s=0;
    
//     int end = v.size()-1;
//     int mid= (s+end)/2;
//     int ans=-1;
//     while(s<=end){
//         int element= v[mid];
//         if(element==target){
//             ans=mid;
            
//             end=mid-1;
//         }
//         else if(element<target){
//             s= mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid= (s+end)/2;
//     }
//     return ans;
// }
// int main() 
// {
//     vector<int> v{1,3,4,4,4,4,9,17,29,51};
//     int target=4;
//     int indexofF = firstoccurence(v,target);
//     cout<<indexofF;
// return 0 ;
// }

// Last Occurence
// #include<iostream>
// using namespace std;
// #include<vector>
// int lastoccurence(vector<int> array, int target ){
//     int start=0;
//     int ans=-1;
//     int end=array.size()-1;
//     int mid = (start+end)/2;
//     while(start<=end){
//         if(array[mid]<target){
           
//             start = mid+1;

//         }
//         else if (array[mid]==target){
//             ans=mid;
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return ans;
// }
// int main() 
// {
//     vector <int> array{1,2,3,7,7,7,7,9,23,45};
//     int target=7;
//     int index=lastoccurence(array,target );
//     cout<<index;
// return 0 ;
// }


// total occurence

// #include<iostream>
// using namespace std;
// #include<vector>
// int firstoccurence(vector <int> v,int target){
//     int s=0;
    
//     int end = v.size()-1;
//     int mid= (s+end)/2;
//     int ans=-1;
//     while(s<=end){
//         int element= v[mid];
//         if(element==target){
//             ans=mid;
            
//             end=mid-1;
//         }
//         else if(element<target){
//             s= mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid= (s+end)/2;
//     }
//     return ans;
// }
// int lastoccurence(vector<int> array, int target ){
//     int start=0;
//     int ans=-1;
//     int end=array.size()-1;
//     int mid = (start+end)/2;
//     while(start<=end){
//         if(array[mid]<target){
           
//             start = mid+1;

//         }
//         else if (array[mid]==target){
//             ans=mid;
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return ans;
// }
// int main() 
// {
//      vector <int> array{1,2,3,7,7,7,7,9,23,45};
//     int target=7;
//     int index1=lastoccurence(array,target );
//     int index2= firstoccurence(array,target);
//     cout<<index1- index2+1; // logic of total occurence is that last occurence - first occurence +1 
// return 0 ;
// }


