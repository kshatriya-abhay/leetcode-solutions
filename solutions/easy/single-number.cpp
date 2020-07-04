class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hax;
        for(int i=0; i<nums.size(); i++){
            hax[nums[i]]++;
        }
        for(auto it = hax.begin(); it!=hax.end(); it++){
            if(it->second == 1) return it->first;
        }
        return 0;
    }
};