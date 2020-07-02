class Solution {
public:
    int romanToInt(string s) {
        int n = 0;
        for(int i=0; i < s.length(); i++){
            switch(s[i]){
                case 'M':
                    n += 1000;
                    break;
                case 'D':
                    n += 500;
                    break;
                case 'C':
                    if(i+1 < s.length()){
                        if(s[i+1] == 'M'){
                            i++;
                            n += 900;
                            break;
                        }
                        if(s[i+1] == 'D'){
                            i++;
                            n += 400;
                            break;
                        }
                    }
                    n +=  100;
                    break;
                case 'L':
                    n += 50;
                    break;
                case 'X':
                    if(i+1 < s.length()){
                        if(s[i+1] == 'C'){
                            i++;
                            n += 90;
                            break;
                        }
                        if(s[i+1] == 'L'){
                            i++;
                            n += 40;
                            break;
                        }
                    }
                    n +=  10;
                    break;
                case 'V':
                    n += 5;
                    break;
                case 'I':
                    if(i+1 < s.length()){
                        if(s[i+1] == 'X'){
                            i++;
                            n += 9;
                            break;
                        }
                        if(s[i+1] == 'V'){
                            i++;
                            n += 4;
                            break;
                        }
                    }
                    n +=  1;
                    break;
            }
        }
        return n;
    }
};