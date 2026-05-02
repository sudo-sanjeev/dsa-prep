#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
    
    int dfs(vector<int>&nums,int i,int pre,vector<vector<int>>&dp) {
        if(i>=nums.size())return 0;
        if(dp[i][pre+1]!=-1)return dp[i][pre+1];
        int take=0,notTake=0;
        notTake=dfs(nums,i+1,pre,dp);
        if(pre==-1 || nums[i]>nums[pre]) take=1+dfs(nums,i+1,i,dp);

        return dp[i][pre+1]=max(take,notTake);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return dfs(nums,0,-1,dp);
    }
};
