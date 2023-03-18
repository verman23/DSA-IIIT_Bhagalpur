#include <bits/stdc++.h>
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
vector<int> verticalTraversal(Node *root)
{
    vector<int> result;
    if (root == NULL)
        return {};
    map<int, vector<int>> m;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        auto n = q.front();
        q.pop();
        Node *curr = n.first;
        int HD = n.second;
        m[HD].push_back(curr->data);

        if (curr->left != NULL)
        {
            q.push({curr->left, HD - 1});
        }
        if (curr->right != NULL)
        {
            q.push({curr->right, HD + 1});
        }
    }
    for (auto &i : m)
    {
        result.insert(result.end(), i.second.begin(), i.second.end());
    }
    return result;
}
int main()
{
    Node *root;
    vector<int> v = verticalTraversal(root);
    for (auto i :v){
        cout<<i<<" ";
    }
    cout<<endl;
        return 0;
}