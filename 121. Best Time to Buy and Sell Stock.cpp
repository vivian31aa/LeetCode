class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX, max=0, index=0, profit=0;
        for (int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
                index = i;
            }
            
            max=prices[i];
            if(max-min>profit){
                profit=max-min;
            }   
        }
        return profit;
    }
};