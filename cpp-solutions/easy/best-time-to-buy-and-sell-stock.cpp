class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestval = 0;
        if(prices.size() == 0) return 0;
        int curr_min, curr_max;
        curr_min = curr_max = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > curr_max){
                bestval = max(bestval, prices[i] - curr_min);
                curr_max = prices[i];
            }
            else if(prices[i] < curr_min){
                curr_min = curr_max = prices[i];
            }
        }
        return bestval;
    }
};