#include<iostream>
using namespace std;
int main()
{
    // it is used to found number in an array when an xor statement is applied to an elemnt if answer is zero then then it it similar to it
    int a;
    int array[6]={1,2,3,4,5,6};
    cout<<"Enter the number "<<endl;
    cin>>a;
    int i=0;
    int j=a;
    while (i<6)
    {
        cout<<(j^array[i]);
        if((j^array[i])==0){
            cout<<"Element found at index "<<i<<endl;
        }
        i++;
    }
}