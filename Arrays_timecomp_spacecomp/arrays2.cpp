// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
// // creating a vector
//     vector <int> array;
//     cout<<"size is "<<array.size()<<endl;
//     array.push_back(5);
//       array.push_back(6);
//        for(int i =0;i<array.size();i++){
//  cout<<array[i]<<" ";}
//       array.pop_back();
//        for(int i =0;i<array.size();i++){
//  cout<<array[i]<<" ";}
//     return 0 ;

// }

// when i explicitly mention the size in the vector
//  #include <iostream>
//  #include <vector>
//  using namespace std;
//  int main() {
//      vector <int> array{n};
//      cout<<"size is "<<array.size()<<endl ;
//          cout<<"size is "<<array.capacity()<<endl ;
//          array.push_back(4);
//          array.push_back(5);
//          cout<<"size is "<<array.capacity()<<endl;
//           cout<<"size is "<<array.size()<<endl;
//  }

// creating an array which is dynamic by taking inputs

// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter n "<<endl;
//     cin>>n;
//     vector <int> array(n,20);
//     for(int i=0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }
// }

// way of initialisingh the vector w the given values
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {

//     vector <int> array{10,20,30,40,50};
//     for(int i=0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }
//     // checking if the vector is empty or not
//     cout<<"vector is empty or not, 0 for empty and 1 for not"<<endl<<array.empty();
// }

// check if the array has  a unique element
// #include <iostream>
// #include <vector>
// using namespace std;
// int findUnique(vector <int> array){
//     int ans = 0;
//      for(int i=0;i<array.size();i++){
//         ans= ans^array[i];
// }
// return ans;
// }
// int main() {
//     int n;
//     cout<<"enter the number of elements";
//     cin>>n;
//     vector <int> array(n);
//     cout<<"enter the elements :" ;
//     for(int i=0;i<array.size();i++){
//         cin>>array[i];

//     }
//     int UniqueElement= findUnique(array);
//     cout<<"unique element is "<<UniqueElement;
// }

// union of two arrays when no duplicates
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector <int> array;
//     int array1[]= {1,2,3,4};
//     int sizea=4;
//     int sizeb=2  ;
//     int array2[]={5,6};
//     // pushing all elements of array1 int the vector
//     for(int i=0;i<sizea;i++){
//         array.push_back(array1[i]);
//     }
//     // pushing all elements of array2n in the vector
//      for(int i=0;i<sizeb;i++){
//         array.push_back(array2[i]);
//     }
//     // printing the final array
//     for(int i =0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }
// }

// intersection of two arrays

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr{1, 2, 3, 4, 6, 8};
//     vector<int> brr{3, 4, 9, 10};
//     vector<int> ans;
//     // first traversing every element of first array
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int element = arr[i];
//         // for every element of this first array we have to traverse every element of the other array using a for loop
//         for (int j = 0; j < brr.size(); j++)
//         {
//             if (element == brr[j])
//             {
//                 ans.push_back(element);
//             }
//         }
//     }
//     // printing the final array which has intersection of two arrays
//     /*
//     one more method of printing the array
//     for(auto value : ans){
//         cout<<value<<" "
//     }*/
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// how to avoid duplicates in the intersection or the false result due to the presence of duplicates in the array by marking the element with -1 and in case of negative numbers in the array mark with INT_MIN
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr{1, 2, 3, 3, 4, 6, 8};
//     vector<int> brr{3, 3, 4, 9, 10};
//     vector<int> ans;
//     // first traversing every element of first array
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int element = arr[i];
//         // for every element of this first array we have to traverse every element of the other array using a for loop
//         for (int j = 0; j < brr.size(); j++)
//         {
//             if (element == brr[j])
//             {
//                 brr[j] = -1;
//                 ans.push_back(element);
//             }
//         }
//     }
//     // printing the final array which has intersection of two arrays
//     /*
//     one more method of printing the array
//     for(auto value : ans){
//         cout<<value<<" "
//     }*/
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// union of two arrays when duplicates present by marking the duplicates with INT_MIN and then pushing all the non-INT_MIN

// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     vector<int> array1 = {1, 2, 4, 6, 8, 10};
//     vector<int> array2 = {3, 4, 5, 6};
//     vector<int> array_final;

//     // Mark duplicates in array2 with INT_MIN
//     for (int i = 0; i < array1.size(); i++)
//     {
//         int element = array1[i];
//         // traversing the second array
//         for (int j = 0; j < array2.size(); j++)
//         {
//             if (element == array2[j])
//             {
//                 array2[j] = INT_MIN;
//             }
//         }
//     }

//     // Add elements of array1 to array_final
//     for (int i = 0; i < array1.size(); i++)
//     {
//         array_final.push_back(array1[i]);
//     }

//     // Add non-duplicate elements of array2 to array_final
//     for (int j = 0; j < array2.size(); j++)
//     {
//         if (array2[j] != INT_MIN)
//         {
//             array_final.push_back(array2[j]);
//         }
//     }

//     // Print the final array
//     for (int i = 0; i < array_final.size(); i++)
//     {
//         cout << array_final[i] << " ";
//     }

//     return 0;
// }



// find a pair from the given arrays that upon addition gives value = "X"
// approach will be we will find all the pairs of numbers 

// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     vector <int> array{ 10,20,40,60,70};
//     int sum = 80 ;
//     // print all pairs of the possible combinations from the array 
//     // first loop will take every element from the array as first element of the set and other loop will take next element from the array as second element of the set 

//     // first loop for outer loop
//     for (int i=0;i<array.size();i++){
//         int element = array[i];
// // for inside loop, it will pair the first element selected in the first round of traversing from the first array with the just next element to it so the loop will go from i+1 to last
// for(int j=i+1;j<array.size();j++){
//     if(element+array[j]==80){
//         cout<<"the pair is :"<< "("<<element<<','<<array[j]<<")"<<endl;
//     }
// }
//     }
// }


// find a triplet from the given arrays that upon addition gives value = "X"
// approach will be we will find all the triplet of numbers 


// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     vector <int> array{ 10,20,30,40,50};
//     // first element of the triplet will be first element of the set, next will be i+1, next will be i+2
//     for(int i=0;i<array.size();i++){
//         int element = array[i]; // first element
//         // second element
//         for(int j=i+1;j<array.size();j++){
//             int element2=array[j];
//             // third element
//             for(int p=j+1;p<array.size();p++){
//                 if(element+element2+array[p]==80){
//                    cout<<"the triplet is :"<< "("<<element<<','<<element2<<','<<array[p]<<")"<<endl;
//                 }
//             }
//         }
    
//     }
// }

// sort 0's and 1's from the given array 


#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    vector <int> array{ 0,1,0,1,1,0,1,0,1,1};
    int start=0;
    int end= array.size()-1;

    while(start<end){

        if(array[start]==0){
            start++;
           

        }
        else if(array[end]==1) {
            end--;
            
        }
        else{
            swap(array[start],array[end]);
            start++;
            end--;


        }

    }
    for(int j=0;j<array.size();j++){
        cout<<array[j]<<" ";
    }
}

// another approach to sort 0s and 1's 
/*
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    vector<int> array{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    int start = 0;
    int end = array.size() - 1;
    int i = 0;
    while (start < end)
    {
        if (array[i] == 0)
        {
            swap(array[start], array[i]);
            start++;
            i++;
        }
        else
        {
            swap(array[end], array[i]);
            end--;
            i++;
        }
    }
    for (int j = 0; j < array.size(); j++)
    {
        cout << array[j] << " ";
    }
}
*/