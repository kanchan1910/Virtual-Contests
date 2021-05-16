// The idea is

// 	1 = 001
//     5 = 101
//     6 = 110
// 1 ^ 5 = 100
// 1 ^ 6 = 111
// 5 ^ 6 = 011
// 1^5^6 = 010
// -> once we observe all these binary number of the XORs, we can observe that set bit occurs at all the position of i (o<=i<n) will exactly contribute to half of pow(2,n). So, we have two conditions:

// If there is any value of nums that has set ith bit set, then exactly half of 2^n subsets will be of the form, so they will contribute to 2^(n-1+i) to the final sum.
// If there is no value of nums that ith bit set, then we can say that there will be no term in all subsets that have a ith bit set.
// Now the question is to check which position of element of the nums will be set or not. But instead of iterating for all elements , we can use a trick that is simply take the OR of all such values and multiply with 2^(n-1)

class Solution {
public:
    int subsetXORSum(vector<int>& nums)
    {
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            ans |= nums[i];
        }
        ans *= pow(2, n - 1);
        return ans;
    }
};
