#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
    if(start==end){
        return;
    }
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse(arr,start+1,end-1);
}

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int i=0,j=0,count=0;
        while(i<n){
            j=0;
            while(j<m){
                if(a[i]==b[j]){
                    count++;
                }
            }
        }
        int c=n+m-count;
        return c;
        
    }

int main(){
    int arr[5]={1,2,3,4,5};
    int arr1[3]={1,2,6};
    int cou=doUnion(arr,5,arr1,3);
    cout<<"HEloo";
    cout<<"IT has this  much in common "<<cou;
    
    
}