import sys
class Solution:
    def reverse(self, x: int) -> int:
        max_int = 2147483647
        min_int = -2147483648
        if x == min_int:
            return 0
        neg = x < 0
        if neg == True:
            x = x * -1
        y = 0
        while x > 0:
            y = (y * 10) + (x % 10)
            x = x // 10
        if neg: 
            y = y * -1;
        if (y > max_int) or (y < min_int):
            return 0
        return y