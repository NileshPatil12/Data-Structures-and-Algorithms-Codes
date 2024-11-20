#include<iostream>
using namespace std;
void solve(int n,int c){
    if(n==0){
        return;
    }
    cout<<(c-n+1)<<" ";
    solve(n-1,c);
    cout<<(c-n+1)<<" ";
}
void solve2(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    solve2(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    solve(n,n);cout<<endl;
    //12344321
    solve2(n);
    //43211234
    return 0;
}