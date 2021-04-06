class Solution {
public:
    long long rev(long long n)
    {
        string str = to_string(n);
        reverse(str.begin(), str.end());
        return stoi(str);
    }
    int countNicePairs(vector<int>& nums)
    {
        int n = nums.size();

         unordered_map<long long, long long> m;
        for(int i = 0; i < n; i++)
        {
            nums[i] = (nums[i] - rev(nums[i]));
            m[nums[i]]++;
        }
        long long ans = 0;
        for(auto x : m)
        {
            long long val = x.second;
            ans = (ans + (val * (val - 1)) / 2) % 1000000007;
        }
    return ans;
    }
};
