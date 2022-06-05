class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int miniPrice=INT_MAX;
        int maxProfit=0;
        
        for(int i=0;i<prices.size();i++){
            miniPrice=min(miniPrice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-miniPrice);
        }
        return maxProfit;
    }
};