#include<iostream>
using namespace std;
int main()
{
    int j[]={12,2,45,31};
    for(int i=0;i<4;i++){
          int k=i+1;
          while(j[i]>j[k] && k<4){
            int temp=j[i];
            j[i]=j[k];
            j[k]=temp;
            k++;    
        } 
    }
    for(int i=0;i<4;i++){
        cout<<j[i]<<" ";
    }
}