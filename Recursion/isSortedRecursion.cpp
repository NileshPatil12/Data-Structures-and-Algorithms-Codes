#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    
    //if size of array is 0 or 1 then array is sorted
    if(size==0 || size==1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1,size-1);
    }


}

int main()
{
    int arr[]={1,2,3,4,5};
    bool a=isSorted(arr,5);
    if(a){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Is not sorted "<<endl;
    }

}