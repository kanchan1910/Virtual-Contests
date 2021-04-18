class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1)
        {
            return 0;
        }
        int ans = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(nums[i + 1] <= nums[i])
            {
                ans += (nums[i] + 1 - nums[i + 1]);
                nums[i + 1] = nums[i] + 1;
            }
        }
        return ans;
    }
};
// tc o(N)
// sc o(1)
