// longest-consecutive-sequence
// https://leetcode.com/problems/longest-consecutive-sequence/description/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int ans = 0, c = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]) continue; 
            if(nums[i] == nums[i-1] + 1){
                c++;
            }
            else{
                ans = max(ans, c);
                c = 0;
            }
        }
        ans = max(ans, c);
        return ++ans;
    }
};
