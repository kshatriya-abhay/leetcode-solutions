class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        int j = digits.size()-1;
        while((digits[j] == 10)&&(j > 0)){
            digits[j] = 0;
            digits[j-1]++;
            j--;
        }
        if(digits[j] == 10){
            digits[j] = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};