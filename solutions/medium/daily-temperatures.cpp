class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> ind;
        vector<int> ans(T.size(), 0);
        if(T.size() == 0) return ans;
        ind.push(0);
        for(int i=1; i<T.size(); i++){
            while((!ind.empty())&&(T[ind.top()] < T[i])){
                ans[ind.top()] = i - ind.top();
                ind.pop();
            }
            ind.push(i);
        }
        return ans;
    }
};