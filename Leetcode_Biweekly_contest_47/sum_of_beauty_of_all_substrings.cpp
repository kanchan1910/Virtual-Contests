class Solution {
public:
    int beautySum(string s) 
    {
        int n = s.length();
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int count[26] = {0};
            for(int j = i ; j < n ; j++)
            {
                count[s[j] - 'a']++;
                int maxi = INT_MIN;
                int mini = INT_MAX;
                for(int i = 0 ; i < 26; i++)
                {
                    if(count[i] > 0)
                    {
                        maxi = max(maxi, count[i]);
                        mini = min(mini, count[i]);
                    }
                }
                if(maxi != mini)
                {
                    ans += maxi - mini;
                }
            }
        }
        return ans;
    }
};
// tc o(n * n * 26)
// sc o(n)
