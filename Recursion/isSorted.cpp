#include<iostream>
using namespace std;

bool isSorted(int arr[],int size)
{
    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int a=isSorted(arr+1,size-1);
        return a;
    }
}


int main()
{
    int arr[5]={2,3,3,4,5};
    bool ans=isSorted(arr,5);
    if(ans){
        cout<<"Is sorted succcessfully "<<endl;
    }
    else{
        cout<<"Is not sorted "<<endl;
    }
}