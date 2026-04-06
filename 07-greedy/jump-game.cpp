#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)return true;

        int reach=nums[0];
        for(int i=1;i<=reach;i++) {
            reach=max(reach,i+nums[i]);
            if(reach>=nums.size()-1)return true;
        }
        return false;
    }
};
