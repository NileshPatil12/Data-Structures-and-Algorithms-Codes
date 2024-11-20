#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~node(){
        cout<<"\n Node we are deleting ";
        cout<<this->data<<"\nthis is where we end this story for now for this node";
        this->next=NULL;
        this->prev=NULL;
    }

};
void insertAtHead(node* & head,int data){
    node* temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void deleteAtTail(node* &head){
    node* temp=head;
    node* prev=NULL;
    if(head==NULL){
        cout<<"Its NULL";
    }
    else if(head->next==NULL){
        head=NULL;
        delete temp;
    }
    else{
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        delete temp;
    }
}

void deleteAtHead(node* &head){
    node* temp=head;
    if(head==NULL){
        cout<<"So there is no node in the Linked List\n";
    }
    else if(head->next==NULL){
        head=NULL;
        delete temp;
    }
    else{
        head=head->next;
        head->prev=NULL;
        delete temp;
    }
}

void insertAtTail(node* &head,int x){
    node* temp=new node(x);
    node* temp1=head;
    if(head==NULL){
        head=temp;
    }
    else if(head->next==NULL){
        head->next=temp;
        temp->prev=head;
    }
    else{
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->prev=temp1;
    }
}
void print(node* &head){
    cout<<endl;
    if(head==NULL){
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    
}


int main(){
    node* head=new node(1);
    // cout<<head->data<<" "<<head->prev<<" "<<head->next;
    insertAtHead(head,23);
    print(head);
    insertAtTail(head,11);
    print(head);
    insertAtHead(head,12);
    insertAtTail(head,13);
    print(head);
    deleteAtHead(head);
    print(head);
    deleteAtTail(head);
    print(head);

}