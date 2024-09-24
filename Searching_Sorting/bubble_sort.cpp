#include<bits/stdc++.h>
using namespace std;
void bsort(vector<int>& array, int size){
    for(int i=0;i<array.size()-1;i++){
        // now we will create inner loop to check every adjacent element and swap if greater
        for(int j =0;j<array.size()-i-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
}
int main() 
{
  int i =0;
    vector<int> array={7,5,19,78,45,34};
    bsort(array,array.size());
    for(i;i<array.size();i++ ){
        cout<<array[i]<<" ";

}
return 0 ;}