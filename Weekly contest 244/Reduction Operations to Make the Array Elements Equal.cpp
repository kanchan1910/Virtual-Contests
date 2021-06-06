class Solution {
public:
    int reductionOperations(vector<int>& nums)
    {
        int n = nums.size();
        map<int, int>m;
        int mini = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            m[nums[i]]++;
            mini = min(mini, nums[i]);
        }
        if(m.size() == 1)
        {
            return  0;
        }
        int ans = 0;
        int num = 1;
        for(auto x: m)
        {
            if(x.first == mini)
            {
                continue;
            }
            ans += (num * x.second);
            num++;
        }
        return ans;
    }
};
// tc o(n)
// sc o(n)
