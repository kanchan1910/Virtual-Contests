class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int n1 = s.length();
        int n2 = t.length();
        // for s string
        int j = 0;
        for(int i = 0; i < n2 && j < n1;)
        {
            if(s[j] == t[i])
            {
                j++;
                i++;
            }
            else
            {
                i++;
            }
        }
        if(j == n1)
        {
            return true;
        }
        return false;
    }
};
// tc o(n)
// sc o(1)
