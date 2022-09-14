// 700. Search in a Binary Search Tree


class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)return root;
        if(root->val == val){
            return root;
        }
        if(root->val < val){
            return searchBST(root->right,val);
        }
        else{
            return searchBST(root->left,val);
        }
    }
};