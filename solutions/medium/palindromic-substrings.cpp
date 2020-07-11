class Solution {
public:
    int countSubstrings(string s) {
        int i,j;
        int ans = 0;
        for(i=0; i<s.length(); i++){
            for(j = 0; (i+j <s.length()) && (i-j >= 0); j++){
                if(s[i+j] == s[i-j]) ans++;
                else break;
            }
            for(j = 0; (i+1+j <s.length()) && (i-j >= 0); j++){
                if(s[i+1+j] == s[i-j]) ans++;
                else break;
            }
        }
        return ans;
    }
};