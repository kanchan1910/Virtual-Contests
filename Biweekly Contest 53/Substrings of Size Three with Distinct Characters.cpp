class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        int n = s.length();
        int ans = 0;
        for(int i = 0; i <= n - 3; i++)
        {
            unordered_set<char>ss;
            for(int j = i; j < i + 3; j++)
            {
                ss.insert(s[j]);
            }
            if(ss.size() == 3)
            {
                ans++;
            }
        }
        return ans;
    }
};
