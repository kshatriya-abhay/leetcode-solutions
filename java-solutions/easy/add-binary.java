class Solution {
    public String addBinary(String a, String b) {
        String ans = "";
        int i = 0;
        int carry = 0;
        for(; i < a.length() || i < b.length(); i++){
            int x, y;
            if(i >= a.length()) x = 0;
            else{
                if(a.charAt(a.length() - i - 1) == '0') x = 0;
                else x = 1;
            }
            if(i >= b.length()) y = 0;
            else{
                if(b.charAt(b.length() - i - 1) == '0') y = 0;
                else y = 1;
            }
            int sum = (x + y + carry) % 2;
            carry = (x + y + carry) / 2;
            ans = String.valueOf(sum) + ans;
        }
        if(carry > 0) ans = "1" + ans;
        return ans;
    }
}