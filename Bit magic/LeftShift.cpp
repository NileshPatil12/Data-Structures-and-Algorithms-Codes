#include<iostream>
using namespace std;
int main()
{
    //it multiplies the element by 2 when we left shift
    // int a;
    // cout<<"Enter the number ";
    // cin>>a;
    // while(a<=1000){
    //     a=a<<1;
    //     cout<<a<<" ";
    // }cout<<endl;
    int array[5]={1,2,3,4,50};
    for(int i=0;i<5;i++){
        array[i]=array[i]<<1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }cout<<endl;
    


}