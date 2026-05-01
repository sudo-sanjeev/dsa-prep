#include <algorithm>
#include <climits>

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
    int ans=INT_MIN;

    int dfs(TreeNode* root) {
        if(!root)return 0;

        int ls=max(0,dfs(root->left));
        int rs=max(0,dfs(root->right));
        ans=max(ans,ls+rs+root->val);

        return root->val+max(ls,rs);
    }

    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
