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
int height(Node* root){
  //base condition
  if(root==NULL)
  return 0;

  int lh=height(root->left);
  int rh=height(root->right);

  int res=max(lh,rh)+1;
   return res;
}
int main(){
    Node* root;
    int ans=height(root);
    cout<<ans;
    return 0;
}