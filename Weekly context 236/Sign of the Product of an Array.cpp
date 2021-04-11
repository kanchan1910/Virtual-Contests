class Solution {
public:
    int arraySign(vector<int>& nums)
    {
        int n = nums.size();
        int neg = 0;
        bool zero = false;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
            {
                zero = true;
            }
            if(nums[i] < 0)
            {
                neg++;
            }
        }
        if(zero == true)
        {
            return 0;
        }
        return neg % 2 == 0 ? 1 : -1;
    }
};
