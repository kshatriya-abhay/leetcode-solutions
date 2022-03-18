class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long int y = 0;
        long long int temp = x;
        while(x){
            y = (10 * y) + (x % 10);
            x /= 10;
        }
        return (temp == y);
    }
};