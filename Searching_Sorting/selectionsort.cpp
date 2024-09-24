#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{
    for (int i = 0; i <= n - 2; i++) {
        // Assume the current index holds the smallest value
        int minIndex = i;
        // Find the minimum element in the remaining unsorted array
        for (int j = i + 1; j <= n-1; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        if (minIndex != i) {
            swap(arr[minIndex], arr[i]);
        }
    }
}

int main() 
{
    int i =0;
    vector<int> array={7,5,19,78,45,34};
    selectionSort(array,array.size());
    for(i;i<array.size();i++ ){
        cout<<array[i]<<" ";
    }
return 0 ;
}