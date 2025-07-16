class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int left_sum = 0;
        for(int i=0;i<k;i++)
        {
            left_sum+=cardPoints[i];
        }
        int maxsum = left_sum;
        int right_index = n-1;
        int right_sum = 0;
        for(int i=k-1;i>=0;i--)
        {
            left_sum -= cardPoints[i];
            right_sum += cardPoints[right_index];
            right_index--;
            maxsum = max(maxsum,right_sum+left_sum);
        }
        return maxsum;
    }
};