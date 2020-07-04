class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows < 1) return ans;
        vector<int> init;
        init.push_back(1);
        ans.push_back(init);
        if(numRows == 1) return ans;
        for(int i=1; i<numRows; i++){
            vector<int> curr;
            curr.push_back(1);
            for(int j=1; j < i; j++){
                curr.push_back(ans[i-1][j-1] + ans[i-1][j]);
            }
            curr.push_back(1);
            ans.push_back(curr);
        }
        return ans;
    }
};