#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};

void insert(node* &head,int d){
    node* temp1=new node(d);
    if(head==NULL){
        head=temp1;
    }
    else{
        temp1->next=head;
        head=temp1;
    }
}

void addmultiple(node* &head){
    int ele;
    int num;
    cout<<"How many element dow we have to enter : ";
    cin>>num;
    while(num>0){
        cout<<"Enter an element : ";
        cin>>ele;
        insert(head,ele);
        num--;
    }
    
}

void display(node* head){
    node* temp=head;
    if(temp==NULL){
        cout<<"Stack didnt have any element ";
    }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

void Del(node* &stack){
    node* cur=stack;
    node* prev=NULL;
    int val;
    cout<<"Which do we have to delete ";
    cin>>val;
    cout<<endl;
    if(stack==NULL){
        return;
    }
    if(stack->data==val){
        stack=cur->next;
        delete cur;
        cur=NULL;
        return;
    }
    while(cur->data != val){
        prev=cur;
        if(cur->next==NULL){
            cout<<"element is not present hear"<<endl;
            return;
        }
        cur=cur->next; 
    }    
    prev->next=cur->next;
    delete cur;
    cur=NULL;  
}

int main(){
    node* stack=NULL;
    addmultiple(stack);
    cout<<"It upto this";
    display(stack);
    cout<<"Its done now";
    cout<<stack->data<<endl;
    Del(stack);
    cout<<"HEy";
    display(stack);
}