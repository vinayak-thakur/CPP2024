#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 6, 9, 12, 34, 45, 67};
    int size = 8;
    int target = 6;
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    cout << "The target was not found ";
    return 0;
}