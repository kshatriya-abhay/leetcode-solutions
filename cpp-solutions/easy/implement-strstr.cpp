class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0) return 0;
        if(needle.length() > haystack.length()) return -1;
        // first we check if all characters of needle are present in haystack or not, using hashmap
        unordered_map<char, int> hs, n;
        for(int i=0; i < haystack.length(); i++){
            hs[haystack[i]]++;
        }
        for(int i=0; i < needle.length(); i++){
            n[needle[i]]++;
        }
        for(auto it = n.begin(); it != n.end(); it++){
            if(hs.find(it->first) == hs.end()) return -1;
        }
        for(int i=0; i < haystack.length(); i++){
            int j;
            for(j=0; (j<needle.length()) && (i+j<haystack.length()); j++){
                if(haystack[i+j] != needle[j]) {break;}
            }
            if(j == needle.length()){
                return i;
            }
        }
        return -1;
    }
};