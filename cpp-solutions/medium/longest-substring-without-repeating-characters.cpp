class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) return 0;
        int chars[128] = {0};
        int ans = 0, left = 0, right = 0;
        while (right < s.length()) {
            char r = s[right];
            chars[r]++; //indexed

            while (chars[r] > 1) {
                char l = s[left];
                chars[l]--;
                left++;
            }

            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};