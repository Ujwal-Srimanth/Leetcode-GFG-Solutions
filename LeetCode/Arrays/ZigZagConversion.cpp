class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 or numRows>= s.length()) return s;
        vector<string> ans(numRows);
        int step = 1;
        int index = 0;
        for(int i=0;i<s.size();i++)
        {
            ans[index] += s[i];
            if(index == 0) step=1;
            if(index == numRows-1) step = -1;
            index += step;
        }
        string ans1 = "";
        for(auto it: ans)
        {
            ans1+=it;
        }
        return ans1;
    }
};