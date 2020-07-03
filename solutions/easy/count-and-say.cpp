class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        if(n == 1) return s;
        for(int i=2; i<=n; i++){
            string temp = "";
            int index = 0;
            for(int j=0; j<s.length();){
                while(s[index] == s[j]){
                    j++;
                }
                int count = j-index;
                string say = to_string(count) + s[index];
                temp += say;
                index = j;
            }
            s = temp;
        }
        return s;
    }
};