#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
    public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int ans=INT_MAX;
        while(low<=high) {
            int mid=(low+high)/2;
            if(nums[mid]>=nums[low]) {
                ans=min(nums[low],ans);
                low=mid+1;
            } else {
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};
