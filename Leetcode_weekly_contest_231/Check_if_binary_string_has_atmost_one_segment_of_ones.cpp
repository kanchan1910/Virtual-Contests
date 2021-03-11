class Solution {
public:
    bool checkOnesSegment(string s) 
    {
        int ones = 0;
        int n = s.length();
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == '1')
            {
                ones++;
            }
            else
            {
                if(ones != 0)
                {
                    ans++;
                }
                ones = 0;
            }
        }
       if(ones != 0)
       {
           ans++;
       }
        if(ans == 1)
        {
            return true;
        }
        return false;
    }
};

// tc o(n)
// sc o(1)
