class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int latest_index = -1;
        for(int i=num.length()-1;i >= 0;i--){
            if((num[i]-'0')%2 == 1){
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};