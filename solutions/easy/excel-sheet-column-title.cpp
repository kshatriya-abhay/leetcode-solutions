class Solution {
public:
    string convertToTitle(int n) {
        string s = "";
        char base = 'A';
        while(n){
            n--;
            s = string(1, char(65 + (n%26))) + s;
            n /= 26;
        }
        return s;
    }
};