#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){return 0;}

    int fib_num=fibo(n-1)+fibo(n-2);
    return fib_num;
}






int main(){
    //To find out the fibonacci  number by recursion
    int n;
    cin>>n;
    int num=fibo(n);
    cout<<num<<endl;
}