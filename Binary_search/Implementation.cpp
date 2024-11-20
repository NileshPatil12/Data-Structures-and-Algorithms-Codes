#include<iostream>
using namespace std;

int Binary_search(int arr[],int size,int key){
    int i=0;
    int j=size-1;
    int mid = i + (j-i)/2; //mid=i+j/2 is not right for some cases in int 
    //if i+j is exceeding the limit of the int then it is not okay for the program

    while(i<=j){
        if(arr[mid]==key){
            return mid;
        }
        //check on right if arr[mid] is less than key
        //check on left if arr[mid] is greater than key
        if(arr[mid]<key){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
        //update the mid value
        mid= i + (j-i)/2;
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int even[6]={4,5,6,7,8,9};
    int find=Binary_search(arr,5,5);
    cout<<"5 at "<<find<<endl;
    int find2=Binary_search(even,6,8);
    cout<<"8 at "<<find2<<endl;

}