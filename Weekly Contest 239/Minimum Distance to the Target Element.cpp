class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) 
    {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == target)
            {
                ans = min(ans, abs(start - i));
            }
        }
        return ans;
    }
};

// tc o(n)
// sc o(1)
