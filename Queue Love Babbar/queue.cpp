#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"The size of queue is "<<q.size()<<endl;

    cout<<"The front element is "<<q.front()<<endl;
    q.pop();
    cout<<"The front element is "<<q.front()<<endl;
    q.pop();
    cout<<"The front element is "<<q.front()<<endl;
    q.pop();
    cout<<"The size of queue is "<<q.size()<<endl;
    q.push(10);
    if(q.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
}