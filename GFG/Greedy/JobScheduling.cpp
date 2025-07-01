class Solution {
  public:
   bool static comp(pair<int,int> a,pair<int,int> b)
    {
        return a.second > b.second; 
    }
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        int n = deadline.size();
        int maxDeadline = 0;
        vector<pair<int,int>> intervals;
        for(int i=0;i<n;i++){
            intervals.push_back({deadline[i],profit[i]});
            maxDeadline = max(deadline[i],maxDeadline);
        }
        
        sort(intervals.begin(),intervals.end(),comp);
        
        vector<int> job(maxDeadline+1,-1);
        int profit1 = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=intervals[i].first;j>=1;j--)
            {
                if(job[j] == -1) 
                {
                    job[j] = i;
                    profit1 += intervals[i].second;
                    count+=1;
                    break;
                }
            }
        }
        return {count,profit1};
    }
};