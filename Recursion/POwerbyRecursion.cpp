#include <iostream>
using namespace std;

int power(int a, int b)
{
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }

}

int main()
{
    int a = 3;
    int b = 3;
    int c = power(a, b);
    cout<<c<<endl;
}