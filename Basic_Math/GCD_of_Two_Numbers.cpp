// GCD of Two Numbers 
// https://takeuforward.org/plus/dsa/problems/gcd-of-two-numbers

class Solution {
public:
    int GCD(int n1,int n2) {
        return gcd(n1, n2);
    }

// Euclidean Algorithm
    int gcd(int a, int b){
        if(b == 0) return a;
        else return gcd(b, a % b);
    }
};
