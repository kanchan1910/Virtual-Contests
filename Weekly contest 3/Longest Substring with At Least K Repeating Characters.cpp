class Solution {
public:
    int longestSubstring(string s, int k) 
    {
        int n = s.length();
        vector<int>fre(26, 0);
        for(int i = 0; i < n; i++)
        {
            fre[s[i] - 'a']++;
        }
        int ans = 0;
        int start = 0;
        bool f = false;
        for(int i = 0; i < n; i++)
        {
            if(fre[s[i] - 'a'] > 0 && fre[s[i] -'a'] < k)
            {
                string sub = s.substr(start, i - start);
                int ls = longestSubstring(sub, k);
                if(ans < ls)
                {
                    ans = ls;
                }
                start = i + 1;
                f = true;
            }
        }
        if(f == false)
        {
            return s.length();
        }
        if(start <= n - 1)
        {
            string sub = s.substr(start);
            int ls = longestSubstring(sub, k);
            if(ans < ls)
            {
                ans = ls;
            }
        }
        return ans;
    }
};
