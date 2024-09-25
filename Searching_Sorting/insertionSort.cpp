#include<bits/stdc++.h>
using namespace std;
void insertionSort(int array[],int size){
    // outer loop corresponds to the elements in the sorted array and it starts with 1 element because the first element is considered as sorted  
    for (int i=1;i<size;i++){
        // selecting the current item 
        int temp=array[i]; // storing the current selected item in temp for comparsion with the elements of the sorted array in the left 
        int j=i-1; // j refers to the index of the first element in the sorted array with which comparison will be made 
        while(j>=0 && array[j]>temp){
            array[j+1]=array[j]; //  if the selected element is smaller than the first element to be compared in the sorted array than the sorted array elements move right by one place to the point where there is no element greater than the selected element
            j--;

        }
        array[j+1]=temp; // now such a situation came that there is no element left in the sorted array which is greater than the selected element, than we store that selected element to the just right of the last element we compared it with in the sorted array 

    }
}
int main() 
{
    int array[]={5,4,10,1,6,2};
    int size= 5;
    insertionSort(array,size);
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

return 0 ;
}