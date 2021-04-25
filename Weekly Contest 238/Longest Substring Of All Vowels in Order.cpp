class Solution {
public:
    int longestBeautifulSubstring(string word) 
    {
        int n = word.length();
        if(n < 5)
        {
            return 0;
        }
        if(n == 5)
        {
            if(word == "aeiou")
            {
                return 5;
            }
            else
            {
                return 0;
            }
        }
        unordered_map<char, int>m;
        int cur_len= 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                cur_len = 1;
                m[word[i]]++;
            }
            else
            {
                if(word[i] >= word[i - 1])
                {
                    cur_len++;
                    m[word[i]]++;
                }
                else
                {
                    if(m['a'] > 0 && m['e'] > 0 && m['i'] > 0 && m['o'] > 0 && m['u'] > 0)
                    {
                        ans = max(ans, cur_len);
                    }
                    cur_len = 1;
                    m.clear();
                    m[word[i]]++;
                }
            }
        }
        if(m['a'] > 0 && m['e'] > 0 && m['i'] > 0 && m['o'] > 0 && m['u'] > 0)
         {
            ans = max(ans, cur_len);
         }
        return ans;
    }
};
