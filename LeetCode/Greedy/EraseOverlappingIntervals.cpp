class Solution {
public:
    bool static comp(vector<int> a,vector<int> b)
    {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
     sort(arr.begin(),arr.end(),comp);
    int n = arr.size();
    vector<int> c = arr[0];
    int count = 0;
     for(int i=1;i<n;i++)
     {
        if(c[1] <= arr[i][0])
        {
            c = arr[i];
        }
        else 
        {
            count++;
        }
     }
     return count;
    } 
};