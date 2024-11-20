#include<iostream>
using namespace std;
//for digit reading from start if reverse then swap last two statements
void SayDigit(int n,string arr[]){
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    SayDigit(n,arr);
    cout<<arr[digit]<<" ";
    
}




int main()
{
    string Arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    SayDigit(123,Arr);
}