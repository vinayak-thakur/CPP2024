// // finding square root of a number using binary search
// #include<iostream>
// using namespace std;
// int findSqrt(int n){
//     int s=0;
//     int target=n;
//     int end = n;
//     int mid= (s+end)/2;
//      int flash;
//     while ((s<=end))

//     {
//         /* code */
//         if(mid*mid==target){
//             return mid;
//         }
//         else if(mid*mid>target){
//             end=mid-1;
//         }
//         else{
//             flash=mid;
//             s=mid+1;

//         }
//         mid=(s+end)/2;

//     }
//     return flash;
// }
// int main()
// {
//     int n,precision;
//     cout<<"enter the number";
//     cin>>n;
//     cout<<"enter the digits of precision";
//     cin>>precision;
//    double ans = findSqrt(n);
//     // cout<<"Numeric part is "<<ans;
//     double step = 0.1;
//     for (int i =0;i<precision;i++){
//         for(double j =ans;j*j<=n;j=j+step ){
//             ans = j;
//         }
//         step= step/10;
//     }
//     cout<<ans;

// return 0 ;
// }

// search in a 2d matrix

#include <iostream>
using namespace std;
bool search(int array[][4], int rows, int cols, int target)
{
    int s = 0;
    int total = rows * cols;
    int end = total - 1;
    int mid = (s + end) / 2;
    while (s <= end)
    {
        int rowindex = mid / cols;
        int colindex = mid % cols;
        if (array[rowindex][colindex] == target)
        {
            cout << "Found at : " << rowindex+1 << "th row" << colindex+1 << "th column" << endl;

            return true;
        }
        else if (array[rowindex][colindex] < target)
        {
            s = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (s + end) / 2;
    }
    return false;
}
int main()
{
    int array[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int rows = 5;
    int cols = 4;
    int target = 11;
    bool answer = search(array, rows, cols, target);
    if (answer)
    {
        cout << "";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}