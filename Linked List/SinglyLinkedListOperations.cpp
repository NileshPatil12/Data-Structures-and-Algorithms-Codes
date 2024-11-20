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

void deleteAthead(node* &head){
    node* temp=head;
    head=head->next;
    delete temp;
}

void deleteAtEnd(node* &head){
    node* temp=head;
    if(head==NULL){
        cout<<"Head is nuLL we cant do anything at all \n";
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
    }
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    node* temp1=temp->next;
    temp->next=NULL;
    delete temp1;
}

void deleteAtPos(int pos,node* &head){
        node* temp=head;
        
        if(head==NULL){
            cout<<"The head is nUll";
        }
        
        if(pos==1){
             head=head->next;
             delete temp;
             return ;
        }
        
        int i=1;
        while(i< (pos-1))
        {
            temp=temp->next;
            i++;
        }
        
        node* temp1=temp->next;
        temp->next=temp->next->next;
        delete temp1;
       
}

void insertAtFront(int data,node* &head){
    node* temp=new node(data);
    
    temp->next=head;
    head=temp;

}

void insertAtend(int data,node* &head){
    node* temp=new node(data);
    if(head==NULL){
        head=temp;
        return;
    }
    node* r=NULL;
    r=head;
    if(r->next==NULL){
        r->next=temp;
    }
    while(r->next!=NULL){
        r=r->next;
    }
    r->next=temp;

}

void InsertAtIndex(int index,int data,node* &head){
    node* i=new node(data);
    node* temp=head;
    if(index==1){
        insertAtFront(data,head);
    }
    int j=1;
    while(j< index-1){
        temp=temp->next;
        j++;
    }
    i->next=temp->next;
    temp->next=i;
    
}

void print(node* root){
    node* temp=root;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int NoOfNodes(node* head){
    node* temp=head;
    int count=0;
    while(temp){
        temp=temp->next;
        count++;

    }
    return count;
}

void joint(node* &head,node* &head2){
    node* temp1=head;
    node* temp2=head2;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=head2;
    // print(head);
}

void reverse(node* &head){
    node* prev;
    node* curr;
    node* next1;
    curr=head;
    next1=NULL;
    prev=NULL;
    if(head==NULL){
        cout<<"Input list ins null";
    }
    else if(head->next==NULL){
        cout<<"It has only one element in the list";
    }
    else{
        while(curr!=NULL){
            next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        head=prev;
    }
}

int main()
{
    node* head=new node(1);
    insertAtFront(2,head);
    print(head);cout<<endl;
    insertAtend(3,head);
    print(head);cout<<endl;
    InsertAtIndex(3,4,head);
    print(head);
    InsertAtIndex(1,5,head);cout<<endl;
    print(head);
    cout<<endl;
    cout<<NoOfNodes(head)<<endl;
    deleteAthead(head);
    print(head);
    deleteAtEnd(head);
    cout<<endl;
    print(head);
    deleteAtPos(3,head);
    cout<<endl;
    print(head);
    node* temp1=NULL;
    insertAtFront(12,temp1);
    cout<<endl;
    print(temp1);
    joint(head,temp1);cout<<endl;
    print(head);cout<<"\nThis isthe data of head";
    cout<<head->data;cout<<endl;
    reverse(head);
    cout<<"\nThis isthe data of head";
    cout<<head->data;cout<<endl;
    print(head);

}