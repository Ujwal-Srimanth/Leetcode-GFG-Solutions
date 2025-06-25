
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
       int i = 0;
       int j = 0;
       int n1 = a.size();
       int n2 = b.size();
       vector<int> ans;
       
       while(i<n1 && j<n2){
           if(a[i] == b[j]){
               if((ans.size() > 0 && ans.back()!=a[i]) || ans.size()==0){
               ans.push_back(a[i]);
               }
               i++;
               j++;
           }
           else if(a[i]<b[j]){
            if((ans.size() > 0 && ans.back()!=a[i]) || ans.size()==0){
               ans.push_back(a[i]);
             }
               i++;
           }
           else if(a[i]>b[j]){
            if((ans.size() > 0 && ans.back()!=b[j]) || ans.size()==0){
               ans.push_back(b[j]);
               }
               j++;
           }
       }
       
       while(i<n1){
            if(ans.size() > 0 && ans.back()!=a[i] || ans.size()==0){
               ans.push_back(a[i]);
             }
             i++;
       }
       while(j<n2){
            if(ans.size() > 0 && ans.back()!=b[j] || ans.size()==0){
               ans.push_back(b[j]);
             }
             j++;
       }
       return ans;
    }

};