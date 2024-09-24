// #include<iostream>
// using namespace std;
// int binarysearch(int arr[], int size, int target ){
//     int start =0;
//     int end= size-1;
//     int mid = (start+end)/2;

//     while(start<=end){
//         int element = arr[mid];
//         if(element==target){
//         return mid;
//         }
//         else if(target<element){
//             // search in left
//             end=mid-1;
//         }
//         else{
//             // search in right
//             start=mid+1;
//         }
//         mid= (start+end)/2 ;

//     }
//     return -1;// as we came out of while loop and i didnt find the element so i am returning -1

// }
// int main()
// {
//     int arr[]= {2,4,6,8,10,12,16};
//     int target = 8;
//     int size=7;

//     int indexoftarget = binarysearch(arr,size,target);

// if(indexoftarget==-1){
//     cout<<"target not found";
// }
// else{
//     cout<<"target found at index:"<<indexoftarget<<endl;
// }
// return 0 ;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[]= {2,5,7,8,9,3,6};

// return 0 ;
// }

// find the first occurence of a repeated number in a sorted array
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int firstOccurence(vector<int> arr, int target) {
//     int start=0;
//     int end = arr.size()-1;
//     int mid = (start+end)/2;
//     int ans=-1;

//     while(start<=end){
//         if(arr[mid]==target){
//             ans=mid;
//             end=mid-1;
//         }
//         else if(arr[mid]<target){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid= (start+end)/2;

//     }
//     return ans;


// }


// int main() {
//    vector<int> v{1,2,3,3,4,4,4,4,4,7,19,21};
//    cout<<"enter the taregt : ";

//    int target  ;
//    cin>>target;
//    int indexOFirstOcc=firstOccurence(v,target);
//    cout<< " the first index is "<<indexOFirstOcc;



//     return 0;
// }


// FIND THE LAST OCCURENCE OF THE REPEATING ELEMENT

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lastOccurence(vector<int> arr, int target) {
    int start=0;
    int end = arr.size()-1;
    int mid = (start+end)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid= (start+end)/2;

    }
    return ans;


}


int main() {
   vector<int> v{1,2,3,3,4,4,4,4,4,7,19,21};
   cout<<"enter the taregt : ";

   int target  ;
   cin>>target;
   int indexOflastOcc=lastOccurence(v,target);
   cout<< " the last index is "<<indexOflastOcc;



    return 0;
}


