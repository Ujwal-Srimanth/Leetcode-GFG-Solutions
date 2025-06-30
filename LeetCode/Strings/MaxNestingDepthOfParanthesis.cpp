class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int maxcnt = 0;
        for(auto it : s){
            if(it == '('){
                cnt += 1;
            }
            else if(it == ')'){
                cnt-=1;
            }
            maxcnt = max(cnt,maxcnt);
        }
        return maxcnt;
    }
    
};