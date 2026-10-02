class Solution {
public:
    static bool compare(pair<int, int> a, pair<int,int> b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int, int> freq;
        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        vector<pair<int, int>> v(freq.begin(), freq.end());
        
        sort(v.begin(), v.end(), compare);
        vector<int> arr;
        int i = 0;
        while(k--)
        {
            arr.push_back(v[i].first);
            i++;
        }
        return arr;
    }
};
