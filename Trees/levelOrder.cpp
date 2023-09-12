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

vector<int> levelOrder(Node* root)
{
    vector<int> ans;
    if(root==NULL)
    return ans;
    
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* top = q.front();
        q.pop();
        if(top->left!=NULL)
        q.push(top->left);
        if(top->right!=NULL)
        q.push(top->right);

        ans.push_back(top->data);
    }

    return ans;
}