class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int max = 0;
        int profit = 0;

        int size = prices.size();

        while(r < size){
            if(prices[l] < prices[r]){
                profit = prices[r] - prices[l];
                if(profit > max){
                    max = profit;
                }
            }
            else{
                l = r;
            }
            r++;
        }
        return max;



    }
};
