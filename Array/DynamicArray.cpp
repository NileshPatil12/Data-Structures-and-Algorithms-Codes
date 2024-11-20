#include <iostream>
using namespace std;
int main()
{
    // // 1D array
    // int *arr = new int(5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 5 - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // 2d array creation
    int n;
    cin >> n;
    //creation
    int **arr1 = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = new int[n];
    }
    //implementation

    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            cin>>arr1[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;


    //relesing memory from the heap memory
    for(int i=0;i<n;i++){
        delete [] arr1[i];
    }
    delete []arr1;
}