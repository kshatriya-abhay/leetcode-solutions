class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        int i, j;
        for(i=0; i< nums.size(); i++){
            if(temp[i] != nums[i]) break;
        }
        if(i == nums.size()) return 0;
        for(j = nums.size()-1; j>=0; j--){
            if(temp[j] != nums[j]) break;
        }
        return j-i+1;
    }
};