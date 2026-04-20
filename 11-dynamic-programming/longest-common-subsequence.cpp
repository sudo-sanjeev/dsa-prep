#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    public:
    vector<vector<int>>dp;
    int subSequence(string &s1,string &s2,int i, int j) {
        if(i>=s1.size() || j>=s2.size()) {
            return 0;
        }

        if(dp[i][j]!=-1)return dp[i][j];

        if(s1[i]==s2[j]) {
            return dp[i][j]=1+subSequence(s1,s2,i+1,j+1);
        }
        return dp[i][j]=max(subSequence(s1,s2,i+1,j),subSequence(s1,s2,i,j+1));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(),m=text2.size();
        dp.resize(n+1,vector<int>(m+1,-1));
        return subSequence(text1,text2,0,0);
    }
};
