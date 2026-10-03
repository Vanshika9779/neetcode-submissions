class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int i = 0;
        int j = prices.size() - 1;
        int maxP = 0;
        while(i < prices.size() - 1)
        {
            if(i<j)
            {
                int diff = prices[j] - prices[i];
                if(diff > maxP)
                {
                    maxP = diff;
                }
                j--;
            }
            else if(i == j)
            {
                int diff = prices[j] - prices[i];
                if(diff > maxP)
                {
                    maxP = diff;
                }
                i++;
                j = prices.size()-1;
            }
        }
        return maxP;
    }
};
