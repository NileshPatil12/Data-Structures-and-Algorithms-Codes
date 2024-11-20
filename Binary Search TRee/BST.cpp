#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* insertInBst(node* &root,int data){
        if(root==NULL){
            root=new node(data);
            return root;
        }

        if(data > root->data){
            root->right=insertInBst(root->right,data);
        }
        else{
            root->left=insertInBst(root->left,data);
        }
        return root;
}

void input(node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root=insertInBst(root,data);
        cin>>data;
    }
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node* root=NULL;
    input(root);
   
    inorder(root);
    cout<<endl;
}