#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
    public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX,ans=0;
        for(auto a:prices) {
            mn=min(mn,a);
            ans=max(ans,a-mn);
        }
        cout<<mn<<endl;
        return ans;
    }
};
