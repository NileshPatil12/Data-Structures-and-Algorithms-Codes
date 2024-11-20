#include<iostream>
using namespace std;

int Power(int n){
    //base case
    if(n==0){
        return 1;
    }
    return n * Power(n-1);
}

int main()
{
    int n;
    cin>>n;
    int c=Power(n);
    cout<<"Power of 2 raise to "<<n<<" is "<<c<<endl;
}