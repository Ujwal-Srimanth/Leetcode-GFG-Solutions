class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a = strs[0];
        string b = strs[strs.size()-1];
        int m = a.size();
        int n = b.size();
        string count = "";
        for(int i=0;i<min(m,n);i++){
            if(a[i]==b[i]){
                count+=a[i];
            }
            else{
                break;
            }
        }
        return count;
    }
};