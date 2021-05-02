class Solution {
public:
    string replaceDigits(string s)
    {
        int n = s.length();
        for(int i = 1; i < n; i += 2)
        {
            int ch = s[i - 1] - 'a' + 1;
            int val = ch + (s[i] - '0');
            s[i] = val - 1 + 'a';   
        }
        return s;
    }
};
// tc o(n)
// sc o(1)
