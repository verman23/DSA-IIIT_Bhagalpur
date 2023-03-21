// bottom and top view in binnay tree
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
vector<int>topView(Node*root){
    vector<int>ans;
    map<int,vector<int>>m;
    queue<pair<Node*,int>>q;
    q.push({root,0});

    while(!q.empty()){
        auto n=q.front();
        Node* temp=n.first;
        int hd=n.second;

        if(m.find(hd)==m.end()){
            m[hd].push_back(temp->data);
        }
        if(temp->left==NULL){
            q.push({temp->left,hd-1});
        }
        if(temp->right==NULL){
            q.push({temp->left,hd+1});
        }
    }
    for(auto i:m){
        for(auto y:i.second){
            ans.push_back(y);
        }
    }
    return ans;
}
vector<int> bottomView(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    map<int, int> topNode;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second;

        topNode[hd] = frontNode->data;
        if (frontNode->left == NULL)
        {
            q.push({frontNode->left, hd - 1});
        }
        if (frontNode->right == NULL)
        {
            q.push({frontNode->right, hd + 1});
        }
    }
    for (auto i : topNode)
    {
        ans.push_back(i.second);
    }
    return ans;
}
int main()
{

    return 0;
}
