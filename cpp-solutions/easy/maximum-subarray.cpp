class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        bool all_negative = true;
        int start = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0) {
                start = i;
                all_negative = false;
                break;
            }
        }
        if(all_negative){ //we just find the max and return that as the max subarray
            return *max_element(nums.begin(), nums.end());
        }
        int maxsofar = nums[start];
        int curr_sum = nums[start];
        for(int i = start+1; i<nums.size(); i++){
            if((curr_sum < 0)&&(nums[i] >= 0)){
                curr_sum = nums[i];
            }
            else{
                curr_sum += nums[i];
            }
            if(curr_sum > maxsofar){
                maxsofar = curr_sum;
            }
        }
        return maxsofar;
    }
};