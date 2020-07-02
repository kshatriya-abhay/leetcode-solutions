class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 1) return 0;
        int s = nums.size();
        int index = 0;
        for(int i=1; i < s; i++){
            if(nums[i] > nums[index]){
                index++;
                swap(nums[i], nums[index]);
            }
        }
        return index+1;
    }
};