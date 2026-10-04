class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> st;
        vector<string> s = tokens;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i] != "+") && (s[i] != "-") && (s[i] != "*") && (s[i] != "/"))
            {
                st.push(stoi(s[i]));
            }
            else if(!st.empty() && ((s[i] == "+") || (s[i] == "-") || (s[i] == "*") || (s[i] == "/")))
            {
                int a = st.top();
                st.pop();
                int b;
                if(!st.empty())
                {
                    b = st.top();
                    st.pop();
                }
                else
                {
                    return 0;
                }
                int res = 0;
                if(s[i] == "+")
                {
                    res = a+b;
                }
                else if(s[i] == "-")
                {
                    res = b-a;
                }
                else if(s[i] == "*")
                {
                    res = a*b;
                }
                else if(s[i] == "/")
                {
                    res = b/a;
                }
                st.push(res);
            }
        }
        return st.top();
    }
};
