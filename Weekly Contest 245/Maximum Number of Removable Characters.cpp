class Solution {
public:
    bool fun(string s, string p, vector<int>& removable, vector<char>& charstring, int k)
    {
        for(int i = 0; i <= k; i++)
        {
            charstring[removable[i]] = '!';
        }
        int i = 0, j = 0;
        while(i < s.length() && j < p.length())
        {
            if(charstring[i] == '!')
            {
                i++;
                continue;
            }
            if(charstring[i] == p[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if(j == p.length())
        {
            return true;
        }
         for(int i = 0; i <= k; i++)
        {
            charstring[removable[i]] = s[removable[i]];
        }
        return false;
    }
    int maximumRemovals(string s, string p, vector<int>& removable) 
    {
        vector<char>charstring(s.length());
        for(int i = 0; i < s.length(); i++)
        {
            charstring[i] = s[i];
        }
        int l = 0, r = removable.size() - 1;
        int ans = -1;
        while(l <= r)
        {
            int m = l + (r - l) / 2;
            if(fun(s, p, removable, charstring, m) == true)
            {
                ans = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return ans + 1;
    }
};

// tc o(nlogn)
// sc o(n)
// if we have done it using linear search then tc o(n ^ 2), will give us TLE
