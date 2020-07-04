class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = 0;
        if(prices.size() == 1) return m;
        int curr_min, curr_max;
        curr_min = curr_max = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i] >= curr_max){
                curr_max = prices[i];
            }
            else{
                m += curr_max - curr_min;
                curr_min = curr_max = prices[i];
            }
        }
        if(curr_max == prices[prices.size()-1]) {
            m += curr_max - curr_min;
        }
        return m;
    }
};