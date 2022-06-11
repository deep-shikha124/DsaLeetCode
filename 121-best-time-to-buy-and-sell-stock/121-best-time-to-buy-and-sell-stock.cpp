class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mxi=INT_MIN;
        int mini=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            mini=min(prices[i],mini);
            profit=max(profit,prices[i]-mini);
        }
        return profit;
    }
};