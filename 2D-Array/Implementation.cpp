#include<iostream>
using namespace std;
#include<vector>
void printRowSum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }cout<<sum<<" "<<i<<endl;
    }
}

void Traversal(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }
}


void printColSum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[j][i];
        }cout<<sum<<" "<<i<<endl;
    }
}

void print(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}

pair<int,int> FindElement(int arr[][3],int col,int row,int k){
    pair<int,int> x;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(k==arr[i][j]){
                x.first=i;
                x.second=j;
                return x;
            }
        }
    }
    return x;
}

int RowMaxSum(int arr[][3],int row,int col){
    int maxi=INT32_MIN;
    int index=-1;
    int sum;
    for(int i=0;i<row;i++){
        sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            index=i;
        }
    }
    cout<<"Maximum Sum is "<<sum<<endl;
    return index;
}

int ColMaxSum(int arr[][3],int row,int col){
    int maxi=INT32_MIN;
    int index=-1;
    int sum;
    for(int i=0;i<row;i++){
        sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[j][i];
        }
        if(sum>maxi){
            maxi=sum;
            index=i;
        }
    }
    cout<<"Maximum Sum is "<<sum<<endl;
    return index;
}
// 1 2 3
// 4 5 6
// 7 8 9

vector<int> SpiralMatrix(int matrix[][3],int row,int col){
        int count=0;
        int total=row*col;
        //indexes
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int EndingCol=col-1;
        vector<int> v;
        while(count<total){
            
            //for starting row
            for(int index=startingCol;count<total && index<=EndingCol;index++){
                v.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //for ending column
            for(int index=startingRow;count<total && index<=endingRow;index++){
                v.push_back(matrix[index][EndingCol]);
                count++;
            }
            EndingCol--;
            
            //forending row
            for(int index=EndingCol;count<total && index>=startingCol;index--){
                v.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //for starting col
            for(int index=endingRow;count<total && index>=startingRow;index--){
                v.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
            
        }
        return v;
}

vector<int> wavePrint(int arr[][3], int nRows, int mCols)
{
    
    vector<int> v;
    for(int col=0;col<mCols;col++){
        if(col&1){
            //if col no is odd  bottom to top
            for(int row=nRows-1;row>=0;row--){
                v.push_back(arr[row][col]);
            }
        }
        else{
            //if col is even then top to bottom
            for(int row=0;row<nRows;row++){
                v.push_back(arr[row][col]);
            }
        }
    }
    return v;
}

int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }cout<<endl;
    }
    // print(arr,3,3);
    // printColSum(arr,3,3);
    // pair<int,int> t=FindElement(arr,3,3,8);
    // cout<<t.first<<" "<<t.second<<endl;
    // cout<<"Row maximum is "<<RowMaxSum(arr,3,3)<<endl;
    // cout<<"Col maximum is "<<ColMaxSum(arr,3,3)<<endl;
    // Traversal(arr,3,3);
    vector<int> t=wavePrint(arr,3,3);
    for(int i:t){
        cout<<i<<" ";
    }cout<<endl;
}