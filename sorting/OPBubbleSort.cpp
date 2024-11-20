#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{   
    for(int i=1;i<n;i++){
        //for loop from 1 to n-1
        bool swapped=false;
      
        for(int j=0;j<n-i;j++){
            //loop from 0 to n-i
            //if we go to n then it will access element outside of the array that is 0 then it will also be sorted 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            cout<<i<<endl;
            break;
        }
    }
}


int main()
{
    int arr[5]={1,2,3,5,4};
    bubbleSort(arr,5);
    for(int i:arr){
        cout<<i<<" ";
    }
}