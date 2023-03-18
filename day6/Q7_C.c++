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
int res=INT_MIN;
int diameter(Node* root){
  //base condition
  if(root==NULL)
  return 0;

  int lh=diameter(root->left);
  int rh=diameter(root->right);
   int ans=max(lh,rh)+1;
   int temp=lh+rh+1;
   res=max(res,temp);
   return ans;
}
int main(){
    Node* root;
   diameter(root);
    cout<<res;
    return 0;
}