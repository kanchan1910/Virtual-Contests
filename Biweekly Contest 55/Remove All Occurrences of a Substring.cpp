
class Solution {
public:
    string removeOccurrences(string s, string part) 
    {
        stack<char>ss;
        int n = s.length();
        int m = part.length();
        for(int i = 0; i < n; i++)
        {
            ss.push(s[i]);
            if(ss.size() >= m)
            {
                string tmp = "";
                for(int j = m - 1; j >= 0; j--)
                {
                    if(part[j] != ss.top())
                    {
                        int index = 0;
                        while(index < tmp.length())
                        {
                            ss.push(tmp[index]);
                            index++;
                        }
                        break;
                    }
                    else
                    {
                        tmp += ss.top();
                        ss.pop();
                    }
                }
            }
        }
        string ans = "";
        while(!ss.empty())
        {
            ans += ss.top();
            ss.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// tc o(nm)
// sc o(n)




class Solution {
public:
    string removeOccurrences(string s, string part) 
    {
       
        int n = s.length();
        int m = part.length();
        while(s.find(part) != string :: npos)
        {
            auto index = s.find(part);
            s = s.substr(0, index) + s.substr(index + m);
        }
        return s;
    }
};
