// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;

// int main()
// {// initialisation 
//    int arr[3][3]={
//     {1,2,3},
//    {4,5,6},
//    {9,5,7}} ;
   
//    // row-wise printing in 2-d array
//    for(int i=0;i<3;i++){
//     // for every row we have to print, every column
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" " ;
//     }
//     cout<<endl;
//    }

// }

// row sum print by taking user input
// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;
// void printRowWiseSum(int arr[3][3], int rows,int cols){
//     // printing row wise sum requires row-wise traversal
//     for(int i=0;i<rows;i++){
//         int sum=0;
//         for (int j=0;j<cols;j++){
//             sum = sum + arr[i][j];
//         }
//         cout<<sum;
//         cout<<endl;
//     }

// }

// int main()
// {// initialisation 
//    int arr[3][3];
//    int rows=3,cols=3;
//    // taking input from user 
//    cout<<" enter the values of the array :";
//    for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cin>>arr[i][j];
//     }
    
//    }
//    // printing the inputted array
//    // taking input from user 
//    cout<<" entered values of the array :"<<endl;
//    for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//    }
//    printRowWiseSum(arr,rows,cols);

// }

// search an element in an 2d array
/*
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


int main()
{// initialisation 
   int arr[3][3];
   int rows=3,cols=3;
   int key;
   // taking input from user 
   cout<<"enter the key";
   cin>>key;
   cout<<" enter the values of the array :";
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>arr[i][j];
    }
    
   }
   // printing the inputted array
   // taking input from user 
   cout<<" entered values of the array :"<<endl;
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
    
   for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        if(arr[i][j]==key){
            cout<<"match found";
           
        }
        else{
            cout<<"match not found";
            
        }
    }
    cout<<endl;
   }


}
*/

// searching max min in an 2d array 

//  #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;


// int main()
// {// initialisation 
//    int arr[3][3];
//    int rows=3,cols=3;
   
//    cout<<" enter the values of the array :";
//    for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cin>>arr[i][j];
//     }
    
//    }
//    // printing the inputted array
//    // taking input from user 
//    cout<<" entered values of the array :"<<endl;
//    for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//    }

//  // can do this using functions also 
//    int max =INT_MIN;
//     for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         if(arr[i][j]>max){
//             max=arr[i][j];
//         }
//     }}
//     cout<<"the max value of the array is : "<< max;
//     return 0;
   
// }

// finding transpose of a matrix using a empty matrix

//  #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;
// void transpose(int arr[][3],int rows, int cols, int transposearr[][3]){
//  for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         transposearr[j][i]= arr[i][j];
    
//     }
// }}
// void printarray(int arr[][3], int rows, int cols){
//       for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//    }

// }



// int main()
// {// initialisation 
//    int arr[3][3];
//    int transposearr[3][3];
//    int rows=3,cols=3;
   
//    cout<<" enter the values of the array :";
//    for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cin>>arr[i][j];
//     }
    
//    }
//    // printing the inputted array
//    // taking input from user 
//    cout<<" entered values of the array :"<<endl;
//    printarray(arr,rows,cols);
//    transpose(arr,rows,cols,transposearr);
//    cout<<"final output";
//    printarray(transposearr,rows,cols);
  

 
//     return 0;
   
// }


// 2D vector introduction

 #include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main (){
    vector <vector<int> > arr;
    vector <int> a{1,2,3};
    vector <int> b{2,4,6};
    vector <int> c{1,3,7};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    
    return 0;
}