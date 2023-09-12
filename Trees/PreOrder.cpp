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

void PreOrder( Node* root)
{
    cout<<root->data;
    if(root->left!=NULL)
    PreOrder(root->left);
    if(root->right!=NULL)
    PreOrder(root->right);
}