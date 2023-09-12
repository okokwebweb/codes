#include<bits/stdc++.h>
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

//approach one
// inorder of a bst is sorted

void InOrder( Node* root)
{
    if(root->left!=NULL)
    InOrder(root->left);
    cout<<root->data;
    if(root->right!=NULL)
    InOrder(root->right);
}

// approach two
bool isBST(Node* root,int max,int min)
{
    if(root==NULL)
    return true;

    if(root->data>min && root->data<max)
    {
        bool left= isBST(root->left,root->data,min);
        bool right = isBST(root->right,max,root->data);
        return left && right;
    }

    return false;

}