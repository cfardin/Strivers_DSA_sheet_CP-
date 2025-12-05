// missing-number 
// https://leetcode.com/problems/missing-number/description/

typedef long long ll;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       ll n = nums.size();
       ll sum = n*(n + 1) / 2;
       ll c_sum = accumulate(nums.begin(), nums.end(), 0ll);

       return sum - c_sum;

    }
};
