// rotate-array 
// https://leetcode.com/problems/rotate-array/description/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            int newPos = (i + k) % n; 
            a[newPos] = nums[i];
        }

        nums = a;
    
    }
};
