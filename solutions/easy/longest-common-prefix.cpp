class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        if(strs.size() > 0) s = strs[0];
        for(int i=1; i < strs.size(); i++){
            if(strs[i].length() < s.length()) s = s.substr(0, strs[i].length());
            for(int j=0; j < s.length() && j < strs[i].length(); j++){
                if(s[j] != strs[i][j]){
                    s = s.substr(0, j);
                    break;
                }
            }
        }
        return s;
    }
};