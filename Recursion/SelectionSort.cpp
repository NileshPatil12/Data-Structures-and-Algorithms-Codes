#include <iostream>
using namespace std;

void selection(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    selection(arr, --n);
}

int main()
{
    int arr[10]={10,9,8,7,6,5,4,3,2,1};

    
    selection(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}