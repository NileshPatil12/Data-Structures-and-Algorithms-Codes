#include<iostream>
using namespace std;

bool linearSearch(int arr[],int key,int size){
    if(size==0){
        cout<<"Array is empty now "<<endl;
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool o=linearSearch(arr+1,key,size-1);
        return o;
    }
}


int main()
{
    int arr[]={1,23,4,5,6};
    int key = 2;
    bool t=linearSearch(arr,key,0);
    if(t){
        cout<<"found"<<endl;
    }    
    else{
        cout<<"Not found"<<endl;
    }
}