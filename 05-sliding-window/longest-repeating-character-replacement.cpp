#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
    public:
    int characterReplacement(string s, int k) {
        vector<int>vis(26,0);
        int i=0,j=0,ans=0,maxfrq=0;
        while(i<s.size()) {
            vis[s[i]-'A']++;
            maxfrq=max(maxfrq,vis[s[i]-'A']);
            while(i-j+1-maxfrq>k){
                vis[s[j]-'A']--;
                j++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};
