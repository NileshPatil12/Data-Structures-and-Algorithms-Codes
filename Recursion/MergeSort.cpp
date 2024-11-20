#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid ;
    int *first = new int(len1);
    int *second = new int(len2);
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }
    int index1 = 0;
    int index2 = 0;
    int arrindex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[arrindex++] = first[index1++];
        }
        else
        {
            arr[arrindex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[arrindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[arrindex++] = second[index2++];
    }
}

void selection(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    selection(arr, s, mid);
    selection(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    selection(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}