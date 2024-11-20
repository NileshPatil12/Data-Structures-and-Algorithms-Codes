#include <iostream>
#include <vector>
#include<stack>
#include<queue>

using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *insert()
{
    int data;
    cout << "Enter Data :- ";
    cin >> data;
    node* temp = new node(data);
    if (data == -1)
    {
      return NULL;   
    }
    cout<<"in left of "<<data<<" ";
    temp->left = insert();
    cout<<"in right of "<<data<<" ";
    temp->right = insert();
    return temp;
}

void breadthFirst(node *root)
{
    queue<node *> r;
    r.push(root);
    r.push(NULL);
    while (!r.empty())
    {
        node *temp = r.front();
        r.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (r.empty())
            {
                r.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                r.push(temp->left);
            }
            if (temp->right)
            {
                r.push(temp->right);
            }
        }
    }
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

vector<int> inorderInterate(node* root){
    vector<int> v;
    stack<node*> st;
    st.push(root);
    while(!st.empty() && root!=NULL){
            if(root!=NULL){
                st.push(root);
                root=root->left;
            }
            else{
                root=st.top();
                st.pop();
                v.push_back(root->data);
                root=root->left;
            }
    }
    return v;

}


void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

vector<int> preorderIterate(node* root){
    vector<int> v;
    stack<node*> st;
    if(root==NULL){
        return v;
    }
    st.push(root);
    while(!st.empty()){
        node* temp=st.top();
        st.pop();
        v.push_back(temp->data);
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
    }
    return v;
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root;
    root = insert();

    // breadthFirst(root);
    // cout<<endl;
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
}