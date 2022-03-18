class Solution {
public:
    int lengthOfLastWord(string s) {
        int i;
        int word_start = -1;
        for(i = s.length()-1; i>=0; i--){
            if(s[i] == ' '){
                if(word_start != -1){
                    return word_start - i;
                }
            }
            else{
                word_start = max(word_start, i);
            }
        }
        if(word_start == -1) return 0;
        else return word_start+1;
    }
};