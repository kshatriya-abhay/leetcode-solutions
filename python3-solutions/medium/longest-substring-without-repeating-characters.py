class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 0 : return 0
        chars = [0] * 128
        ans, left, right = 0, 0, 0
        while right < len(s):
            r = s[right]
            chars[ord(r)] = chars[ord(r)]+1

            while chars[ord(r)] > 1 :
                l = s[left]
                chars[ord(l)] = chars[ord(l)]-1
                left = left+1

            ans = max(ans, right - left + 1)
            right = right+1
        return ans