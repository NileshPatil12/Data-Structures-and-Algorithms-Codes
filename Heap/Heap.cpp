#include <iostream>
using namespace std;
class heap
{
public:
    int arr[100];
    int size = 0;

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void Delete()
    {
        if (size == 0)
        {
            cout << "Nothing to eliminate" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (arr[i] < arr[leftIndex] && leftIndex < size)
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (arr[i] < arr[rightIndex] && rightIndex < size)
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    else if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

int main()
{
    heap h;
    h.insert(20);
    h.insert(10);
    h.insert(15);
    h.insert(30);
    h.insert(40);
    h.print();
    h.Delete();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "Printing array now ";
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}