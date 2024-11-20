#include<iostream>
#include<vector>
using namespace std;

void PrintAllPermutations(int index,string& str,vector<string>& ans){ //due reference pass in string so we have to fix string after changing to use for other calls
    if(index>=str.size()){
        ans.push_back(str);
        return;
    }
    for(int j=index;j<str.size();j++){
        swap(str[j],str[index]);
        PrintAllPermutations(index+1,str,ans);
        swap(str[j],str[index]); //backtracked here
    }
}


int main()
{
    string str="abcd";
    int index=0;
    vector<string> ans;
    PrintAllPermutations(index,str,ans);
    for(auto i:ans){
        cout<<i<<" "<<endl;
    }
    return 0;
}