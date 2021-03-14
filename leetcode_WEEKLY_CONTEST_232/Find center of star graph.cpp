class Solution {
public:
    int findCenter(vector<vector<int>>& edges)
    {
        unordered_map<int,int>m;
        for(int i = 0 ; i < edges.size(); i++)
        {
            m[edges[i][0]]++;
            m[edges[i][1]]++;
        }
        int ans;
        for(auto x : m)
        {
            if(x.second == edges.size())
            {
                ans = x.first;
            }
        }
        return ans;
    }
};
// tc o(n)
// sc o(n)
