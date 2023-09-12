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

        //babbar hug diya bhenchod!
        //striver ki jai!!

        //niche waala use nahi karenge

        // if(root->left!=NULL && root->right!=NULL)
        // {
        //     int mini=minimum(root->right);
        //     root->data=mini;
        //     root->right= deleteFromBST(root->right,mini);
        //     return root;
        // }

        //yaha tak ka not used

        //YE WAAL HE USE KARENGE
        //ISME NO MINI AUR MAXI SIDHA RIGHT SUBTREE KO LEFT SUBTREE KE RIGHT MOST NODE PE LAGA DENGE AUR RETURN KAR DENGE ROOT->LEFT KO BHENCHOD!
        if(root->left!=NULL && root->right!=NULL)
            {
                
                Node* temp=root->right;
                Node* actual = root->left;
                while(actual->right!=NULL)
                actual=actual->right;

                actual->right=temp;

                actual=root->left;
                
                delete root;
                return actual;
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
