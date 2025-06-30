class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string prev = countAndSay(n-1);
        string res = "";
        for(int i=0;i<prev.size();i++){
            char ele = prev[i];
            int count = 1;
            int j = i+1;
            for(j=i+1;j<prev.size();j++){
                if(prev[j]==ele){
                    count++;
                }
                else
                {
                    break;
                }
            }
            res += to_string(count) + ele;
            i=j-1;
        }
        return res;
    }
};