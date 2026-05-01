#include <algorithm>

using namespace std;

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
    pair<int,int> dfs(TreeNode *root) {
        if(!root)return {0,0};

        auto [lh,ld]=dfs(root->left);
        auto [rh,rd]=dfs(root->right);
        int height=1+max(lh,rh);
        int diameter=max({ld,rd,lh+rh});

        return {height,diameter};
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return dfs(root).second;
    }
};
