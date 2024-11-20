#include<iostream>
using namespace std;

int insertAtEnd(int arr[],int end,int key){
        arr[end]=key;
        return ++end;
}
int insertAtMiddle(int arr[],int end,int start,int key){
    
    int middle=(end+start)/2;
    for(int i=end;i>middle;i--){
        arr[i]=arr[i-1];
    }
    arr[middle]=key;
    return ++end;
}
void display(int arr[],int end){
    for(int i=0;i<end;i++){
        cout<<"  "<<arr[i];
    }
}

int len(int a[]){
    int size=sizeof(a)/sizeof(a[0]);
    return size;
}

int main()
{
    int arr[]={12,2,3,43,10};
    
    display(arr,len(arr));
    cout<<"\nInsert at tail =";
    
    display(arr,insertAtEnd(arr,len(arr),13));
    cout<<"\nInsert at head =";
    display(arr,insertAtMiddle(arr,len(arr),0,14));


    return 0;
}