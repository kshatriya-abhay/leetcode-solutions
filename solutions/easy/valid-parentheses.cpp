class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length() == 0) return true;
        for(int i=0; i < s.length(); i++){
            switch(s[i]){
                case '(':
                case '{':
                case '[':
                st.push(s[i]);
                break;
                case ')':
                    if(st.size() == 0) return false;
                    if(st.top() != '(') return false;
                    else st.pop();
                    break;
                case '}':
                    if(st.size() == 0) return false;
                    if(st.top() != '{') return false;
                    else st.pop();
                    break;
                case ']':
                    if(st.size() == 0) return false;
                    if(st.top() != '[') return false;
                    else st.pop();
                    break;
            }
        }
        if(st.size() == 0) return true;
        else return false;
    }
};