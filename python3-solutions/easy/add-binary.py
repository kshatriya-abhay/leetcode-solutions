class Solution:
    def addBinary(self, a: str, b: str) -> str:
        ans = ""
        i = 0
        carry = 0
        for i in range(max([len(a), len(b)])):
            x = 0
            y = 0
            if i >= len(a):
                x = 0
            elif a[len(a) - i - 1] == '0':
                x = 0
            else:
                x = 1
            if i >= len(b):
                y = 0
            elif b[len(b) - i - 1] == '0':
                y = 0
            else:
                y = 1
            psum = (x + y + carry) % 2
            carry = (x + y + carry) // 2
            ans = str(psum) + ans
        if(bool(carry)):
            ans = "1" + ans
        return ans