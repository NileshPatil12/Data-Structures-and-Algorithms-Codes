#include<iostream>
using namespace std;

int getPivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+ (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int findPosition(int arr[], int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e =mid;
        }
    }
    if(k<arr[0]){
        e=n-1;
        mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
                e=mid-1;
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
    }
    else{
        s=0;
        mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
                e=mid-1;
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
    }
}


int main()
{
    int arr[5]={5,1,2,3,4};
    int pivot=findPosition(arr,5,3);
    cout<<"Pivot element is "<<pivot<<endl;

    return 0;
}