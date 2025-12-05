// max-consecutive-ones 
// https://leetcode.com/problems/max-consecutive-ones/description/ 

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), c(0), ans(0);
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                ans = max(ans, c);
                c = 0;
            }
            else c++;
        }
        ans = max(ans, c);
        return ans;
    }
};
