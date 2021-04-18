class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins)
    {
        int n = costs.size();
        sort(costs.begin(), costs.end());
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(costs[i] <= coins)
            {
                ans++;
                coins -= costs[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
// tc o(nlogn)
// sc o(1)
