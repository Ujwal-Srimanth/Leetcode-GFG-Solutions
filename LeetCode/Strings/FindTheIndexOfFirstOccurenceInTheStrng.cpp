class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        int i = 0;
        int j = 0;
        for(int i=0;i<=n-m;i++){
            int j = 0;
            while(j<m && haystack[i+j] == needle[j]){
                j++;
            }
            if(j==m) return i;
        }
        return -1;
    }
};