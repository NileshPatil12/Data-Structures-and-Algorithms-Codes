#include<iostream>
using namespace std;
int main()
{
    //we can print odd element of array of the element with the help of these techniques
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<10;i++){
    //     if(arr[i]&1==1){
    //         cout<<arr[i]<<" ";
    //     }
    // }cout<<endl;
    
    //we can right shift any numbner and turn it into half by first 
    // int n;
    // cout<<"Enter the number of elements "<<" ";
    // cin>>n;
    // while(n>0){
    //     n=n>>1;
    //     cout<<n<<" ";
    // }cout<<endl;

    //it it multiplying the element by 2 when we are doing left shift
    int t;
    cout<<"Enter the number of test cases "<<endl;
    cin>>t;
    while(t<1000){
        t=t<<1;
        if(t<1000){
            cout<<t<<" ";
        }
    }cout<<endl;
}