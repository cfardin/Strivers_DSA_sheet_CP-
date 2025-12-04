// Counting Frequencies of Array Elements
// https://takeuforward.org/plus/dsa/problems/counting-frequencies-of-array-elements

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        map<int, int> f;
        for(int i : nums){
            f[i]++;
        }
        vector<vector<int>> ans; 
        for(auto i : f){
            ans.push_back({i.first, i.second});
        }
        return ans;
    }
};
