class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        string pre = "";
        string suf = "";
        string ans;
        for(int i=0;i<s.size()-1;i++){
            pre += s[i];
            suf = s[n-i-1] + suf;
            if(suf == pre){
                ans = pre;
            }
        }
        return ans;
    }
};


//optimal KMP 

class Solution {
public:
    string longestPrefix(string s) {
       int n = s.size();
       vector<int> ans(n,0);
       int prevLPS = 0;
       int i = 1;
       while(i<n){
            if(s[prevLPS]==s[i]){
                ans[i] = prevLPS+1;
                prevLPS+=1;
                i+=1;
            }
            else if(prevLPS == 0){
                ans[i] = 0;
                i+=1;
            }
            else
            {
                prevLPS = ans[prevLPS-1];
            }
       }
       return s.substr(0,ans[n-1]);
    }
};
