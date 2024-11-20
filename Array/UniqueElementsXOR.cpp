#include<iostream>
using namespace std;
//to check for a element which is not coming twice in it 
int main()
{
//     int arr[7]={2,2,5,5,7,3,3};
//     int ans=0;
//     for(int i=0;i<7;i++){
//         ans=ans^arr[i];
//         cout<<" ans ="<<ans<<endl;
//     }
    int ans1=0;
    int arr1[5]={1,2,3,4,1};
    for(int i=0;i<5;i++){
        ans1=ans1^arr1[i];
        // cout<<ans1<<" ";
    }cout<<endl;
    for(int i=1;i<5;i++){
        ans1=ans1^i;
        // cout<<ans1<<" ";
    }
    cout<<ans1<<endl;
}