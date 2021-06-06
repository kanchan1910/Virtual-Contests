class Solution {
public:
    int minFlips(string s)
    {
        int n = s.length();
        s = s + s;
        string str1 = "", str2 = "";
        int ans = INT_MAX;
        int diff1 = 0, diff2 = 0;
        for(int i = 0; i < s.length(); i++)
        {
            str1 += i % 2 == 0 ? '0' : '1';
            str2 += i % 2 == 0 ? '1' : '0';
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(str1[i] != s[i])
            {
                diff1++;
            }
            if(str2[i] != s[i])
            {
                diff2++;
            }
            // to remove previous part of a window we have to decrement the diffrences if there
            if(i >= n)
            {
                if(str1[i - n] != s[i - n])
                {
                    diff1--;
                }
                if(str2[i - n] != s[i - n])
                {
                    diff2--;
                }
            }
            if(i >= n - 1)
            {
                ans = min(ans, min(diff1, diff2));
            }
        }
        return ans;
    }
};

// tc o(n)
// sc o(1)
