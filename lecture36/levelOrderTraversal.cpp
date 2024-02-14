#include<iostream>
#include<queue>
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
void levelOrder(TreeNode * root) {
    queue<TreeNode *>q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        // cout<<q.front()->val<<" ";
        while(size--){
            TreeNode *r = q.front();  q.pop();
            //  cout<<r->val<<" ";

            if(r->left !=NULL){
                q.push(r->left);
            }
            if(r->right !=NULL){
                q.push(r->right);
            }

        }
        
        cout<<q.front()->val<<" ";
    }
 }

int main(){
    TreeNode* root = constructATree();
    levelOrder(root);
   
}