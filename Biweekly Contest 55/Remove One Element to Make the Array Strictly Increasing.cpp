class Solution {
public:
    bool canBeIncreasing(vector<int>& nums)
    {
        int n = nums.size();
        vector<int>dp(n);
        dp[0] = 1;
        for(int i = 1; i < n; i++)
        {
            dp[i] = 1;
            for(int j = 0; j < i; j++)
            {
                if(nums[i] > nums[j])
                {
                  dp[i] = max(dp[i], dp[j] + 1);   
                }
            }
        }
        int lis = *max_element(dp.begin(), dp.end());
        return (n - lis <= 1);
    }
};
 

// tc o(n^2)
// sc o(n)



class Solution {
public:
    bool canBeIncreasing(vector<int>& nums)
    {
        int n = nums.size();
        int count = 0;
        for(int i = 1; i < n; i++)
        {
            if(nums[i] <= nums[i - 1])
            {
                count++;
                if(count > 1)
                {
                    return false;
                }
                if(i >= 2 && nums[i - 2] > nums[i])
                {
                    // we have to delete nums[i]
                    nums[i] = nums[i - 1];
                }
            }
        }
        return count <= 1;
    }
};
 

// tc o(n)
// sc o(1)
