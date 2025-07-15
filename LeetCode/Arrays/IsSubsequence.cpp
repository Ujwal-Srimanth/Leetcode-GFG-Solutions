class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l1 = 0;
        int l2 = 0;
        int n1 = s.size();
        int n2 = t.size();
        while(l1 < n1 && l2 < n2)
        {
            if(s[l1]==t[l2])
            {
                l1++;
                l2++;
            }
            else
            {
                l2++;
            }
        }
        if(l1>=n1) return true;
        return false;
    }
};