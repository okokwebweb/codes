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

