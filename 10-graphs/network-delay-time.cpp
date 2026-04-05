#include <vector>
#include <algorithm>
#include <queue>
#include <climits>

using namespace std;

class Solution {
    public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>g(n+1);
        vector<int>dis(n+1,1e9);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto a:times) {
            g[a[0]].push_back({a[1],a[2]});
        }
        pq.push({0,k});
        dis[k] = 0;

        while(!pq.empty()) {
            int node=pq.top().second, d=pq.top().first;
            pq.pop();
            if(dis[node]<d)continue;
            for(auto a:g[node]) {
                if(dis[a.first]>dis[node]+a.second) {
                    dis[a.first]=dis[node]+a.second;
                    pq.push({dis[a.first],a.first});
                }
            }
        }
        int ans=INT_MIN;
        for(auto i=1;i<dis.size();i++)ans=max(ans,dis[i]);
        return ans==1e9?-1:ans;
    }
};
