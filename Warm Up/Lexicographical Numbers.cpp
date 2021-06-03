/* Lexicographically sorted numbers */


class Solution {
public:
    vector<int> lexicalOrder(int n)
    {
        vector<int>ans;
        vector<string>tmp;
        for(int i = 1; i <= n; i++)
        {
            tmp.push_back(to_string(i));
        }
        sort(tmp.begin(), tmp.end());
        for(int i = 0; i < tmp.size(); i++)
        {
            ans.push_back(stoi(tmp[i]));
        }
        return ans;
    }
};

// tc o(nlogn)
// sc o(n)



class Solution {
public:
    void fun(int i, vector<int>& ans, int n)
    {
        if(i > n)
        {
            return;
        }
        ans.push_back(i);
        for(int j = 0; j <= 9; j++)
        {
            fun(i * 10 + j, ans, n);
        }
    }
    vector<int> lexicalOrder(int n)
    {
        vector<int>ans;
        for(int i = 1; i <= 9; i++)
        {
            fun(i, ans, n);
        }
        return ans;
    }
};
// tc o(n)
// sc o(1)
