// LCA-->Lowest Common Ancestor in a Binary Tree
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
        this->data;
        this->left = NULL;
        this->right = NULL;
    }
};
int lca(Node *root, int n1, int n2)
{
    //base condition
    if(root==NULL) return NULL;

    if(root->data==n1 || root->data==n2)  return root->data;
     
    int left_lca=lca(root->left,n1,n2);
    int right_lca=lca(root->right,n1,n2);

    if(left_lca!=NULL && right_lca!=NULL) return root->data;
    else if(left_lca==NULL && right_lca!=NULL) return right_lca;
    else if(left_lca!=NULL && right_lca==NULL) return left_lca;
    else return NULL;

}
int main()
{
    Node *root;
    int n1, n2;
    cin >> n1, n2;
    cout << lca(root, n1, n2) << endl;

    return 0;
}