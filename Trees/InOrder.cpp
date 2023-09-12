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

void InOrder( Node* root)
{
    if(root->left!=NULL)
    InOrder(root->left);
    cout<<root->data;
    if(root->right!=NULL)
    InOrder(root->right);
}