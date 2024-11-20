#include <iostream>
using namespace std;

void print(int arr[],int s,int e){
    int i=s;
    for(i;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int BinarySearch(int arr[], int s, int e, int k)
{
    print(arr,s,e);

    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == k)
    {
        return mid;
    }
    if(arr[mid]>k){
        return BinarySearch(arr,s,mid-1,k);
    }
    else{
        return BinarySearch(arr,mid+1,e,k);
    }





}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout <<"Founded now " <<BinarySearch(arr, 0, 4, 5);
}