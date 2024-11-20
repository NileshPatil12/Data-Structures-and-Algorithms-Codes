#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j++;
    }
}
void rotateArr(int arr[], int d, int n){
        d=d%n;
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);
    }
int main()
{
    int arr[6]={1,2,3,4,5,6};
    rotateArr(arr,4,6);
    for(int i:arr){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}