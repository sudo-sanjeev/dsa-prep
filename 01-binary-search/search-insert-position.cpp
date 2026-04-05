#include <vector>

using namespace std;

class Solution {
    public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,ans=-1;
        while(low<=high) {
            int mid=(low+high)/2;

            if(nums[mid]==target)return mid;

            if(nums[mid]<target) {
                low=mid+1;
                ans=mid;
            } else {
                high=mid-1;
            }
        }
        return ans+1;
    }
};
