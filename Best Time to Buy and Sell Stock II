class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int dif=0;
        for (int i=0;i<prices.size();i++){
            if(i==prices.size()-1)
                break;
            if(prices[i+1]>prices[i]){
               dif=dif+prices[i+1]-prices[i];
           };
        };
        return dif;
    };
};