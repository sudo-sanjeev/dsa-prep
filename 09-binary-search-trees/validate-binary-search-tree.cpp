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
        bool ans=true; 
        void dfs(TreeNode *root,long long low,long long high){
            if(!root || !ans)return;
    
            if(root->val<=low || root->val>=high) {
                ans=false;
                return;
            }
            dfs(root->left,low,root->val);
            dfs(root->right,root->val,high);
        }
        bool isValidBST(TreeNode* root) {
            dfs(root,LLONG_MIN,LLONG_MAX);
            return ans;
        }
    };
