// Reverse an array 
// https://takeuforward.org/plus/dsa/problems/reverse-an-array

class Solution{
public:
    void reverse(int arr[], int n){
        re(arr, 0, n-1);
    }


    void re(int arr[], int s, int e){
        if(s >= e) return;
        swap(arr[s], arr[e]);
        re(arr, s+1, e-1);
    }
};

