#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    // cin>>i;
    int arr[10] = {1, 2, 34, 5, 6, 6, 7, 8, 3, 5};
    for (i = 0; i < 10; i++)
    {
        cout << (arr[i] | 1) << " ";
    }
    cout << endl;
}
