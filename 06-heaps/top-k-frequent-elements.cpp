#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            unordered_map<int,int>mp;
            vector<int>ans;
            for(auto a:nums)mp[a]++;
            
            for(auto a:mp) {
                pq.push({a.second,a.first});
                while(pq.size()>k)pq.pop();
            }
            
            while(!pq.empty()) {
                ans.push_back(pq.top().second);
                pq.pop();
            }
            return ans;
        }
    };
