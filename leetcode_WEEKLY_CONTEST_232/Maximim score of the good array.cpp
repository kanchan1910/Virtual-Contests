class Solution {
public:
    int maximumScore(vector<int>& nums, int k)
    {
        int ans = nums[k];
        int n = nums.size();
        int i = k , j = k;
        int mintillnow =  nums[k];
        while((i - 1) >= 0 && (j + 1) < n)
        {
            int leftvalue = nums[i - 1];
            int rightvalue = nums[j + 1];
            int leftmin = min(leftvalue , mintillnow);
            int rightmin = min(rightvalue, mintillnow);
            if(leftmin > rightmin)
            {
                // GO TO LEFT SIDE  
                i--;
                mintillnow = leftmin;
                ans = max(ans , mintillnow * (j - i + 1));
            }
            else
            {
                // GO TO RIGHT SIDE
                j++;
                mintillnow = rightmin;
                ans = max(ans , mintillnow * (j - i + 1));
            }
        }
        while((i - 1) >= 0)
        {
            int leftvalue = nums[ i - 1];
            int leftmin = min(mintillnow , leftvalue);
            i--;
            mintillnow = leftmin;
            ans = max(ans , mintillnow * (j - i + 1));
        }
        while((j + 1) < n)
        {
            int rightvalue = nums[j + 1];
            int rightmin = min(rightvalue , mintillnow);
            j++;
            mintillnow = rightmin;
            ans = max(ans , mintillnow * (j - i + 1));
        }
        return ans;
    }
};
// tc o(N)
// sc o(1)
