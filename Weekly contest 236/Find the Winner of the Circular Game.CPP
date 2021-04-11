class Solution {
public:
    void fun(int k, vector<int>&v, int& ans, int index)
    {
        if(v.size() == 1)
        {
            ans = v[0];
            return;
        }
        index = (index + k) % v.size();
        v.erase(v.begin() + index);
        fun(k, v, ans, index);
    }
    int findTheWinner(int n, int k)
    {
        if(n == 1)
        {
            return 1;
        }
        k--;
        vector<int>v;
        for(int i = 0; i < n; i++)
        {
            v.push_back(i + 1);
        }
        int ans = 0;
        fun(k, v, ans, 0);
        return ans;
    }
};
//JOSEPHUS PROBLEM
