/* first non-repeating character index, if not exsits then -1 */

class Solution {
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int>m;
        int n = s.length();
        int ans = -1;
        for(int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            if(m[s[i]] == 1)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
// tc o(n)
// sc o(n)




class Solution {
public:
    int firstUniqChar(string s)
    {
        vector<int>freq(26, 0);
        int n = s.length();
        int ans = -1;
        for(int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }
        for(int i = 0; i < n; i++)
        {
            if(freq[s[i] - 'a'] == 1)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
// tc o(n)
// sc o(26) ~ o(1)
