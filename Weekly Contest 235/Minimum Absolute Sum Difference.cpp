class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2)
    {
        int n = nums1.size();
        int ans = 0;
        int maxdiff = 0;
        int index = 0;
        for(int i = 0; i < n; i++)
        {
            int diff = abs(nums1[i] - nums2[i]);
            ans = (ans + diff) % 1000000007;
            if(maxdiff < diff)
            {
                maxdiff = diff;
                index = i;
            }
        }
        ans = (ans - maxdiff) % 1000000007;
        for(int i = 0; i < n; i++)
        {
            maxdiff = min(maxdiff, abs(nums1[i] - nums2[index]));
        }
        ans = (ans + maxdiff) % 1000000007;
        return ans;
    }
};
