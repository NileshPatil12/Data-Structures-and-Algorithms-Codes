#include<iostream>
using  namespace std;
void merge(int arr1[],int size1,int arr2[],int size2,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<size1 && j<size2){
        if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        else{
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }
    while(j<size2){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    while(i<size1){
        cout<<"Hello";
        arr3[k]=arr1[i];
        i++;
        k++;
    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};
    int arr3[9]={0};
    cout<<"chek";
    merge(arr1,5,arr2,4,arr3);
    cout<<"Printing array "<<endl;
    print(arr3, 9);

}