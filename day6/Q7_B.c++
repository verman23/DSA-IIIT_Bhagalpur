#include<bits/stdc++.h>
 using namespace std;
 class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right - NULL;
    }
};
int size(Node* root)
{
    if (root == NULL)
        return 0;
    else
        return(size(root->left) + 1 + size(root->right));
}
int main(){
    Node* root;
    int ans=size(root);
    cout<<ans;
    return 0;
}