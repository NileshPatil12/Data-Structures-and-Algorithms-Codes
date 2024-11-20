#include<iostream>
using namespace std;

void printToUpper(char arr[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char ch=arr[i][j];
            if(ch>='a' && ch<='z'){
                continue;
            }
            arr[i][j]=arr[i][j]+'a'-'A';
        }
    }
}
void print(char arr[][3],int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}

int main()
{
    char arr[3][3]={'A','b','c','d','e','f','g','H','i'};
    
    printToUpper(arr,3);
    print(arr,3);
   
}