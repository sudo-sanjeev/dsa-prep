#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
    vector<int>dp;
    int dfs(vector<int>&nums,int i) {
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int take=nums[i]+dfs(nums,i-2);
        int notTake=dfs(nums,i-1);
        return dp[i]=max(take,notTake);  
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        dp=vector<int>(n,-1);
        return dfs(nums,n-1);
    }
};
