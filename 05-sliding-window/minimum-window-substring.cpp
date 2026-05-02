#include <string>
#include <unordered_map>
#include <climits>

using namespace std;

class Solution {
    public:
    string minWindow(string s, string t) {
        int i=0,j=0,ans=INT_MAX,count=t.size(),start=0;
        unordered_map<int,int>mp;
        for(auto a:t)mp[a]++;

        while(i<s.size()) {
            if(mp[s[i]]>0) {
                count--;
            }
            mp[s[i]]--;
            while(count<=0) {
                int temp=i-j;
                if(temp<ans) {
                    ans=temp;
                    start=j;
                }
                mp[s[j]]++;
                if(mp[s[j]]>0)count++;
                j++;
            }
            i++;
        }

        return ans==INT_MAX?"":s.substr(start,ans+1);
    }
};
