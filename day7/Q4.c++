// Spiral or zig-zag traversal in binary tree
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
vector<int> spiral(Node *root)
{
    vector<int> result;
    // base condition
    if (root == NULL)
        return result;
    queue<Node *> q;
    q.push(root);
    bool LeftToRight = true;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> res(size);
        for (int i = 0; i < size; i++)
        {
            Node *temp = q.front();
            q.pop();
            int index = LeftToRight ? i : size - i - 1;
            res[index] = temp->data;

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->left);
            }
        }
        LeftToRight=!LeftToRight;

        for(auto i:res){
            result.push_back(i);
        }
    }
    return result;
}
int main()
{
    Node *root;
    vector<int> ans = spiral(root);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}