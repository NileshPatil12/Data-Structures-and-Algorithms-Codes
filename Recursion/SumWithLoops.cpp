#include<iostream>
using namespace std;
#define x 0;
int sumByRecursion(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remains=sumByRecursion(arr+1,size-1);
    int sum=arr[0]+remains;
    return sum;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int s=sumByRecursion(arr,5);
    cout<<s<<endl;
}