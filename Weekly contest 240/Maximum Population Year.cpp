class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs)
    {
        int n = logs.size();
        int f[2051] = {0};
        for(int i = 0; i < n; i++)
        {
            int birth = logs[i][0];
            int death = logs[i][1] - 1;
            for(int j = birth; j <= death; j++)
            {
                f[j]++;
            }
        }

        int ans = -1;
        int maxi = INT_MIN;
        for(int i = 1950; i <= 2050; i++)
        {
            if(maxi < f[i])
            {
                maxi = f[i];
                ans = i;
            }
        }
        return ans;
    }
};
