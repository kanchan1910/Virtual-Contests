/* longest file path length */


class Solution {
public:
    int lengthLongestPath(string input)
    {
        int ans = 0;
        vector<int>tmp;
        int n = input.length();
        for(int i = 0; i < n; i++)
        {
            int depth = 0;
            bool file = false;
            int len = 0;
            for(; i < n && input[i] != '\n'; i++)
            {
                if(input[i] == '\t')
                {
                    depth++;
                }
                else
                {
                    if(input[i] == '.')
                    {
                        file = true;
                    }
                    len++;
                }
            }
            tmp.resize(depth);
            tmp.push_back(tmp.empty() ? len : tmp.back() + len + 1);
            if(file == true)
            {
                ans = max(ans, tmp.back());
            }
        }
        return ans;
    }
};

// tc o(n)
// sc o(n)
