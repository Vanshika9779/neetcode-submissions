class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size() == 0)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size(); i++)
        // {
        //     cout<<nums[i];
        // }
        vector<int> arr;
        arr.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1] != nums[i])
            {
                arr.push_back(nums[i]);
            }
        }
        // for(int i=0; i<arr.size(); i++)
        // {
        //     cout<<arr[i];
        // }
        int ctr = 1;
        int maxctr = 1;
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i-1]+1 == arr[i])
            {
                ctr++;
                if(maxctr <= ctr)
                    maxctr = ctr;
            }
            else if(arr[i-1]+1 != arr[i])
            {
                ctr = 1;
            }
        }
        if(maxctr >= ctr)
            return maxctr;
        else
            return ctr;
    }
};
