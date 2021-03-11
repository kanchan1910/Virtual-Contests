class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) 
    {
        long long sum = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
            sum += nums[i];
        }
        if(sum == goal)
        {
            return 0;
        }
        long long diff = abs (goal - sum);
        if(diff <= limit)
        {
            return 1;
        }
        int extra = diff % limit;
        return extra != 0 ? diff / limit + 1 : diff / limit;
        
    }
};
// tc o(n)
// sc o(1)
