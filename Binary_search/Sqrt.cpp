#include<iostream>
using namespace std;

int sqareRoot(int n)
{
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        int root=mid*mid;
        if(root==n){
            return mid;
        }
        if(root>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double morePrecision(int n,int precision,int ans){
    double answer=ans;
    double factor=1;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=answer;(j*j)<n;j=j+factor){
            answer=j;
        }
    }
    return answer;
}


int main()
{
    int s=sqareRoot(69);
    double n=morePrecision(69,4,s);
    cout<<n<<endl;
}