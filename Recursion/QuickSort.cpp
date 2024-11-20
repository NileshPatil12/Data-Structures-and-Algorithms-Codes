#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    int index1 = s;
    int index2 = e;
    while (index1 < pivotIndex && index2 > pivotIndex)
    {
        if (arr[index1] < pivot)
        {
            index1++;
        }
        if (arr[index2] > pivot)
        {
            index2--;
        }
        if (arr[index1] > pivot && arr[index2] < pivot)
        {
            swap(arr[index1++], arr[index2--]);
        }
    }
    return pivotIndex;
}

void QuickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    cout << "Hello" << endl;
    int p = partition(arr, s, e);
    QuickSort(arr, s, p - 1);
    QuickSort(arr, p + 1, e);
}

int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    QuickSort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}