#include<iostream>
using namespace std;
void solve(int arr[],int i,int size){
    if(i==size) return;
    
    solve(arr,i+1,size);
    cout<<arr[i]<<" ";
}
void reverse(int arr[],int i,int j){
    if(i>=j){
        return;
    }
    swap(arr[i],arr[j]);
    reverse(arr,++i,--j);
}

void LastOccr(int arr[],int size,int i,int target,int& ans){
    if(i==size){
        return;
    }
    if(arr[i]==target){
        ans=i;
    }
    LastOccr(arr,size,i+1,target,ans);
}

int firstOccr(int arr[],int size,int i,int target)
{
    if(size==i) return -1;
    if(target==arr[i]){
        return i;
    }
    else{
        return firstOccr(arr,size,i+1,target);
    }
}
int getMax(int arr[],int size,int i){
    if(i==size) return INT32_MIN;
    int temp=arr[i];
    int second=getMax(arr,size,i+1);
    return max(temp,second);
}
int main(){
    int arr[]={1,2,3,4,5,13,2,1,3,2};
    // solve(arr,0,5);
    // cout<<endl;
    // reverse(arr,0,4);
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    int ans=-1;
    LastOccr(arr,10,0,2,ans);
    cout<<ans<<endl;
}