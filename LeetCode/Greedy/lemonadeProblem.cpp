class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int have5 = 0;
        int have10 = 0;
        for(int i=0;i<n;i++){
            if(bills[i] == 5){
                have5+=1;
            }
            else if(bills[i] == 10){
                have10+=1;
                have5-=1;
                if(have5 < 0) return false;
            }
            else if(bills[i] == 20){
                if(have5 > 0 && have10 > 0){
                have10-=1;
                have5-=1;
                }
                else if(have5>=3){
                    have5-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;     
    }
};