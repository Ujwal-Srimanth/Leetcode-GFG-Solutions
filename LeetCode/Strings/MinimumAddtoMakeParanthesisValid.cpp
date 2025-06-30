class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int open = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open++;
            }
            else{
                if(open==0){
                    count++;
                }
                else{
                    open--;
                }
            }
        }
        return count + open;
    }
};