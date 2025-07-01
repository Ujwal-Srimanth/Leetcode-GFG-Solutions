class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    bool static comp(pair<int,int> a,pair<int,int> b){
        return a.second < b.second;
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>> meetings;
        for(int i=0;i<start.size();i++){
            meetings.push_back({start[i],end[i]});
        }
        sort(meetings.begin(),meetings.end(),comp);
        
        int count = 1;
        int endTime = meetings[0].second;
        
        for(int i=1;i<meetings.size();i++){
            if(meetings[i].first > endTime){
                count+=1;
                endTime = meetings[i].second;
            }
        }
        return count;
        
        
    }
};