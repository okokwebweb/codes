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

// method one
int kthSmallestEle(Node* root,int& i,int k)
{
    if(root==NULL)
    return -1;
    
    //left side
    int left =kthSmallestEle(root->left,i,k);
    if(left!=-1)
    {
        return left;
    }

    //root node
    if(i==k)
    return root->data;

    //right side recursive call
    return kthSmallestEle(root->right,i,k);
}

//method two using inorder
//inorder ke wo waale ele number = answer