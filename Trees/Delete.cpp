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

int minimum(Node* root)
{
    if(root==NULL)
    return -1;
    while(root->left!=NULL)
    root=root->left;
    return root->data;
}

Node* deleteFromBST(Node* root,int val)
{
    if(root==NULL)
    return root;
    if(root->data==val)
    {
        // 0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        
        //1 child
        
        //left child
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left==NULL && root->right!=NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left!=NULL && root->right!=NULL)
        {
            int mini=minimum(root->right);
            root->data=mini;
            root->right= deleteFromBST(root->right,mini);
            return root;
        }
    }
    else if(root->data>val)
    {
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else
    {
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}