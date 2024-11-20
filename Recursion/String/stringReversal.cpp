#include<iostream>
using namespace std;

void reverse(string& s,int i,int j){
        if(i>=j){
            return;
        }
        cout<<s<<endl;
        swap(s[i],s[j]);
        reverse(s,++i,--j);
}



int main()
{
    string h="NILESH";
    reverse(h,0,h.length()-1);
    cout<<h<<endl;
}