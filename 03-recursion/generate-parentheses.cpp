#include <vector>
#include <string>

using namespace std;

class Solution {
    public:
    
    vector<string>ans;
    void dfs(int n,string &cur,int openCount, int closeCount) {
        if(openCount==n && closeCount==n){
            ans.push_back(cur);
            return;
        }

        if(openCount<n) {
            cur.push_back('(');
            dfs(n,cur,openCount+1,closeCount);
            cur.pop_back();
        }
        if(closeCount<openCount) {
            cur.push_back(')');
            dfs(n,cur,openCount,closeCount+1);
            cur.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string cur="";
        dfs(n,cur,0,0);
        return ans;
    }
};
