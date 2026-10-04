class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int i = 0;
        int j = heights.size() - 1;
        int maxRes = 0;
        while( i < j)
        {
            int w = abs(j-i);
            int h = min(heights[j],heights[i]);
            int res = w*h;
            if(res > maxRes)
            {
                maxRes = res;
            }
            if( heights[i] <= heights[j])
            {
                i++;
            }
            else if(heights[j] < heights[i])
            {
                j--;
            }
        }  
        return maxRes;
    }
};
