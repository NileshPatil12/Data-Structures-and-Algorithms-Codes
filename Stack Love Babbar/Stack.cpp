#include<iostream>
using namespace std;
class stack
{
    public:
    int top;
    int *arr;
    int size;

    stack(int size){
        this->size=size;
        arr=new int(size);
        top=-1;
    }

    void push(int data){
        if(size-top >1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Size of stack is full"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return false;
        }
        else{
            return true;
        }
    }
};


int main()
{
    stack a(10);
    a.push(10);
    a.push(12);
    cout<<a.peek()<<endl;
    cout<<a.isEmpty()<<endl;
    a.pop();
    cout<<a.peek()<<endl;
}