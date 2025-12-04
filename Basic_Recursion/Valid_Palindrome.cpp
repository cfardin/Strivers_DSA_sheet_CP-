//  Valid Palindrome Leetcode 
// https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:
    bool isPalindrome(string s) {
        string new_s = "";
        for(char i : s){ 
            if(isalnum(i)){    /// isalnum() to check a char is a alphabet or not. 
                new_s += tolower(i);
            }
        }
        int l = 0, r = new_s.size() - 1;
        while(l < r){
            if(new_s[l] != new_s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
