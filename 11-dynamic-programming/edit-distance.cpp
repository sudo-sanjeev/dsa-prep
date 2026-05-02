#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    public:
    int dfs(string& a, string& b, int i, int j, vector<vector<int>>& dp) {
        if (i == a.size()) return b.size() - j;
        if (j == b.size()) return a.size() - i;

        if (dp[i][j] != -1) return dp[i][j];

        if (a[i] == b[j])
            return dp[i][j] = dfs(a, b, i+1, j+1, dp);

        return dp[i][j] = 1 + min({
            dfs(a, b, i, j+1,dp),     // insert
            dfs(a, b, i+1, j,dp),     // delete
            dfs(a, b, i+1, j+1,dp)    // replace
        });
    }

    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return dfs(word1, word2, 0, 0, dp);
    }
};
