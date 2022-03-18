class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;
        int low = 0, high = x;
        int sq = (low + high)/2;
        while(!((sq <= x/sq)&&((sq+1) > x/(sq+1)))){
            if(sq > x/sq){
                high = sq;
            }
            else{
                low = sq;
            }
            sq = (low + high) / 2;
        }
        return sq;
    }
};