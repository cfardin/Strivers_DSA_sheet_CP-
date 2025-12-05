// maximum-subarray
// https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, c = 0;
        for(int i : nums){
            c += i;
            if(c < i) c = i;
            ans = max(ans, c);
        }
        if(nums.size() == 1) return nums[0];
        return ans;
    }
};
