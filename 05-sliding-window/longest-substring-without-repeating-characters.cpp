#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int n=s.size();
        int i=0,j=0,ans=1;
        unordered_map<char,int>mp;
        while(i<n) {
            if(mp.find(s[i])!=mp.end()) {
                j=max(mp[s[i]]+1,j);
            }
            mp[s[i]]=i;
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};
