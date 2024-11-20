#include<iostream>
using namespace std;
class stack{
    public:
    int top=-1;
    int stack[INT8_MAX];

    void push(int x){
        stack[++top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"\nThe stack is empty";
        }
        else{
            top--;
        }
    }

    int first(){
        return stack[top--];
    }

    void display(){
        for(int i=0;i<=top;i++){
            cout<<" "<<stack[i];
        }
    }
};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    // s.display();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    s.push(12);
    s.display();
    stack d;
    while(s.top!=-1){
        d.push(s.first());
    }cout<<endl;
    d.display();
}
