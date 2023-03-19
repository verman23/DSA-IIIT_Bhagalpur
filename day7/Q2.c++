// find floor and ceiling in binary tree
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
};
int res=0;
int ans=0;
int floor(Node *root, int key)
{
    // base condition
    // if(root==NULL) return 0;
    if (!root)
        return 0;
    while (!root)
    {
        if (root->data == key) return root->data;
        
        if(key<root->data) root=root->left;
        else if(key>root->data){
            res=root->data;
            root=root->right;
        }
    }
    return res;
}
int ceil(Node *root, int key)
{
    // base condition
    // if(root=NULL) return 0;
    if (!root)
        return 0;
    while (!root)
    {
        if (root->data == key) return root->data;

        if(key<root->data) {
            ans=root->data;
            root=root->left;
        }
        else if(key>root->data){
            root=root->right;
        }
    }
    return ans;
}
int main()
{
    Node *root;
    int key;
    cout << floor(root, key);
    cout << ceil(root, key);
    return 0;
}