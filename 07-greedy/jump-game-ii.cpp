#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
    public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);

        for(int i=n-2;i>=0;i--) {
            if(nums[i]==0) {
                ans[i]=INT_MAX;
                continue;
            }
            int cans=INT_MAX-1;
            for(int j=i+1;j<n && j<=nums[i]+i;j++) {
                cans=min(cans,ans[j]);
            }
            ans[i]=cans+1;
        } 
        return ans[0];

    }
};
