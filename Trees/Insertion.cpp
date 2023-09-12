// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    
    public:
    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

Node* insertIntoBST(Node* root,int value)
{
    if(root==NULL)
    {
        root = new Node(value);
        return root;
    }
    if(value>root->data) //If value bada then the root waala value then go to the right subtree
    root->right=insertIntoBST(root->right,value);
    else        //If value chota then the root waala value then go to the left subtree
    root->left=insertIntoBST(root->left,value);
    
    return root;
}



void input(int n,Node* &root)
{
    for(int i=1;i<=n;i++)
    {
        int inp;
        cin>>inp;
        root = insertIntoBST(root,inp);
    }
}

int main() {
    Node* root=NULL;
    int t;
    cin>>t;
    input(t,root);
}