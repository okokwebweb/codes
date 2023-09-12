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

int findCeilf(Node* root,int key)
{
    int ceil=-1;
    while(root)
    {
        if(root->data==key)
        return key;
        
        if(root->data<key)
        root=root->right;
        else{
            ceil=root->data;
            root=root->left;
        }
    }

    return ceil;
}