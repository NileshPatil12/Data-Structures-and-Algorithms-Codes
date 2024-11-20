#include <iostream>
using namespace std;

int sumOf(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    // int sum=arr[0]+arr[1];
    // sum=sum+sumOf(arr+2,size-2);
    // return sum;
    int remain=sumOf(arr+1,size-1);
    int sum=arr[0]+remain;
    return sum;
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = sumOf(arr, 5);
    cout << "The sum of array by recursion is " << sum << endl;
}