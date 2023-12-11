class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int l = 0;
        int r = 1;
        int maxprofit = 0, profit=0;

        while(r<n){
            if(prices[l]<prices[r]){
                profit = prices[r]-prices[l];
                maxprofit = max(maxprofit, profit);

            }    
            else l = r;

        r += 1;

        }
        return maxprofit;  
    }
};
