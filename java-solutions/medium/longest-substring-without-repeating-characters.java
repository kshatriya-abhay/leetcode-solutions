class Solution {
    public int lengthOfLongestSubstring(String s) {
        if (s.length() == 0) return 0;
        int[] chars = new int[128];
        ;
        int ans = 0, left = 0, right = 0;
        while (right < s.length()) {
            char r = s.charAt(right);
            chars[r]++; //indexed

            while (chars[r] > 1) {
                char l = s.charAt(left);
                chars[l]--;
                left++;
            }

            ans = Math.max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
}