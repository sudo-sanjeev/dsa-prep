#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
    
        bool check(long long m,vector<int>& piles,long long h) {
            long long count=0;
            for(auto a:piles) {
                count+=(a+m-1)/m;
            }
            return count<=h;
        }
    
        int minEatingSpeed(vector<int>& piles, int h) {
            long long low=1,high=1;
            for(auto a:piles) {
                high=max(high,1LL*a);
            }
            long long ans=high;
            while(low<=high) {
                long long mid=(low+high)/2;
    
                if(check(mid,piles,h)) {
                    ans=mid;
                    high=mid-1;
                } else {
                    low=mid+1;
                }
            }
            return ans;
        }
    };
