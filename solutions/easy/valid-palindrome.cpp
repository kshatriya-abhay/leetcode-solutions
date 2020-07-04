class Solution {
public:
    bool isPalindrome(string s) {
        if(s == "") return true;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string x = "";
        for(int i=0;i<s.length();i++){
            if((!isalnum(s[i])) || (s[i] == ' ')){
                s.erase(i,1);
                i--;
            }
        }
        for(int i=0;i<s.length()/2; i++){
            if(s[i] != s[s.length() - 1 - i]) return false;
        }
        return true;
    }
};