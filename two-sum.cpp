class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> index;
        for(int i=0; i<n; i++){
            int comp;
            comp = target - nums[i];
            if(index.find(comp) == index.end()){ // could not find complement
                index[nums[i]] = i;
            }
            else{
                ans.push_back(index[comp]);
                ans.push_back(i);
                return ans;
            }
        }
        return ans;
    }
};