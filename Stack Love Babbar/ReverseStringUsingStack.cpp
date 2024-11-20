#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;
    string v="NIlesh";
    int i=0;
    while(i<v.size()){
        s.push(v[i]);
        i++;
    }
    string ans="";
    i=0; 
    while(v.size() > i){
        char c=s.top();
        s.pop();
        ans.push_back(c);
        i++;
    }
    cout<<ans<<" "<<endl;
    return 0;
}