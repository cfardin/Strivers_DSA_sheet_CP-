// Two Sum 
// https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> f;
        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];
            if(f.count(need)){
                return {f[need], i};
            }
            f[nums[i]] = i;
        }
        return {};
    }
};
