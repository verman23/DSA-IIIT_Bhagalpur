// max path sum in binary tree
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
int res = INT_MIN;
int maxsum(Node *root)
{
    // base condition
    if (root == NULL)
        return 0;

    int ls = max(0, maxsum(root->left));
    int rs = max(0, maxsum(root->right));
    int ans = max(ls, rs) + root->data;
    int temp = ls + rs + root->data;
    res = max(res, temp);
    return ans;
}
int main()
{
    Node *root;
    maxsum(root);
    cout << res << endl;
    return 0;
}