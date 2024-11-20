#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void Sortone(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        //jab tak arr[i]=0 then proceed furthur
        cout<<"step ";
        printArray(arr,size);
        while(arr[i]==0 && i<j){
            i++;
        }
        //jab tak arr[j]=1 then proceed furthur
        while(arr[j]==1 && i<j){
            j--;
        }
        //means ham yaha tak a gye hai arr[i]=1 and arr[j]=0
        while(arr[i]==1 && arr[j]==0 && i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    // while(i<=j){
    //     if(arr[i]==0){
    //         i++;
    //     }
    //     else if(arr[j]==1){
    //         j--;
    //     }
    //     else if(arr[i]==1 && arr[j]==0){
    //         swap(arr[i],arr[j]);
    //         i++;
    //         j--;
    //     }
    // }
}

int main()
{
    int arr[6]={1,0,0,1,0,0};
    // int  i=0;
    // int j=5;
    //famous two pointer approach i did it 
    
    Sortone(arr,6);

    cout<<"print array\n";
    printArray(arr,6);
    
}