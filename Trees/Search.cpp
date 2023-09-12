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

//recursive searching and space complexity jyada hai

bool searchInBST(Node* root,int x)
{
    if(root==NULL);
    return false;
    if(root->data==x)
    return true;
    if(root->data>x)
    return searchInBST(root->left,x);
    else
    return searchInBST(root->right,x);
}

// iterative searching

bool search(Node* root,int x)
{
    while(root!=NULL)
    {
        if(root->data==x)
        return true;
        if(root->data>x)
        root=root->left;
        else
        root=root->right;
    }
    return false;
}
