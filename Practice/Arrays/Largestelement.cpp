#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n;
    cout<<"enter the number";
    cin>>n;
    vector<int> array(n);
cout<<"enter the array elements" ;
   
   for(int i=0;i<n;i++){
    cin>>array[i];
   }
// checking brute force
int max = array[0];
for(int i=0; i<n;i++){
    if(array[i]>max){
        max=array[i];
    }
}
cout<<"the maximum element is :"<<max;

return 0 ;
}