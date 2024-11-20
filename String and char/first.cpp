#include<iostream>
using namespace std;

int getlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverse(char arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        swap(arr[i++],arr[j--]);
    }
}

bool checkPalindrome(char arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(arr[s]!=arr[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

char toLower(char a){
    if(a>='a' && a<='z'){
        return a;
    }
    else{
        a=a-'A'+'a';
        return a;
    }
}

char ToUpper(char ch){
    if(ch>='A' && ch<='Z'){
        return ch;
    }
    else{
        ch=ch-'a'+'A';
        return ch;
    }

}

int main()
{
    char arr[10];
    cout<<"Enter the name ";
    cin>>arr; 
    cout<<arr<<endl;
    reverse(arr,13);
    cout<<arr<<endl;
//     cout<<"Get length of name "<<getlength(arr)<<endl;
//     reverse(arr,6);
//     cout<<arr<<endl;
//     cout<<"Check for palindrome "<<checkPalindrome(arr,6)<<endl;
//     cout<<"Convert A to lower case "<<toLower('A')<<endl;
//     cout<<"Convert a to upper case "<<ToUpper('b')<<endl;
}