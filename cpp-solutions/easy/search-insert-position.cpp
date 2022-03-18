class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() == 0) return 0;
        int low = 0;
        int high = nums.size();
        int pos = -1;
        int mid = -1;
        while((low <= high)&&(low < nums.size())){
            mid = (low+high)/2;
            if(nums[mid] == target){
                pos = mid;
                break;
            }
            else if(nums[mid] < target){
                pos = mid+1;
                low = mid+1;
            }
            else{
                pos = mid;
                high = mid - 1;
            }
        }
        return pos;
    }
};