class Solution {
public:
    bool is_number(char ch)
    {
        int n = ch - '0';
        return n >= 0 && n <= 9;
    }
    string decodeString(string s)
    {
        int n = s.length();
        string ans = "";
        stack<char>st;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == ']')
            {
                string str = "";
                while(st.top() != '[')
                {
                    str += st.top();
                    st.pop();
                }
                reverse(str.begin(), str.end());
                st.pop();
                string num = "";
                while(st.size() > 0 && is_number(st.top()))
                {
                    num += st.top();
                    st.pop();
                }
                reverse(num.begin(), num.end());
                int nn = stoi(num);
                for(int i = 1; i <= nn; i++)
                {
                    for(int j = 0; j < str.length(); j++)
                    {
                        st.push(str[j]);
                    }
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
