import java.util.HashMap;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> a = new HashMap<>();
        int[] ans = new int[2];
        for(int i=0; i<nums.length; i++) {
            int compl = target - nums[i];
            if(a.containsKey(compl)) {
                ans[0] = i;
                ans[1] = a.get(compl);
                return ans;
            }
            a.put(nums[i], i);
        }
        return ans;
    }
}