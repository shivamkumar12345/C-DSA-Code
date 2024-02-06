#include<iostream>
using namespace std;
class TreeNode{
     public:
    int val;
    TreeNode * left;
    
    TreeNode * right;
   
    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};
TreeNode* constructATree(){
    int x; cin>>x;
    if(x == -1){
        return NULL;
    }
    TreeNode * root = new TreeNode(x);

    root->left = constructATree();
    root->right = constructATree();
    return root;

}
void PreOrder(TreeNode * root){
    if(root == NULL){
        cout<< -1<< " ";
        return;
    }
    cout<<root->val << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}


void InOrder(TreeNode * root){
    if(root == NULL){
        cout<< -1<< " ";
        return;
    }
    InOrder(root->left);
    cout<<root->val << " ";
    InOrder(root->right);
}
void PostOrder(TreeNode * root){
    if(root == NULL){
        cout<< -1<< " ";
        return;
    }
    PostOrder(root->right);
    PostOrder(root->left);
    cout<<root->val << " ";
}
int main(){
    TreeNode* root = constructATree();
    PreOrder(root);
    cout<<endl;
    InOrder(root);
}