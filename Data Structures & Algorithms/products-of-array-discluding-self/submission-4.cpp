class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int prod = 1,flag=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != 0)
                prod *= nums[i];
            else if(nums[i] == 0)
                flag++;
        }
        vector<int> arr;
        for(int i=0; i<nums.size(); i++)
        {
            if(flag == 0)
                arr.push_back(prod/nums[i]);
            if(flag == 1 && nums[i] != 0)
                arr.push_back(0);
            else if(flag == 1 && nums[i] == 0)
                arr.push_back(prod);
            else if(flag > 1)
                arr.push_back(0);
        }
        return arr;
    }
};
