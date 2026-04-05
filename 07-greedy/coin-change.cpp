#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
    public:
    vector<vector<long long>>dp;
    long long minCoin(vector<int>& coins, int amount,int i) {
        if(i>=coins.size() || amount<0) {
            return INT_MAX;
        }

        if(amount==0) return 0;
        if(dp[i][amount]!=-1)return dp[i][amount];

        long long take=0,notTake=0;
        take=1+minCoin(coins,amount-coins[i],i);
        notTake=minCoin(coins,amount,i+1);
        return dp[i][amount]=min(take,notTake);
    }

    int coinChange(vector<int>& coins, int amount) {
        dp.resize(coins.size()+1,vector<long long>(amount+1,-1));
        long long ans=minCoin(coins,amount,0);
        return ans==INT_MAX?-1:ans;
    }
};
