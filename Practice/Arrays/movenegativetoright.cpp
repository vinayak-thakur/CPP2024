#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    vector <int> array{ -4,-7,-6,1,-18,1,0,1,0,1,1};
    int start=0;
    int end= array.size()-1;

    while(start<end){

        if(array[start]<0){
            start++;
           

        }
        else if(array[end]>=0) {
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