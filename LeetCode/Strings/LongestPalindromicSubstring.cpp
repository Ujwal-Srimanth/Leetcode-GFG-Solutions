class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int resLen = 0;
        int n = s.size();

        for(int i=0;i<n;i++){
            int left = i;
            int right = i;
            while(left>=0 && right<=n-1 && s[left]==s[right]){
                if((right-left+1) > resLen){
                    res = s.substr(left,right-left+1);
                    resLen = right-left+1;
                }
                left--;
                right++;
            }

            left = i;
            right = i+1;
            while(left>=0 && right<=n-1 && s[left]==s[right]){
                if((right-left+1) > resLen){
                    res = s.substr(left,right-left+1);
                    resLen = right-left+1;
                }
                left--;
                right++;
            }
        }
        return res;
    }
};