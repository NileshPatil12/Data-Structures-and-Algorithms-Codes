#include<iostream>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    int i=0;
    int j;
    int min;
    while(i<(n-1)){
        j=i+1;
        min=i;
        while(j<n){
            if(arr[j]<arr[min]){
                min=j;
            }
            j++;
        }
        swap(arr[i],arr[min]);   
        i++;
    }
}

int main()
{
    
}