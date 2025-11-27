// Armstrong_Number 
// https://takeuforward.org/plus/dsa/problems/check-if-the-number-if-armstrong

class Solution {
public:
    bool isArmstrong(int n) {
        int x = n;
        string s = to_string(n);
        int ans = 0;
        while(x != 0){
            int re = x % 10;
            ans += pow(re, s.size());
            x /= 10;
        }

        if(ans == n) return true;
        else return false;
    }
};
