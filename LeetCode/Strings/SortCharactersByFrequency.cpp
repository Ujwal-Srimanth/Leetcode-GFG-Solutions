class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int> mpp;

        for(auto it : s){
            mpp[it] += 1;
        }

        for(auto& p : mpp){
            pq.push({p.second,p.first});
        }

        string result;

        while(!pq.empty()){
            auto [freq,c] = pq.top();
            pq.pop();
            result.append(freq,c); //append the result freq number of times;
        }
        return result;
    }
};