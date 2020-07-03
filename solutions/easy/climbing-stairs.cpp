class Solution {
public:
    int climbStairs(int n) {
        if(n < 3) return n;
        int i = 1;
        int j = 2;
        for(int k=3; k<=n; k++){
            j = i+j;
            i = j-i;
        }
        return j;
    }
};