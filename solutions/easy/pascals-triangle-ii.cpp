class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for(int i=0; i<=rowIndex; i++){
            ans.push_back(1);
            if(i<2) continue;
            for(int j=ans.size()-2; j>=1; j--){
                ans[j] += ans[j-1];
            }   
        }
        return ans;
    }
};