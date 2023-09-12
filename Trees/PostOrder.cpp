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

void PostOrder( Node* root)
{
    if(root->left!=NULL)
    PostOrder(root->left);
    if(root->right!=NULL)
    PostOrder(root->right);
    cout<<root->data;
}