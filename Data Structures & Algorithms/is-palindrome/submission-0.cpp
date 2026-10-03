class Solution {
public:
    bool isPalindrome(string s) 
    {
        string str = "";
        for(int i=0; i<s.length(); i++)
        {
            s[i] = tolower(s[i]);
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i]>='0' && s[i] <= '9'))
            {
                str.push_back(s[i]);
            }
        }
        string org = str;
        reverse(str.begin(), str.end());
        if(org == str)
        {
            return true;
        }
        return false;
    }
};
