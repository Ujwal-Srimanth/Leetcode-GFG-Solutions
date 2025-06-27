class Solution {
public:
    int lengthOfLastWord(string s) {
        int start;
        for(int i = s.size()-1;i>=0;i--){
            if(s[i] != ' '){
                start = i;
                break;
            }
        }
        int ans = 0;
        for(int i=start;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            ans+=1;
        }
        return ans;
    }

};