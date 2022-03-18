class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = 0;
        int carry = 0;
        for(; i < a.length() || i < b.length(); i++){
            int x, y;
            if(i >= a.length()) x = 0;
            else{
                if(a[a.size() - i - 1] == '0') x = 0;
                else x = 1;
            }
            if(i >= b.length()) y = 0;
            else{
                if(b[b.size() - i - 1] == '0') y = 0;
                else y = 1;
            }
            int sum = (x + y + carry) % 2;
            carry = (x + y + carry) / 2;
            ans = to_string(sum) + ans;
        }
        if(carry) ans = "1" + ans;
        return ans;
    }
};