class Solution {
public:
    bool makeEqual(vector<string>& words)
    {
        
        int n = words.size();
        if(n == 1)
        {
            return true;
        }
        vector<int>fre(26, 0);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < words[i].size(); j++)
            {
                fre[words[i][j] - 'a']++;
            }
        }
        for(int i = 0; i < 26; i++)
        {
            if(fre[i] != 0)
            {
                if(fre[i] % n != 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
// tc o(n * len)
// sc o(1)
