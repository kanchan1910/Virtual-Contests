class Solution {
public:
    long long dp[100005][2];
    long long fun(vector<int>& nums, int index, bool flag, int n)
    {
        if(index == n)
        {
            return 0;
        }
        if(dp[index][flag] != -1)
        {
            return dp[index][flag];
        }
        if(flag == true)
        {
            dp[index][flag] = max(fun(nums, index + 1, flag, n), nums[index] + fun(nums, index + 1, !flag, n));
        }
        else
        {
            dp[index][flag] = max(fun(nums, index + 1, flag, n), fun(nums, index + 1, !flag, n) - nums[index]);
        }
        return dp[index][flag];
    }
    long long maxAlternatingSum(vector<int>& nums)
    {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        return fun(nums, 0, true, n);
    }
};

// tc o(n)
// sc o(n)
