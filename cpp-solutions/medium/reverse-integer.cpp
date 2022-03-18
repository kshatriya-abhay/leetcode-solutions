class Solution {
public:
    int reverse(int x) {
        if(x == INT_MIN) return 0;
        bool neg = false;
        if(x < 0){
            neg = true;
            x *= -1;
        }
        double y = 0;
        while(x){
            y = (10 * y) + (x % 10);
            x /= 10;
        }
        if(neg) y *= -1;
        if((y > INT_MAX)||(y < INT_MIN)) return 0;
        return (int) y;
    }
};