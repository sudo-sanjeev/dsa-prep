#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,ans=0;
        while(i<nums.size()) {
            if(nums[i]==0)k--;
            while(k<0) {
                if(nums[j]==0)k++;
                j++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};
