/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    int dfs(TreeNode* root, int maxs){
        if(root==NULL){
            return 0;
        }

        int good=0;
        
        if(root->val>= maxs){
            good=1;
        }
            int left=dfs(root->left,max(maxs, root->val) );

            int right=dfs(root->right,max(maxs, root->val) );

            return good+left+right;
        

     
    }

    int goodNodes(TreeNode* root) {
        return dfs(root, INT_MIN);
    }
};
