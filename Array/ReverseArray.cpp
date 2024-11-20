#include <iostream>
using namespace std;
void reverse(int A[],int start,int end)
{
    for(int i=start;i<end;i++){
        int temp=A[i];
        A[i]=A[end];
        A[end]=temp;
        end--;
    }
}

int main() {
	int t;
	cin>>t;
	while(t){
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    reverse(A,0,N-1);
	    for(int i=0;i<N;i++){
	        cout<<A[i]<<" ";
	    }
	    t--;
	}
	return 0;
}