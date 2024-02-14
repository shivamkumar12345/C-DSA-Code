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
int height(TreeNode * root){
    if(root == NULL)return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh) +1;
}
int diameter(TreeNode * root){
    if(root == NULL)return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    int curr_dia = lh + rh;
    int ld =diameter(root->left);
    int rd = diameter(root->right);
    return max(max(ld,rd),curr_dia);

}
int optimiseDiameter(TreeNode * root, int &max_diameter){
    if(root==NULL){
        return 0;
    }
    int left = optimiseDiameter(root->left, max_diameter);
    int right = optimiseDiameter(root->right, max_diameter);
    int curr_dia = left + right;
    max_diameter = max(max_diameter, curr_dia);
    return max(left , right) +1;
}
int main(){
    TreeNode* root = constructATree();
    cout<<height(root);
    int diameter =0;
    optimiseDiameter(root, diameter);
    cout<<diameter;
}