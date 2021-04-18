class Solution {
public:
    bool checkIfPangram(string str) 
    {
        vector<int>freq(26, 0);
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] <= 'z' && str[i] >= 'a')
            {
                freq[str[i] - 'a'] = 1;
            }
        }
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] == 0)
            {
                return false;
            }
        }
        return true;
    }
};
// tc o(n)
// sc o(n)
