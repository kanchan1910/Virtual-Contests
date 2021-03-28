class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) 
    {
        string ans = "";
        unordered_map<string , string>m;
        for(int i = 0 ; i < knowledge.size(); i++)
        {
            m[knowledge[i][0]] = knowledge[i][1];
        }
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                string tmp = "";
                i++;
                while(s[i] != ')')
                {
                    tmp += s[i];
                    i++;
                }
                if(m.find(tmp) == m.end())
                {
                    ans += "?";
                }
                else
                {
                    ans += m[tmp];
                }
            }
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};

// tc o(n)
// sc o(n)
