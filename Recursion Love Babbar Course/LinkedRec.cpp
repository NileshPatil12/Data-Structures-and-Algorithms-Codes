#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int d=this->data;
        this->next=NULL;
        delete next;
        cout<<"Deleted data is "<<d<<endl;
    }
};
void InsertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* & tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node* &head,int pos,int data,Node* &tail){
    Node* temp=head;
    int cnt=1;
    if(pos==1){
        InsertAtHead(head,data);
        return;
    }
    while(cnt!= pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }
    Node* NodeToInsert=new Node(data);
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;
}
void DeleteAtPos(Node* &head,Node* &tail,int pos){
    int cnt=1;
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    } 
    Node* cur=head;
    Node* prev=NULL;
    while(cnt<pos){
        cnt++;
        prev=cur;
        cur=cur->next;
    }
    if(cur->next==NULL){
        tail=prev;
    }
    prev->next=cur->next;
    cur->next=NULL;
    delete cur;
}


void recurTrav(Node* head){
    if(head==NULL) return;
    cout<<head->data<<"->";
    recurTrav(head->next);
}


void printKthNode(Node* head,int& k){
    if(head==NULL){
        return;
    }
    printKthNode(head->next,k);
    k--;
    if(k==0){
        cout<<head->data<<endl;
    }
}

Node* reverseRec(Node* head){
    // approach 1
    if(head==NULL || head->next==NULL) return head;

    Node* newHead=reverseRec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}
Node* reverseRec2(Node* curr,Node* prev){
    if(curr->next==NULL){
        curr->next=prev;
        return curr;
    }
    Node* frw=curr->next;
    curr->next=prev;
    // prev=curr;
    // curr=frw;
    reverseRec2(frw,curr);
}

Node* reverseKLink(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    Node* prev=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        Node* frw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=frw;
        count++;
    }
    if(curr)
        head->next=reverseKLink(curr,k);
    return prev;
}
int main()
{
    Node* head;
    Node* tail;
    head=new Node(1);
    tail=head;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    insertAtTail(tail,8);
    recurTrav(head);cout<<endl;
    // int k=3;
    // printKthNode(head,k);
    // head=reverseRec2(head,NULL);
    head=reverseKLink(head,2);
    recurTrav(head);cout<<endl;
}