class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i = 0;
        int j = nums.size()-1;
        vector<int> arr;
        while(i<nums.size()-1)
        {
            if((j>i) && ((nums[i]+nums[j]) == target))
            {
                arr.push_back(i);
                arr.push_back(j);
                break;
            }
            else if( (j>i) && ((nums[i]+nums[j]) != target))
            {
                j--;
            }
            else if( i == j)
            {
                i++;
                j = nums.size()-1;
            }
        }
        return arr;
    }
};
