class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        if(n==1 || n==0) return true;
        int l = 0;
        int r = n-1;
        while(l<=r)
        {
            if(isalnum(s[l]) && isalnum(s[r]))
            {
                if(toupper(s[l])!=toupper(s[r]))
                {
                    return false;
                }
                else
                {
                    l++;
                    r--;
                }
            }
            else if(isalnum(s[l]) && !isalnum(s[r]))
            {
                r--;
            }
            else if(isalnum(s[r]) && !isalnum(s[l]))
            {
                l++;
            }
            else if(!isalnum(s[r]) && !isalnum(s[l]))
            {
                l++;
                r--;
            }

        }
        return true;
    }
};