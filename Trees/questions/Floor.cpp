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

int floor(Node* root ,int key)
{
    int floor=-1;

    while(root)
    {
        if(root->data==key)
        return key;

        if(root->data>key)
        root=root->left;
        else
        {
            floor=root->data;
            root=root->right;
        }
    }

    return floor;
}