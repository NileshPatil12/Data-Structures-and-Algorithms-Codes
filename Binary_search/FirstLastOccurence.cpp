#include<iostream>
#include<vector>
using namespace std;

int firstOcur(vector<int> arr,int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start + (end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
         mid=start + (end-start)/2;
    }
    return ans;
}
int LastOccur(vector<int> arr,int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start + (end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
         mid=start + (end-start)/2;
    }
    return ans;
}

int main()
{
    vector<int> arr={1,2,3,4,5,5,5,5};
    pair<int,int> p;
    p.first=firstOcur(arr,8,5);
    p.second=LastOccur(arr,8,5);
    cout<<p.first<<" "<<p.second<<endl;
}