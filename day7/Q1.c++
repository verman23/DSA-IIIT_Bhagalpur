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
bool search(Node *root, int key)
{
    // base codition
    if (root == NULL)
        return false;

    if (root->data == key)
        return true;
    else if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}
Node *deleteNode(Node *root, int key)
{
    if (root == nullptr)
        return nullptr;

    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *curr = root->right;
            while (curr->left != NULL)
            {
                curr->left;
            }
            root->right = curr->left;
            root->right = deleteNode(root, curr->data);
            return root;
        }
    }
}
Node *insertNode(Node *root, int key)
{
    if (root == NULL)
        return new Node(key);

    if (key < root->data)
    {
        root->left = insertNode(root->left, key);
    }
    else
    {
        root->right = insertNode(root->right, key);
    }
    return root;
}
int main()
{
    Node *root;
    int x;
    cin >> x;
    search(root, x);
    return 0;
}