#include<iostream>
#include<vector>
using namespace std;
vector<int> duplicates(int arr[], int n) {
        int br[n]={0};
        for(int i=0;i<n;i++){
            br[arr[i]]++;
        }
        vector<int> v;
        for(int j=0;j<n;j++){
            if(br[j]>1){
                v.push_back(j);
            }
        }
        if(v.empty()==1){
            v.push_back(-1);
        }
        return v;
    }