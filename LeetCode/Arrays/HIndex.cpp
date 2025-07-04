class Solution {
public:
    int hIndex(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n+1,0);

        for(int i=0;i<n;i++)
        {
            if(arr[i] > n)
            {
                ans[ans.size()-1]+=1;
                continue;
            }
            ans[arr[i]] += 1;
        }

        int papers = 0;
        for(int i=ans.size()-1;i>=0;i--)
        {
            papers+=ans[i];
            if(papers >= i)
            {
                return i;
            }
        }
        return 0;
    }
};