class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) 
    {
        vector<int>v(26, 0);
        for(int i  = 0; i < brokenLetters.length(); i++)
        {
            v[brokenLetters[i] - 'a'] = 1;
        }
        cout << endl;
        stringstream ss(text);
        string word;
        int ans = 0;
        while(ss >> word)
        {
            int f = 0;
            int n = word.size();
            for(int i = 0; i < n; i++)
            {
                if(v[word[i] - 'a'] == 1)
                {
                    f = 1;
                    break;
                }
            }
            if(f == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
