#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int* p;
    p=a;
    for(int i=0;i<5;i++){
        cout<<*(a+i)<<"\t";
    }
    int i=0;cout<<"\n";
    cout<<*(p+3)<<endl;
    //cout<<p[i];
}